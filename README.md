# README

## Build Project

```text
make build
```

Builds the C project using CMake.

---

## Run Tests

```text
make test
```

Runs the C unit tests.

Python tests are executed automatically in GitHub Actions using pytest.

---

## Static Analysis

```text
make check
```

Runs static analysis with cppcheck.

Python static analysis is executed automatically in GitHub Actions using flake8.

---

## Clean Build Files

```text
make clean
```

Removes generated build files.

---

## Continuous Integration

GitHub Actions automatically performs:

- Build of the C project
- C unit tests
- Static analysis for C
- Python unit tests
- Static analysis for Python

The workflow runs on pushes to `main` and on pull requests.