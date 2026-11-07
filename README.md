*This project has been created as part of the 42 curriculum by salkhali.*
# Description
This is a simple re-implementation of printf. 

Given the following specifications:
```
- Do not implement the buffer management of the original printf().
-  Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library.
Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository.
- Your header file must be named ft_printf.h and must contain the prototype of
your ft_printf() function.
```
Support must be provided for the following: 
```
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.
```

## Instructions
### Make
Run to generate the archived library that includes the ft_printf function and its dependencies.  
```bash
make all
```
Run the following to remove all artifacts / object files.
```bash
make clean
```
Run the following to remove the archive file alongside the artifacts

```bash
make fclean
```
For a quick fclean all, run the re rule.
```bash
make re
```
###  Compilation
To compile a C file with the library, make sure to include the header file within the source code that calls it.
```c
#include "libftprintf.h"
```
as for the compilation itself, you can simply pass the library name to your compiler of choice as an argument.
```bash
cc main.c libftprintf.a -o main
```
## Resources

[The Application Binary Interface is what i used to figure out the mechanism behind variadic functions](https://refspecs.linuxfoundation.org/elf/x86_64-SysV-psABI.pdf)

AI-Disclosure: AI has been used in this project for two main tasks, adding prototypes to my headerfile, and reviewing my 42 norm application.
