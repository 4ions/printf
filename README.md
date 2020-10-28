# Project Requirements

-   All files will be compiled on Ubuntu 14.04 LTS
-   Programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All files end with a new line
-   The code use the  `Betty`  style. It will be checked  [Here](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")
-   Do not use global variables
-   The prototypes of all functions should be included in your header file called  `holberton.h`

### Authorized functions and macros

-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `va_copy`  (`man 3 va_copy`)
-   `va_arg`  (`man 3 va_arg`)

# DESCRIPTION

The _printf() function produces output according to a format as described below. _printf() writes output to the stdout.
This function writes the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

# COMPILATION
```
gcc -Wall -Werror -Wextra -pedantic *.c
```
### USE
This printf has several special characteristics that can be useful to transform incoming information into something different, for this we use different functions that gave a very positive result, to be able to use the characteristics, the function _prinf must be called as follows:
 * c - Print a char found inside the ASCII table 
 *  s - Print a string 
 *  d - Print an integer 
 * i - Print an integer
 * b - Convert a number to binary 
 * r - print a string in reverse

### EXAMPLE
* To make use of the% c specifier, the following structure is used:

		 `_printf ("%c", [C])`
 
	Where [C] is exchanged for the char to write, or the variable that contains 	the char: 

    `_prinf ("%c", "H")`

	 An "H" will be printed.

* To print a string% s, the following structure must be used:

	`_prinf ("% s", [C])`
	Where [C] is the variable that contains the string, or the string to print, as shown below
	
	`_prinf ("% s", "Holberton")`
	or
	c = "Holberton";
	`_prinf ("%s", c ");`
	That way, "Holberton" would be printed.

* To print an integer you have two different ways but with the same 	structure:
`_printf ("%d", [C]);` || `_printf ("%i", [C]);`

	Where [C] would be the integer to be printed or the variable that contains the integer as shown in the following example.
`_printf ("%d", 5);`
 or
 int a = 5;
	`_printf ("%d", a);`
	
	 The result would be that the integer "5" is printed
* To convert an integer to binary, you must use the following structure:
` _prinf ("%b", [C]);`
Where [C], would be the variable that contains the integer or the integer, as seen below:
`_prinf ("%b", 98);`
or
b = 98;
`_printf ("%b", b);`
In this way the conversion of the number to a binary one would be obtained

	In order to invert a string, the following structure is used:
`_printf ("%r", [C]);`
Where [C] is the string or the variable that contains it.

## AUTHORS ©

#### Daniel Amado, Leonardo Valencia 

##### October 27 2020 