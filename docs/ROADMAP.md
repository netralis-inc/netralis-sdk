# Netralis SDK · Roadmap

This roadmap mirrors the public timeline at [netralis.ca](https://netralis.ca/#roadmap)
and is updated as milestones ship. Dates are targets, not commitments.

---

## ✅ Q1 2026 · Done

**Incorporation & Architecture**

- Netralis Inc. incorporated in Canada (Edmonton, Alberta).
- Hardware abstraction layer designed (uniform sensor / audio /
  display / OTA APIs across ESP32-S3 / C3 / P4).
- Local-vs-cloud routing protocol designed.
- MCP-based agent runtime architecture defined.
- Public SDK API surface drafted (this repository).

---

## 🟣 Q2 2026 · In Progress

**Private SDK Alpha**

- ESP32-S3 reference board bring-up.
- Voice pipeline: streaming ASR + LLM + TTS with wake-word
  detection.
- MCP runtime stub: agents can register and respond to
  intents over the bus.
- OTA updates delivered via Google Cloud Pub/Sub.
- Closed alpha distributed to selected design partners.

---

## ⚪ Q3 2026 · Planned

**Developer Dev Kit**

- Reference hardware kit (board + microphone + speaker + case).
- Web onboarding flow with Firebase Auth.
- First 50 external developers enrolled to the alpha program.
- Documentation site + tutorials.

---

## ⚪ Q4 2026 · Planned

**Public Beta**

- Cross-chip support: ESP32-C3 and ESP32-P4 in addition to S3.
- MCP agent marketplace: third-party agents installable
  over-the-air to any Netralis-powered device.
- Public docs + open waitlist conversion.
- BigQuery telemetry pipeline for routing optimization.

---

## ⚪ 2027 · Planned

**v1.0 Release & Commercial Licensing**

- Stable v1.0 API with semver guarantees.
- Commercial licensing tiers for OEMs and product manufacturers.
- Production-grade reference designs for consumer hardware.

---

## How to follow along

- 🌐 [netralis.ca](https://netralis.ca)
- ⭐ Watch this repository
- ✉️ [george@netralis.ca](mailto:george@netralis.ca)
