# Printf

## Introduction

This is a custom implementation of the <span style="color:blue">`printf`</span> function, allowing you to format and print text in a variety of ways. It provides support for a subset of format specifiers similar to the standard <span style="color:blue">`printf`</span>.

<details>
<summary><strong>Table of Contents</strong></summary>

- [List of Format Specifiers](#list-of-format-specifiers)
- [List of Headers](#list-of-headers)
- [Prototypes](#prototypes)
- [Flowchart](#flowchart)
- [Clone Link](#clone-link)
</details>

## List of Format Specifiers

### `%s` - Format / Print Strings

This format specifier is used for formatting and printing strings.

### `%c` - Format / Print Characters

This format specifier is used for formatting and printing characters.

###`%i` - Format / Print Integers

This format specifier is used for formatting and printing integers.

### `%d` - Format / Print Decimal Numbers

This format specifier is used for formatting and printing decimal numbers.

## List of Headers

- `#include "main.h"`
- `#include <stdio.h>`
- `#include <stdlib.h>`
- `#include <string.h>`
- `#include <stdarg.h>`
- `#include <unistd.h>`
- `#include <limits.h>`
- `#include <>stddef.h>`

## Prototypes

- `int get_spec_func(char *str, va_list args, int i)`
- `int print_char(va_list args)`
- `int print_string(va_list args)`
- `int print_digit(va_list args)`
- `int _putchar(char c)`
- `int _strlen(const char *str)`
- `int _printf(char *format, ...)`

## Flowchart

![Flowchart](https://github.com/iamseaniam/holbertonschool-printf/blob/main/Untitled%20Diagram.drawio.png)

## Clone Link

You can clone this project from the following repository:

```sh
git clone https://github.com/iamseaniam/holbertonschool-printf.git

