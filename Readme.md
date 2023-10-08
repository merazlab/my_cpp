## Setup

## Installation

gcc
cmake


## Basic Execution

```
#include <iostream>

using namespace std;

int main() {
    std::cout << "hello world";
    return 0;
} 
```
```
g++ main.cpp    #Compile
./a.out         #RUN
```

## Basic Cmake Execution

```touch CMakeLists.txt
   mkdir build
   cd build/ 
```

```
project( first_project ) # Mandatory.
cmake_minimum_required(VERSION 3.1) # Mandatory.

#message(STATUS ${PROJECT_SOURCE_DIR})

add_executable(a.out main.cpp)
```

## Cmake linking Execution


``` project( first_project ) # Mandatory.
cmake_minimum_required(VERSION 3.1) # Mandatory.

#message(STATUS ${PROJECT_SOURCE_DIR})
add_library(tools tools.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)
```



