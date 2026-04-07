// examples/voice_assistant.cpp
//
// A minimal voice AI assistant built on the Netralis SDK.
//
// Target hardware: ESP32-S3 (any board with a microphone and
// speaker — e.g. an INMP441 + MAX98357A combo).
//
// Build: see docs/BUILDING.md (coming with the alpha).
//
// Copyright (c) 2026 Netralis Inc.
// Licensed under the Apache License, Version 2.0.

#include "netralis/agent.h"

auto agent = NeAgent("home-assistant");

void setup() {
  agent.on_wake("hey netralis", []() {
    // STT → LLM (local or cloud) → TTS, all managed by Netralis.
    auto query = mic_listen();        // streaming ASR
    auto reply = agent.ask(query);    // auto-route: local or cloud
    speaker_play(reply);
  });

  netralis_start();  // OTA, routing, multi-lang — batteries included
}

void loop() {
  // Netralis runtime handles scheduling on its own task.
  // Application code can yield safely here.
}
