# C-learning
### README

# C Learning Exercises

This repository contains C language exercises from the book "Learn C The Hard Way" by Zed A. Shaw. These exercises are designed to help beginners learn the fundamentals of C programming through practical examples and hands-on practice.

## Repository Structure

The repository is organized as follows:

- **c-skeleton/**: Contains a skeleton project setup with a Makefile, source files, and tests.
  - **bin/**: Directory for binaries.
  - **LICENSE**: License file for the project.
  - **Makefile**: Makefile to build the project.
  - **notes.txt**: Notes related to the project.
  - **README.md**: README file for the c-skeleton project.
  - **src/**: Source code files.
    - **dbg.h**: Debugging macros.
    - **libex29.c**: Example source file.
  - **tests/**: Test files for the project.
    - **ex29_tests.c**: Test file for exercise 29.
    - **libex29_tests.c**: Additional test file for exercise 29.
    - **runtests.sh**: Script to run tests.

- **db.dat**: Example database file.
- **devpkg/**: Development package with various utilities.
  - **bstrlib.c**: String library implementation.
  - **bstrlib.h**: String library header.
  - **bstrlib.o**: Compiled object file.
  - **commands.c**: Command implementation.
  - **commands.h**: Command header.
  - **db.c**: Database implementation.
  - **dbg.h**: Debugging macros.
  - **db.h**: Database header.
  - **devpkg.c**: Main development package file.
  - **Makefile**: Makefile to build the development package.
  - **README**: README file for the development package.
  - **shell.c**: Shell implementation.
  - **shell.h**: Shell header.

- **exX.c**: Exercise source files (e.g., `ex1.c`, `ex10.c`, etc.).
- **ex19/**: Directory for exercise 19.
  - **ex19.c**: Source file for exercise 19.
  - **ex19.h**: Header file for exercise 19.
  - **Makefile**: Makefile to build exercise 19.
  - **object.c**: Object implementation for exercise 19.
  - **object.h**: Object header for exercise 19.

- **ex20/**: Directory for exercise 20.
  - **dbg**: Debug file for exercise 20.
  - **dbg.c**: Debug source file for exercise 20.
  - **dbg.h**: Debug header for exercise 20.
  - **Makefile**: Makefile to build exercise 20.

- **ex22/**: Directory for exercise 22.
  - **dbg.h**: Debug header for exercise 22.
  - **ex22.c**: Source file for exercise 22.
  - **ex22.h**: Header file for exercise 22.
  - **ex22_main**: Main file for exercise 22.
  - **ex22_main.c**: Main source file for exercise 22.
  - **ex22.o**: Compiled object file.
  - **Makefile**: Makefile to build exercise 22.

- **liblcthw/**: Library for "Learn C The Hard Way".
  - **bin/**: Directory for binaries.
  - **build/**: Build directory containing library files.
    - **liblcthw.a**: Static library.
    - **liblcthw.so**: Shared library.
  - **LICENSE**: License file for the library.
  - **Makefile**: Makefile to build the library.
  - **notes.txt**: Notes related to the library.
  - **README.md**: README file for the library.
  - **src/lcthw/**: Source files for the library.
    - **dbg.h**: Debugging macros.
    - **list.c**: List implementation.
    - **list.h**: List header.
    - **list.o**: Compiled object file.
  - **tests/**: Test files for the library.
    - **list_tests.c**: List test file.
    - **minunit.h**: Minimal unit testing framework.
    - **runtests.sh**: Script to run tests.

- **Makefile**: Top-level Makefile to build the entire project.
- **README.md**: This README file.
- **validate_storage.cpp**: Example C++ file.

## Getting Started

### Prerequisites

To compile and run the code in this repository, you will need:

- A C compiler (e.g., GCC)
- Make (optional, for building the exercises)

### Cloning the Repository

Clone this repository to your local machine using the following command:

```sh
git clone git@github.com:Zephyr-yzz/C_learning.git
```

### Building the Exercises

Navigate to the project directory and build the exercises using the provided Makefile:

```sh
cd C_learning
make
```

### Running the Exercises

After building the exercises, you can run them using the following command:

```sh
./bin/example_program
```

Replace `example_program` with the name of the executable you want to run.


