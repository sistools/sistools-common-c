# sistools-common-c - TODO <!-- omit in toc -->


## Table of Contents <!-- omit in toc -->

- [Functional improvements](#functional-improvements)
- [Performance improvements](#performance-improvements)


## Functional improvements

* [x] CMake scaffolding (`CMakeLists.txt`, `cmake/` modules, package export);
* [x] `.sis/` metadata;
* [x] CMake helper scripts (`prepare_cmake.sh`, `build_cmake.sh`, …);
* [x] Source/layout skeleton (`include/sistools/`, `src/`);
* [x] Project documentation aligned with current scaffolding;
* [x] Test tree (`test/scratch/libver`, `test/unit/test.unit.api_version`);
* [ ] Examples tree (`examples/`);
* [x] Continuous integration (`.github/workflows/ci.yml` / `ci-cell.yml`);
* [ ] TinyCC CI with tests: the **`linux-tcc`** cell currently builds and installs with **`BUILD_TESTING=OFF`** until **STLSoft** / **xTests** support TinyCC;
* [ ] Editor defaults (`.vscode/settings.json`, `.vimrc`);
* [ ] First shared helper APIs extracted from **sistools** programs;


## Performance improvements

* \<none> (yet)


<!-- ########################### end of file ########################### -->
