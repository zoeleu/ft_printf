*This project has been created as part of the 42 curriculum by zleullie.*

# ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough.

## Description
The `ft_printf` project is a recreation of the C standard library's `printf` function. This project introduces variadic functions in C, string formatting, type conversion, and state management. The resulting library, `libftprintf.a`, will be used in future projects that require formatted output.

## Instructions
To compile the library, run the following command at the root of the repository:
```bash
make
```
This will generate `libftprintf.a`. You can then include it in your projects by compiling your code with this static library and including `ft_printf.h`:
```bash
cc my_program.c libftprintf.a -I . -o my_program
```

Supported conversions include: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Resources
- [man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- [C Variadic Functions (stdarg.h)](https://en.cppreference.com/w/c/variadic)
- **AI Usage:** AI was used for scaffolding documentation, and generating test cases for my own tester. No AI was used for code writing in this project.

## Algorithm Explanation
The core algorithm for `ft_printf` revolves around iteratively parsing the format string:
1. Traverse the string character by character.
2. If a regular character is encountered, it is immediately printed to standard output.
3. If a `%` character is found, it signals a format specifier. The next character(s) are read to determine the type conversion.
4. Using isolated handler functions (e.g., `char_handler.c`, `str_handler.c`, `hex_handler.c`), the execution is delegated based on the specifier.
5. Variadic arguments (`va_list`) are accessed to fetch the data corresponding to each specifier.
6. The total number of printed characters is accumulated and returned, accurately mirroring the behaviour of the original `printf`.

This modular approach isolates the logic for each format specifier into its own file, satisfying the Norme requirements while making the code maintainable, readable, and easy to extend.
