# Contributing to Netralis SDK

Thank you for your interest in Netralis. The SDK is in **pre-alpha**
development and the implementation tree is currently maintained
internally — but we welcome early discussion, design feedback, and
test reports from the community.

## What you can contribute right now

- 💬 **Design feedback** on the public API surface in
  [`include/netralis/`](include/netralis/) — open an issue with the
  `design-feedback` label
- 🐛 **Spec / documentation issues** in the README, ROADMAP, or
  example code
- ❓ **Use-case proposals** — tell us what you'd build on a $10
  AI-capable microcontroller; this directly informs the roadmap
- 🔬 **Hardware compatibility reports** once the alpha SDK ships in
  Q2 2026

## What we are NOT accepting yet

- Implementation pull requests against `src/` — the implementation
  tree is not yet public, so we cannot meaningfully review or merge
- New features outside the published roadmap (please discuss in an
  issue first)
- Refactors of files marked **experimental** in their header

## How to open an issue

1. Check the [existing issues](https://github.com/netralis-inc/netralis-sdk/issues)
   to avoid duplicates.
2. Use a clear, prefixed title:
   - `[design]` — proposed API change
   - `[docs]` — documentation issue
   - `[example]` — example code issue
   - `[hardware]` — hardware compatibility report
3. Include:
   - What you observed / what you propose
   - Why it matters
   - Affected file(s) or section(s)

## Pull requests (documentation only, for now)

While implementation PRs are not yet accepted, **documentation and
example PRs are welcome**. Please:

- Branch from `main`.
- Keep changes focused and small.
- Make sure CI passes (`.github/workflows/ci.yml` runs a header
  syntax check and a docs hygiene check).
- Sign off your commit (`git commit -s`) — we follow the
  Developer Certificate of Origin.

## Development Setup (coming with the alpha)

When the SDK alpha opens in Q2 2026, this section will document:

- Toolchain (ESP-IDF v5.x)
- Build system
- Local hardware emulator
- Style guide and lint configuration

For now, the only build target is the public-API syntax check
performed by [`.github/workflows/ci.yml`](.github/workflows/ci.yml).

## Code of Conduct

By participating in this project, you agree to be respectful and
constructive. Personal attacks, harassment, or discriminatory
language will not be tolerated. To report a concern, email
[george@netralis.ca](mailto:george@netralis.ca).

## License

By contributing, you agree that your contributions will be licensed
under the [Apache License 2.0](LICENSE).

---

**Netralis Inc.** · Edmonton, Alberta, Canada
