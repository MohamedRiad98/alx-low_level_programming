## ALX Team Project: _printf

This team project is part of the first-year curriculum at ALX. The goal of this project is to replicate the functionality of the C standard library `printf()` function.

### Learning Objectives

By working on this project, team members will gain the following skills and knowledge:

- Collaboration using Git in a team setting
- Application of variadic functions in a larger project
- Understanding the complexities of the `printf` function
- Managing a large number of files and establishing an efficient workflow

### Prototype

```c
int _printf(const char *format, ...);
```

### Usage

The `_printf` function prints a formatted string to the standard output.

- All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command `gcc -Wall -Werror -Wextra -pedantic *.c`.
- The function returns the number of characters in the output string on success and -1 otherwise.
- Call the function as follows: `_printf("format string", arguments...)`, where the format string can contain conversion specifiers, flags, and regular characters.

### Examples

- `_printf("Hello, main\n")` prints "Hello, Main", followed by a new line.
- `_printf("%s", "Hello")` prints "Hello".
- `_printf("This is a number: %d", 98)` prints "This is a number: 98".

### Tasks

The following tasks are part of this project:

0. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**

   Write a function that produces output according to the format specifier.
   - Conversion specifiers to handle: `%c` (converts input into a character) and `%s` (converts input into a string).

1. **Education is when you read the fine print. Experience is what you get if you don't**

   Handle additional conversion specifiers:
   - `%d`: converts input into a base 10 integer.
   - `%i`: converts input into an integer.

2. **Just because it's in print doesn't mean it's the gospel**

   Create a man page for the `_printf` function.

3. **With a face like mine, I do better in print**

   Handle the following conversion specifier:
   - `%b`: converts the unsigned int argument into binary.

4. **What one has not experienced, one will never understand in print**

   Handle the following conversion specifiers:
   - `%u`: converts the input into an unsigned integer.
   - `%o`: converts the input into an octal number.
   - `%x`: converts the input into a hexadecimal number.
   - `%X`: converts the input into a hexadecimal number with capital letters.

5. **Nothing in fine print is ever good news**

   Optimize the function by using a local buffer of 1024 characters to minimize the number of calls to the `write` function.

6. **My weakness is wearing too much leopard print**

   Handle the following custom conversion specifier:
   - `%S`: prints a string with non-printable characters represented as `\x` followed by the ASCII code value in hexadecimal (uppercase, always 2 characters).

7. **How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print**

   Handle the following conversion specifier:
   - `%p`: converts the `int` input into a pointer address.

8. **The big print gives and the small print takes away**

   Handle the following flag characters for non-custom conversion specifiers:
   - `+`: adds a "+" in front of signed positive numbers and a "-" in front of signed negative numbers.
   - `space`: same as "+", but adds a space (overwritten by "+").
   - `#`: adds a "0" in front of octal conversions that don't begin with one, and a "0x" or "0X" for hexadecimal conversions.

9. **Sarcasm is lost in print**

   Handle the following length modifiers for non-custom conversion specifiers:
   - `l`: converts `d`, `i`, `u`, `o`, `x`, and `X` conversions into `long` signed or unsigned integers.
   - `h`: converts `d`, `i`, `u`, `o`, `x`, and `X` conversions into `short` signed or unsigned integers.

10. **Print some money and give it to us for the rain forests**

    Handle the field width for non-custom conversion specifiers.

11. **The negative is the equivalent of the composer's score, and the print the performance**

    Handle the precision for non-custom conversion specifiers.

12. **It's depressing when you're still around and your albums are out of print**

    Handle the `0` flag character for non-custom conversionspecifiers.

13. **Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection**

    Handle the `-` flag character for non-custom conversion specifiers.

14. **Print is the sharpest and the strongest weapon of our party**

    Handle the following custom conversion specifier:
    - `%r`: prints the reversed string.

15. **The flood of print has turned reading into a process of gulping rather than savoring**

    Handle the following custom conversion specifier:
    - `%R`: prints the string using the ROT13 encryption algorithm.

16. **All the above options work well together**

    Ensure that all the options mentioned above work well together without conflicts.

Feel free to refer to the corresponding files for completed tasks.

*Note: The task descriptions have been summarized for brevity. Please refer to the original project documentation for detailed instructions.*
