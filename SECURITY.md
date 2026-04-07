# Security Policy

## Supported Versions

| Version           | Supported                          |
|-------------------|------------------------------------|
| `0.x` (pre-alpha) | ⚠️ Not for production use          |
| `1.0` and later   | ✅ Will be supported once released |

The Netralis SDK is currently in **pre-alpha**. Versions are unstable
and intended only for evaluation. A formal supported-versions table
will appear with the v1.0 release in 2027.

## Reporting a Vulnerability

If you discover a security vulnerability in the Netralis SDK,
please **do not** open a public issue. Instead, email:

📧 **security@netralis.ca** (forwards to the founder) — or
📧 **george@netralis.ca**

Please include:

- A description of the vulnerability and its potential impact
- Steps to reproduce
- Affected version(s) or commit hash
- Your name / contact for follow-up (optional)

## Response Process

| Stage                 | Target                |
|-----------------------|-----------------------|
| Acknowledgement       | Within 3 business days |
| Initial assessment    | Within 7 business days |
| Critical issue patch  | Within 30 days         |

## Scope

The Netralis SDK targets resource-constrained microcontrollers
running over a network. We pay particular attention to:

- OTA update authentication and integrity
- Device identity and provisioning (Firebase Auth)
- Local ↔ cloud communication channels (Pub/Sub)
- Voice data handling and on-device privacy
- The MCP-based agent runtime trust model

**Out of scope (for now):**

- Issues in third-party dependencies — please report upstream
- Issues in pre-release / experimental APIs marked as such in their
  header file

## Disclosure Policy

We follow a coordinated-disclosure model. After a fix is released,
we will publish an advisory crediting the reporter — unless the
reporter requests anonymity.

---

**Netralis Inc.** · Edmonton, Alberta, Canada
