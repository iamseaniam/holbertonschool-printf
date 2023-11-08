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

### <span style="color:green">`%s`</span> - Format / Print Strings

This format specifier is used for formatting and printing strings.

### <span style="color:orange">`%c`</span> - Format / Print Characters

This format specifier is used for formatting and printing characters.

### <span style="color:purple">`%i`</span> - Format / Print Integers

This format specifier is used for formatting and printing integers.

### <span style="color:red">`%d`</span> - Format / Print Decimal Numbers

This format specifier is used for formatting and printing decimal numbers.

## List of Headers

- `#include "main.h"`
- `#include <span style="color:blue">stdio.h</span>`
- `#include <span style="color:blue">stdlib.h</span>`
- `#include <span style="color:blue">string.h</span>`
- `#include <span style="color:blue">stdarg.h</span>`
- `#include <span style="color:blue">unistd.h</span>`
- `#include <span style="color:blue">limits.h</span>`
- `#include <span style="color:blue">stddef.h</span>`

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

