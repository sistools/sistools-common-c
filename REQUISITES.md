# sistools-common-c - Requisites <!-- omit in toc -->


## Introduction

Building **sistools-common-c** requires **CMake** 3.20 or later and a
supported C toolchain.


## Required dependencies

**sistools-common-c** depends on:

* [**CLASP**](https://github.com/synesissoftware/CLASP) 0.15 or later;
* [**Diagnosticism**](https://github.com/synesissoftware/Diagnosticism) 0.3 or later;
* [**STLSoft**](https://github.com/synesissoftware/STLSoft) 1.11.1 or later;


## Test-only dependencies

Building the unit tests additionally requires:

* [**xTests**](https://github.com/synesissoftware/xTests) 0.26.4 or later;

The test-only dependencies are not required when configuring with
`./prepare_cmake.sh -T`.


<!-- ########################### end of file ########################### -->
