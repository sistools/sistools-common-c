# sistools-common-c - Installation and Use <!-- omit in toc -->


## Table of Contents <!-- omit in toc -->

- [Requisites](#requisites)
- [Building](#building)
	- [via CMake](#via-cmake)


## Requisites

Installation is via **CMake** (once the project scaffolding is present),
together with a supported C toolchain.

Third-party library dependencies — both for the core library and for
tests — will be listed here as they are introduced. None are recorded at
this time.


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

3. Run a build of the generated **CMake**-derived build files via the
   **build_cmake.sh** script, as in:

	```bash
	$ ./build_cmake.sh
	```

   (**NOTE**: if you provide the flag `--run-make` (=== `-m`) in step 2 then
   you do not need this step.)

4. Install the library on the host, via `cmake`, as in:

	```bash
	$ sudo cmake --install ${SIS_CMAKE_BUILD_DIR:-./_build} --config Release
	```

5. Then to use the library from another **CMake** project:

	```cmake
	find_package(sistools-common-c REQUIRED)

	target_link_libraries(your_target
		PRIVATE
			sistools-common-c::core
	)
	```

> **NOTE**: the **CMake** lists files and helper scripts named above are
> part of the project scaffolding and will land in a subsequent bootstrap
> step; this document describes the intended installation contract.


<!-- ########################### end of file ########################### -->
