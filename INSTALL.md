# sistools-common-c - Installation and Use <!-- omit in toc -->


## Table of Contents <!-- omit in toc -->

- [Requisites](#requisites)
- [Building](#building)
	- [via CMake](#via-cmake)


## Requisites

The **sistools-common-c** core library has no required third-party runtime
dependencies.

Building the project's unit tests additionally requires:

* [**STLSoft**](https://github.com/synesissoftware/STLSoft);
* [**xTests**](https://github.com/synesissoftware/xTests);

> **NOTE**: if you do not wish to build the tests, then you need not
> obtain/install the **STLSoft** / **xTests** dependencies (use
> `./prepare_cmake.sh -T` once the CMake helper scripts are present).


## Building


### via CMake

The primary choice for installation is by use of **CMake**.

1. Obtain the latest distribution of **sistools-common-c**, from
   https://github.com/sistools/sistools-common-c/, e.g.

	```bash
	$ mkdir -p ~/open-source
	$ cd ~/open-source
	$ git clone https://github.com/sistools/sistools-common-c/
	```

2. Prepare the CMake configuration, via the **prepare_cmake.sh** script, as
   in:

	```bash
	$ cd ~/open-source/sistools-common-c
	$ ./prepare_cmake.sh
	```

   (**Hint**: execute `$ ./prepare_cmake.sh --help` for more information.)

   **NOTE**: if you intend only to build and install the library then you
   can eschew building of tests (via flag `-T`) and use the command:

	```bash
	$ ./prepare_cmake.sh -T
	```

3. Run a build of the generated **CMake**-derived build files via the
   **build_cmake.sh** script, as in:

	```bash
	$ ./build_cmake.sh
	```

   (**NOTE**: if you provide the flag `--run-make` (=== `-m`) in step 2 then
   you do not need this step.)

4. As a check (when testing was not disabled), execute the built unit-test
   programs via **run_all_unit_tests.sh**, as in:

	```bash
	$ ./run_all_unit_tests.sh
	```

5. Install the library on the host, via `cmake`, as in:

	```bash
	$ sudo cmake --install ${SIS_CMAKE_BUILD_DIR:-./_build} --config Release
	```

6. Then to use the library from another **CMake** project:

	```cmake
	find_package(sistools-common-c REQUIRED)

	target_link_libraries(your_target
		PRIVATE
			sistools-common-c::sistools-common-c
	)
	```

> **NOTE**: the **CMake** lists files and helper scripts named above are
> part of the project scaffolding and will land in a subsequent bootstrap
> step; this document describes the intended installation contract.


<!-- ########################### end of file ########################### -->
