# cpp-template

![Build](../../actions/workflows/build.yml/badge.svg) ![clang-format](../../actions/workflows/clang-format.yml/badge.svg)

Template for David's C++ projects.

After cloning this project you will need to init/update the `vcpkg` submodule by running: `git submodule update --init --recursive`

To build this project you will need:

* **A C++20 compiler** (one of MSVC, g++, or clang++)
* **CMake 3.20.3 or later**.  You could use an older version, but you'll need to modify your CMakeLists.txt accordingly.  "Modern CMake" has recommendations on where to get CMake here: <https://cliutils.gitlab.io/modern-cmake/chapters/intro/installing.html>
* **clang-format** and an editor that supports it.  You don't strictly _need_ this, but the GitHub Actions will bark at you if you push code that doesn't match .clang_format.
* `vcpkg`'s bootstrap process will want several tools installed: `sudo apt-get install curl zip unzip tar`

## Related Projects

<https://github.com/lefticus/cpp_starter_project/>: Jason Turner's starter project.  This template's compiler warnings CMake configuration was shamelessly stolen from that repo.

<https://github.com/TheLartians/ModernCppStarter/>: Another starter project template.
