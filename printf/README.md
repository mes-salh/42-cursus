# libftprintf

## Description

This project implements a custom version of the `printf()` function from the C standard library. It's designed to replicate the functionality of `printf()` while offering certain optimizations and customization options.<br/>

## Table of Contents

- [Introduction](#libftprintf)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Supported Conversions](#supported-conversions)
- [Building the Project](#building-the-project)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To get started with this project, clone this repository

## Prerequisites

- GCC compiler
- `ar` command-line utility

## Usage

To use `ft_printf()` in your project, follow these steps:

1. Include the header file `libftprintf.h` in your source code.<br/>
2. Compile your code with the library `libftprintf.a` linked.<br/>

Example:

```c
#include "libftprintf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
## Supported Conversions
%c: Prints a single character.<br/>
%s: Prints a string.<br/>
%p: Prints a void pointer in hexadecimal format.<br/>
%d: Prints a decimal (base 10) number.<br/>
%i: Prints an integer in base 10.<br/>
%u: Prints an unsigned decimal (base 10) number.<br/>
%x: Prints a number in hexadecimal (base 16) lowercase format.<br/>
%X: Prints a number in hexadecimal (base 16) uppercase format.<br/>
%%: Prints a percent sign.<br/>

## Building the Project
To build the project and create the libftprintf.a library, use the provided Makefile.<br/>

```bash
make
```
This will compile the source files and create the library file.<br/>

## Testing
To test the ft_printf() function against the original printf(), run the provided test suite:<br/>

```bash
./run_tests
```
## Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.<br/>




