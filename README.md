*/his activity has been created as part of the 42 curriculum by mhatamle/*
# ft_printf

## 📖 Description

The `ft_printf` project is part of the 42 School curriculum. The goal is to recreate the behavior of the original C `printf()` function.

This project helps develop a better understanding of variadic functions, data types, and output formatting in C.

## 🛠️ Supported Conversions

The mandatory part supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal integer |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a percent sign |

## 📂 Files

- `ft_printf.c` — Main function that processes the format string.
- `ft_printf.h` — Header file containing function prototypes and required includes.
- `ft_char.c` — Handles character conversion.
- `ft_string.c` — Handles string conversion.
- `ft_int.c` — Handles integer conversions (`%d` and `%i`).
- `ft_unsigned.c` — Handles unsigned integer conversion (`%u`).
- `ft_pointer.c` — Handles pointer conversion (`%p`).
- `ft_hex.c` — Handles hexadecimal conversions (`%x` and `%X`).
- `ft_percent.c` — Handles the percent sign (`%%`).
- `Makefile` — Compiles the source files into a static library.

## ⚙️ Compilation

Compile the project using:

```bash
make
```

This creates the `libftprintf.a` static library.

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

## 🧪 Usage

Include the header in your C file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 42);
    return (0);
}
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf
```

## 📚 Concepts Learned

- Variadic functions: `va_start`, `va_arg`, and `va_end`.
- Writing output using `write()`.
- Handling different data types.
- Using helper functions and modular code.
- Creating and using a static library.
- Managing compilation with a Makefile.

## 👩‍💻 Author

42 School student.
