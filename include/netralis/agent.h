// Netralis SDK · agent.h
//
// AI-Native OS for Edge Devices.
// Public API for the Netralis agent runtime.
//
// Status: pre-alpha · API will change before v0.1
//
// Copyright (c) 2026 Netralis Inc.
// Licensed under the Apache License, Version 2.0. See LICENSE.

#pragma once

#include <functional>
#include <string>

namespace netralis {

// Routing policy hints. The runtime balances local-vs-cloud
// inference based on the active policy, current latency budget,
// and on-device model capacity.
enum class Routing {
  kAuto,    // Default. Runtime decides per-query.
  kLocal,   // Force on-device inference.
  kCloud,   // Force cloud inference (Vertex AI / Gemini).
};

class NeAgent {
 public:
  using WakeHandler = std::function<void()>;

  // Construct an agent with a stable identifier. The identifier
  // is used for telemetry, persistent state, and OTA targeting.
  explicit NeAgent(const char* name);
  ~NeAgent();

  NeAgent(const NeAgent&) = delete;
  NeAgent& operator=(const NeAgent&) = delete;

  // Register a wake-word handler. The handler runs on the agent
  // task; it is safe to call mic_listen / ask / speaker_play
  // from inside it.
  void on_wake(const char* phrase, WakeHandler cb);

  // Synchronously query the agent. The runtime auto-routes
  // between local and cloud LLM based on `routing`, query
  // complexity, latency budget, and privacy policy.
  std::string ask(const std::string& query,
                  Routing routing = Routing::kAuto);

 private:
  struct Impl;
  Impl* impl_;
};

// Boot the runtime: scheduling, OTA, telemetry, routing.
// Must be called once after all agents have been configured.
void netralis_start();

// Streaming ASR. Blocks until end of voice activity is detected.
std::string mic_listen();

// Stream playback through the device's audio output (TTS).
void speaker_play(const std::string& text);

}  // namespace netralis

// Convenience aliases for the introductory examples.
using NeAgent = netralis::NeAgent;
using netralis::netralis_start;
using netralis::mic_listen;
using netralis::speaker_play;
