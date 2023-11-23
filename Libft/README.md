<h1>Libft</h1>
<h5>Description</h5>
Libft is a custom C library created as part of a programming curriculum. It contains a collection of commonly used functions in C programming to aid in various tasks, ranging from string manipulation to memory allocation.

<h5>Features</h5>
String Manipulation: Functions for string length, comparison, copy, and concatenation.
Memory Management: Memory allocation, freeing, and manipulation functions.
Linked Lists: Basic operations for singly linked lists.
Character Operations: Functions to check for character types and conversions.
Additional Utilities: Other helpful functions frequently used in C programming.
Getting Started
To use libft in your project:

Clone the repository: git clone <repository_url>
Include the libft.h header file in your C code.
Compile the library using the provided Makefile.
Example:
```c
Copy code
#include "libft.h"
#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    int str_len = ft_strlen(str);
    printf("Length of the string: %d\n", str_len);
    return 0;
}
```
<h5>Documentation</h5>
For detailed documentation on each function and its usage, refer to the comments in individual source files. Additionally, a libft.h file is provided with function prototypes.

<h5>Contribution</h5>
Contributions are welcome! Feel free to submit issues, feature requests, or pull requests.
