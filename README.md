*This activity has been created as part of the 42 curriculum by mhatamle*

# ft_printf

## Description

The `ft_printf` project is part of the 42 School curriculum. The goal is to recreate the behavior of the standard C `printf()` function.

This project helps develop a deeper understanding of variadic functions, formatted output, data types, pointers, and memory management in C.

The program implements a custom `ft_printf()` function that prints formatted text to the standard output and returns the total number of characters printed.

### Supported Conversions

The mandatory part supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a decimal integer. |
| `%i` | Prints an integer. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints a number in lowercase hexadecimal format. |
| `%X` | Prints a number in uppercase hexadecimal format. |
| `%%` | Prints a percent sign. |

## Instructions

### Compilation

Clone the repository and enter the project directory:

```bash
git clone YOUR_REPOSITORY_URL
cd printf
```

Compile the project using the Makefile:

```bash
make
```

This generates the static library `libftprintf.a`.

To remove object files:

```bash
make clean
```

To remove object files and the compiled library:

```bash
make fclean
```

To rebuild the project:

```bash
make re
```

### Usage

Include `ft_printf.h` in your C source file and link the static library when compiling.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello %s! Number: %d\n", "42", 42);
    ft_printf("Characters printed: %d\n", count);
    return (0);
}
```

Compile the example:

```bash
cc main.c -L. -lftprintf -o test
```

Run the program:

```bash
./test
```

## Algorithm and Data Structure

### Algorithm

The implementation processes the format string one character at a time.

1. Initialize a variadic argument list using `va_start()`.
2. Iterate through the format string.
3. If the current character is not `%`, print it using `write()` and increment the character count.
4. If the current character is `%`, inspect the following character to identify the conversion specifier.
5. Dispatch the conversion to its corresponding helper function.
6. Each helper function retrieves the appropriate argument using `va_arg()`, prints the result, and returns the number of characters printed.
7. Add the returned count to the total character count.
8. Finish the variadic argument list using `va_end()` and return the total count.

### Data Structures

The implementation uses the following C types and mechanisms:

- **`va_list`:** Stores the state required to access the variable arguments passed to `ft_printf()`.
- **Character pointer (`const char *`):** Provides access to the format string.
- **Integer counters:** Track the current position in the format string and the total number of characters printed.
- **Helper functions:** Separate conversion logic into manageable functions, such as `ft_char`, `ft_string`, `ft_int`, `ft_unsigned`, `ft_hex`, and `ft_pointer`.

No complex data structures are required because the format string can be processed sequentially without storing the entire output.

### Justification

Processing the format string sequentially makes the implementation straightforward and memory-efficient. Dispatching each conversion to a separate helper function improves readability, modularity, and maintainability.

Using `write()` provides direct output to the standard output, while returning the number of characters printed reproduces an important behavior of the original `printf()` function.

## Resources

The following resources were used to understand the concepts required for this project:

- [42 School](https://42.fr/) — Information about the 42 curriculum.
- [Linux man pages: printf](https://man7.org/linux/man-pages/man3/printf.3.html) — Reference for formatted output.
- [Linux man pages: write](https://man7.org/linux/man-pages/man2/write.2.html) — Documentation for the `write()` system call.
- [Linux man pages: stdarg](https://man7.org/linux/man-pages/man3/stdarg.3.html) — Documentation for variadic argument handling.
- [GNU C Library: Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html) — Explanation of variable argument lists.
- [C Reference](https://en.cppreference.com/w/c/variadic.html) — Reference for variadic functions in C.

### AI Usage

AI tools were used as learning and development support throughout the project.

They helped explain C programming concepts, including variadic functions, pointers, integer conversions, hexadecimal representation, and the behavior of `write()` and `va_arg()`.

AI was also used to support step-by-step debugging, understand compiler errors, review Norminette issues, and improve the organization of helper functions and the Makefile.

The implementation was developed and tested as part of the learning process, with AI explanations used to support understanding rather than replace it.

## Author

**marah hatamleh**

42 School Student
