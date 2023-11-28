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
