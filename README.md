# printf Project

This project is an implementation of the `printf` function in C. The function produces output according to a specified format. It supports various conversion specifiers and handles edge cases in a manner similar to the standard `printf` function.

## Table of Contents

- [Description](#description)
- [Supported Conversion Specifiers](#supported-conversion-specifiers)
- [Usage](#usage)
- [Compilation](#compilation)
- [Files](#files)
- [Code Examples](#code-examples)
- [Project Requirements](#project-requirements)
- [Authors](#authors)
- [Collaboration](#collaboration)
- [License](#license)

## Description

The `_printf` function is designed to mimic the standard C library `printf` function, which formats and prints data to the standard output. This project was developed as part of the ALX Software Engineering program.

## Supported Conversion Specifiers

The `_printf` function supports the following conversion specifiers:

- `%c`: Print a character.
- `%s`: Print a string.
- `%%`: Print a literal `%`.
- `%d`, `%i`: Print integers.
- `%u`: Print unsigned integers.
- `%o`: Print unsigned octal.
- `%x`, `%X`: Print unsigned hexadecimal.
- `%p`: Print pointer address.
- `%b`: Print unsigned integer as binary.
- `%S`: Print string with non-printable characters as `\x` followed by ASCII value.
- `%r`: Print reversed string.
- `%R`: Print rot13'ed string.

## Usage

To use the `_printf` function, include the `main.h` header file in your source code and call `_printf` with the desired format string.

Example:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return 0;
}
```

## Compilation

To compile the project, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

```
Ensure that all required source files are in the same directory when compiling.

## # Files

The project consists of the following files:

- **README.md**: Detailed description of the project.
- **main.h**: Header file with function prototypes and include guards.
- **_printf.c**: Main function handling the conversion specifiers.
- **functions.c**: Helper functions for each conversion specifier.
- **utils.c**: Utility functions for string manipulation and other repetitive tasks.
- **main.c**: Test file (not to be pushed to the repository).

## Code Examples

### Example 1: Basic Usage

```c
#include "main.h"

int main(void)
{
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    return (0);
}
```
### Example 2: Numbers and Pointers

```
#include "main.h"

int main(void)
{
    int len;
    unsigned int ui;
    void *addr;

    len = _printf("Length:[%d, %i]\n", 39, 39);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Unsigned:[%u]\n", ui);
    _printf("Pointer:[%p]\n", addr);
    return (0);
}
```
### Example 3: Custom Specifiers

``` 
#include "main.h"

int main(void)
{
    _printf("Binary:[%b]\n", 98);
    _printf("Reversed:[%r]\n", "Hello");
    _printf("ROT13:[%R]\n", "Hello");
    _printf("Special:[%S]\n", "Best\nSchool");
    return (0);
}
```
## Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called `main.h`
- All your header files should be include guarded
- Authorized functions and macros: `write` (man 2 write), `malloc` (man 3 malloc), `free` (man 3 free), `va_start` (man 3 va_start), `va_end` (man 3 va_end), `va_copy` (man 3 va_copy), `va_arg` (man 3 va_arg)

## Authors

- Ronald Odongo
- Zakariya Mohamed

## Collaboration

This project was completed as part of a collaborative effort in the ALX Software Engineering program. Each member contributed to different aspects of the project, including design, implementation, and testing.

## Contributing

To contribute to this project, fork the repository, create a new branch, and submit a pull request with your changes. Ensure that your code follows the Betty style guidelines and includes appropriate documentation.

## Issues

If you encounter any issues or bugs, please open an issue on the GitHub repository and describe the problem in detail. We will address the issue as soon as possible.

## License

This project is licensed under the MIT License - see the `LICENSE` file for details.
