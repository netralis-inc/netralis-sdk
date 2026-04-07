# Netralis SDK

> **AI-Native OS for Edge Devices** — large language models on $10 microcontrollers.

[![Stage](https://img.shields.io/badge/stage-pre--alpha-8b5cf6)](#status)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue)](LICENSE)
[![Hardware](https://img.shields.io/badge/hardware-ESP32--S3%20%7C%20C3%20%7C%20P4-67e8f9)](#supported-hardware)
[![Website](https://img.shields.io/badge/website-netralis.ca-c4b5fd)](https://netralis.ca)

Netralis SDK is the OS layer that brings voice-first AI assistants, intelligent local/cloud LLM routing, and an MCP-based agent runtime to low-cost microcontrollers.

[netralis.ca](https://netralis.ca) · [Roadmap](#roadmap) · [Contact](mailto:george@netralis.ca)

---

## Status

> 🚧 **Pre-alpha — under active development.**
>
> The first SDK alpha is targeted for **Q2 2026**. This repository is a public placeholder while the core implementation is being developed internally. APIs will change. Watch this repo or [join the waitlist](https://netralis.ca/#contact) to get notified when the alpha opens.

---

## What it does

Three lines to a full voice AI assistant on an ESP32-S3:

```cpp
#include "netralis/agent.h"

auto agent = NeAgent("home-assistant");

agent.on_wake("hey netralis", []() {
  // STT → cloud LLM → TTS, all managed by Netralis
  auto query = mic_listen();        // streaming ASR
  auto reply = agent.ask(query);    // auto-route: local or cloud
  speaker_play(reply);
});

netralis_start();  // OTA, routing, multi-lang — batteries included
```

See [`examples/voice_assistant.cpp`](examples/voice_assistant.cpp) for a complete reference.

---

## Platform Capabilities

| Layer | What it provides |
|---|---|
| **🧠 Intelligent Routing** | Local models handle simple tasks; complex queries auto-route to cloud LLMs (Vertex AI / Gemini Flash). Optimizes cost and latency in real time. |
| **🎤 Voice-First Interface** | Streaming ASR + LLM + TTS pipeline with wake-word detection, speaker recognition, and multi-language support out of the box. |
| **📦 Hardware Abstraction** | One OS, many chips. Unified APIs for sensors, displays, audio, and OTA updates across ESP32-S3, C3, and P4. |
| **🔌 Agent Runtime (MCP)** | MCP-based agent framework lets third-party developers build AI apps that run on any Netralis-powered device. No firmware expertise required. |

---

## Supported Hardware

| Chip       | Status      | Notes                                  |
|------------|-------------|----------------------------------------|
| ESP32-S3   | 🟢 Primary  | Reference platform for the alpha       |
| ESP32-C3   | 🟡 Planned  | Q4 2026                                |
| ESP32-P4   | 🟡 Planned  | Q4 2026                                |

**Target**: a complete voice AI device for **under $10 BOM cost**.

---

## Cloud Architecture

The Netralis cloud layer is built end-to-end on Google Cloud:

| Service | Role |
|---|---|
| **Vertex AI / Gemini Flash** | Cloud LLM inference for routed queries. Streaming responses keep voice latency under 800 ms. |
| **Pub/Sub** | Bidirectional device fleet messaging — OTA updates, agent deployments, remote configuration. |
| **Firebase Auth** | Developer accounts, device identity, end-user pairing. |
| **BigQuery** | Aggregated, privacy-preserving telemetry feeding back into the routing layer. |

---

## Roadmap

- ✅ **Q1 2026** — Incorporation & architecture
- 🟣 **Q2 2026** — Private SDK alpha (ESP32-S3 baseline, voice pipeline, MCP runtime stub, OTA over Pub/Sub)
- ⚪ **Q3 2026** — Developer dev kit + onboarding (open enrollment for the first 50 external developers)
- ⚪ **Q4 2026** — Public beta (cross-chip support C3 + P4, MCP agent marketplace)
- ⚪ **2027** — v1.0 release + commercial licensing

See [`docs/ROADMAP.md`](docs/ROADMAP.md) for full milestone detail.

---

## Repository Layout

```
netralis-sdk/
├── include/netralis/   # Public C++ headers (API surface)
├── examples/           # Reference applications
├── docs/               # Specifications and design notes
├── LICENSE             # Apache 2.0
└── README.md
```

The implementation tree (`src/`) is being developed internally and will be opened progressively as it stabilizes.

---

## Getting Early Access

The SDK is currently in pre-alpha. To join the developer waitlist or discuss integrations:

- 🌐 **Website**: [netralis.ca](https://netralis.ca)
- ✉️ **Email**: [george@netralis.ca](mailto:george@netralis.ca)

---

## License

Copyright © 2026 Netralis Inc.

Licensed under the Apache License, Version 2.0. See [LICENSE](LICENSE) for the full text.

---

**Netralis Inc.** · Edmonton, Alberta, Canada 🇨🇦
