# MLang: A Toy Machine Learning Programming Language

MLang is a semester project to design a tiny programming language specialized for machine learning tasks. The goal is to implement a minimal compiler/runtime with first-class tensors, basic ML ops, and a small autodiff engine — without external ML libraries.

This repository currently contains project scaffolding only. Implementation will follow the study and build roadmap.

## Project Objectives
- Minimal language front end (lexer, parser, AST, interpreter/VM)
- Tensor runtime with basic linear algebra primitives
- Reverse-mode autodiff for simple expressions
- ML building blocks (e.g., Dense, ReLU, MSE)
- Training loop with gradient descent

## Status
- Planning and scaffolding
- No runtime/compiler implementation yet (intentionally)

## Build (CMake)
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build
```

## Repository Structure
- `src/` — source code (placeholder targets only)
- `tests/` — test scaffolding (placeholder)
- `docs/` — roadmap and Notion-ready plans
- `.github/workflows/` — CI pipeline

## Roadmap & Weekly Plan
See `docs/ROADMAP.md` and `docs/NOTION_TEMPLATE.md`.

## License
MIT — see `LICENSE`.

## Contributing
See `CONTRIBUTING.md` and `CODE_OF_CONDUCT.md`.
