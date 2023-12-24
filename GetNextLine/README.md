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
```
### Function Usage

- `char *get_next_line(int fd)`: Reads a line from the given file descriptor.
  - Parameters:
    - `fd`: File descriptor to read from.
  - Returns:
    - `char *` containing the read line.
    - `NULL` if there is nothing else to read or an error occurs.

### Recommendations

- Follow the project guidelines strictly.
- Efficiently handle memory allocation and deallocation.
- Implement error checks for file reading and function calls.
- Optimize for different `BUFFER_SIZE` values to ensure scalability.
- Test the function extensively with various input scenarios.
- Document your code for clarity and understanding.

## Resources

- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language)): Learn more about the C language.
- [File Descriptors in C](https://www.geeksforgeeks.org/file-descriptors-in-c/): Understand file descriptors and their usage in C.
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/): Learn about dynamic memory allocation in C.

## Notes

- Avoid using global variables and the `lseek()` function as per project guidelines.
- Implement logical handling for reading from files and standard input efficiently.
- Test your code extensively with different input scenarios.

## Credits

Created by [Your Name].
