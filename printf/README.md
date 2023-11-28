# libftprintf

## Description

This project implements a custom version of the `printf()` function from the C standard library. It's designed to replicate the functionality of `printf()` while offering certain optimizations and customization options.

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

To get started with this project, clone this repository:

## Prerequisites

- GCC compiler
- `ar` command-line utility

## Usage

To use `ft_printf()` in your project, follow these steps:

1. Include the header file `libftprintf.h` in your source code.
2. Compile your code with the library `libftprintf.a` linked.

Example:

```c
#include "libftprintf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}

## Supported Conversions
%c: Prints a single character.
%s: Prints a string.
%p: Prints a void pointer in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.

Building the Project
To build the project and create the libftprintf.a library, use the provided Makefile.

```bash
make
