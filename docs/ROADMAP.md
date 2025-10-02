# Roadmap (Weekly Plan)

## Weeks 1–2 → Math & Systems Foundations

- Goal: Refresh core ML math & systems programming to prepare for backend implementation.
- Study:
  - 3Blue1Brown: Essence of Linear Algebra
  - Khan Academy: Probability & Statistics
  - MIT OCW: Calculus
  - Computer Systems: A Programmer’s Perspective (CSAPP, ch. 2–3)
- Tasks:
  - Implement matrix multiplication & dot product in C++ (no libraries).
  - Implement gradient descent for f(x) = x² (numerical derivative).
- Deliverable:
  - A C++ program that multiplies matrices and runs gradient descent on a quadratic function.

## Weeks 3–5 → Compiler & Language Basics

- Goal: Build a toy interpreter as the foundation for your ML language.
- Study:
  - Crafting Interpreters (online book) — chapters 2–5
  - Dragon Book — ch. 1–3
- Tasks:
  - Week 3: [ ] Implement lexer in C++ (tokenize `x = 2 + 3;`).
  - Week 4: [ ] Build AST and simple parser (expressions, variables).
  - Week 5: [ ] Write interpreter to evaluate expressions.
- Deliverable:
  - A C++ interpreter that runs:
    - `x = 3;`
    - `y = 4;`
    - `print(x + y); // outputs 7`

## Weeks 6–8 → ML Runtime (Tensor + Autodiff Engine)

- Goal: Implement tensor data structure + automatic differentiation.
- Study:
  - Baydin et al. (2018), Automatic Differentiation in ML: a Survey
  - Goodfellow et al., Deep Learning (Ch. 6, Backpropagation)
  - PyTorch Tensor docs (for inspiration)
- Tasks:
  - Week 6: [ ] Implement Tensor class in C++ (N-D arrays).
  - Week 7: [ ] Add forward computation graph (ops: `+`, `-`, `*`, `sin`).
  - Week 8: [ ] Implement reverse-mode autodiff (backpropagation).
- Deliverable:
  - A C++ runtime that computes gradients:
    - `Tensor x = Tensor({2});`
    - `Tensor y = Tensor({3});`
    - `Tensor z = x * y + sin(x);`
    - `z.backward(); // get dz/dx, dz/dy`

## Weeks 9–11 → Language + ML Integration

- Goal: Connect compiler frontend with ML runtime.
- Study:
  - Engineering a Compiler (Cooper & Torczon) — runtime systems
  - Martin Fowler: Domain-Specific Languages
- Tasks:
  - Week 9: [ ] Extend parser → support `tensor X[100,10];`.
  - Week 10: [ ] Add ML ops: Dense layer, ReLU, MSE loss.
  - Week 11: [ ] Implement linear regression in your language.
- Deliverable:
  - Code in your language:
    - `tensor X[100,1];`
    - `tensor Y[100,1];`
    - `model M = Dense(1);`
    - `train(M, X, Y);`

## Weeks 12–13 → Advanced ML Features

- Goal: Add neural nets + training.
- Study:
  - Andrew Ng’s ML Course
  - Stanford CS231n Lectures (for CNN basics)
- Tasks:
  - Week 12: [ ] Implement Dense, ReLU, Softmax in runtime.
  - Week 13: [ ] Train a classifier (XOR dataset, tiny MNIST subset).
- Deliverable:
  - Your language trains a 2-layer NN to solve XOR classification.

## Weeks 14–15 → Optimization & Extensions

- Goal: Optimize runtime & add polish.
- Study:
  - Tensor optimizations (operator fusion, lazy eval)
  - Compare TensorFlow (static graph) vs PyTorch (dynamic graph)
- Tasks:
  - Week 14: [ ] Add graph optimizer (merge repeated ops).
  - Week 15: [ ] Implement `save_model` / `load_model`.
- Deliverable:
  - Efficient runtime with model persistence.

## Week 16 → Capstone & Presentation

- Goal: Wrap up project for class showcase.
- Tasks:
  - Write documentation (syntax + usage).
  - Create sample programs (linear regression, XOR, NN).
  - Write final project report.
- Deliverable:
  - GitHub repo with code, docs, report, and demo programs.
