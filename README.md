# Demo of problem with using Folly and MSVC++ and vcpkg and C++20

Steps to reproduce:

```bat
git clone https://github.com/microsoft/vcpkg
cd vcpkg
bootstrap-vcpkg.bat
cd ..
git clone https://github.com/eao197/folly_vcpkg_msvc_cpp20
cd folly_vcpkg_msvc_cpp20
mkdir cmake_build
cd cmake_build
set VCPKG_ROOT=../../vcpkg
cmake -DCMAKE_BUILD_TYPE=Release -G Ninja ..
cmake --build .
```
