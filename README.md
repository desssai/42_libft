# libft
## Overview

Libft is a small-scale basic library of standart functions written in C\
This project is about understanding the way these functions work, implementing 
and learning to use them. The aim of the project is to learn the ropes of C language,
i.e. several data types, data structures, working with c-strings, allocation and manipulation of memory.

## Usage

1. Clone the repository in your project's directory.
2. Include `libft/libft.h` in your header.
3. Either compile your library or add a dependency in your Makefile.
4. Compile your code with `-I./libft/libft.a`

The library can be compiled either mannually or using a Makefile.\
The Makefile rules are as follows:

| Rule | Despription |
| ---- | ----------- |
| ALL | Compiles the library with the mandatory functions using GCC. |
| BONUS | Compiles the library with both the mandatory and bonus functions. |
| CLEAN | Removes object files leaving only the library present. |
| FCLEAN | Removes both the library and object files. |
| RE | Recompiles the library using **CLEAN** and **ALL** Makefile rules |

## Mandatory part functions

| Function | Description |
| -------- | ----------- |
| ft_atoi | Converts the initial portion of the string pointed to by str to int representation. |
| ft_bzero | Writes n zeroed bytes to the string s. |
| ft_calloc | Contiguously allocates enough space for count objects and returns a pointer to the allocated memory. |
| ft_isalnum | Tests for any character for which ft_isalpha or ft_isdigit is true. |
| ft_isalpha | Tests for any character for which isupper(3) or islower(3) is true |
| ft_isascii | Tests for an ASCII character, which is any character between 0 and octal 0177 inclusive. |
| ft_isdigit | Tests for a decimal digit character. |
| ft_isprint | Tests for any printing character, including space (‘ ’). |
| ft_itoa | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. |
| ft_memchr | Locates the first occurrence of c (converted to an unsigned char) in string s. |
| ft_memcmp | Cqompares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long. |
| ft_memcpy | Copies n bytes from memory area src to memory area dst. |
| ft_memmove | Copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner. |
| ft_memset | Writes len bytes of value c (converted to an unsigned char) to the string b. |
| ft_putchar_fd | Outputs the character to the given file descriptor. |
| ft_putendl_fd | Outputs the string to the given file descriptor followed by a newline. |
| ft_putnbr_fd | Outputs the integer to the given file descriptor. |
| ft_putstr_fd | Outputs the string to the given file descriptor. |
| ft_split | Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. |
| ft_strchr | Locates the first occurrence of a character in the string. |
| ft_strdup | Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. |
| ft_striteri | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. |
| ft_strjoin | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| ft_strlcat | Appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters. |
| ft_strlcpy | Copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0. |
| ft_strlen | Computes the length of the string s. |
| ft_strmapi | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string |
| ft_strncmp | Lexicographically compares the null-terminated strings s1 and s2 for not more than n characters. |
| ft_strnstr | Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched. |
| ft_strrchr | Locates the last occurrence of a character in the string. |
| ft_strtrim | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_substr | Allocates and returns a substring from the string ’s’. |
| ft_tolower | Converts an upper-case letter to the corresponding lower-case letter. |
| ft_toupper | Converts an lower-case letter to the corresponding upper-case letter. |


## Bonus part functions

| Function | Description |
| -------- | ----------- |
| ft_lstadd_back | Adds the node at the end of the list. |
| ft_lstadd_front | Adds the node at the beginning of the list. |
| ft_lstclear | Deletes and frees the given node and every successor of that node. |
| ft_lstdelone | Takes as a parameter a node and frees the memory of the node’s content and frees the node. |
| ft_lstiter | Iterates the list and applies the function on the content of each node. |
| ft_lstlast | Returns the last node of the list. |
| ft_lstmap | Returns a new list after copying the given one and applying the function on the content of each node. |
| ft_lstnew | Allocates and returns a new node. |
| ft_lstsize | Returns the number of nodes in a list. |


