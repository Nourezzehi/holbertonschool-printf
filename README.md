                                <-- C - printf -->

Description:
* This project aims to creat my own _printf() function which replicates the C standard library printf() function.

What I learned from this project:
- Applying variadic functions to a big project
- The complexities of printf
- Managing a lot of files and finding a good workflow

Prototype:
* int _printf(const char *format, ...);

Usage:
- Prints a string to the standard output, according to a given format
- Returns the number of characters in the output string on success, -1 otherwise
- Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and regular characters

Examples:
- _printf("Hello, Holberton\n") prints "Hello, Holberton", followed by a new line
- _printf("%s", "Hello") prints "Hello"
- _printf("This is a number: %d", 98) prints "This is a number: 98"
