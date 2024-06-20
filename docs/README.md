# full-cmake-non-guided
Intégration de CMake, CTest, Doxygen et GitHub Actions en un seul project

## How to build the project

```sh
mkdir build
cmake -B build
cmake --build build
```

## How to Run the tests

```sh
ctest --test-dir build
```

## How to Generate the documentation

```sh
cmake --build build --target doc_doxygen
```

More info on the workflow [here](how-it-works.md)