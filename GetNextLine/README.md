# Get Next Line Project

## Description

This project involves implementing a function `get_next_line` in C that reads a line from a file descriptor. The function allows reading a file or standard input line by line, processing it efficiently without reading the entire file into memory at once.

## Project Structure

- `get_next_line.c`: Contains the implementation of the `get_next_line` function.
- `get_next_line_utils.c`: Includes helper functions used in `get_next_line.c`.
- `get_next_line.h`: Header file defining the prototype for `get_next_line`.
- `README.md`: Project documentation.

## Usage

### Compilation

To compile the project with a specified buffer size (example with a buffer size of 42):

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c <additional_files>.c
