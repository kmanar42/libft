*This project has been created as part of the 42 common core by kmanar.*

# Libft

## Description

Libft is my first C library project at 1337 (42 Network).

The goal of this project is to recreate some standard C library functions and build my own library that I can reuse in future projects.

Through this project, I learned more about memory management, strings, pointers, memory allocation, and linked lists.

The library contains **43 functions**, including functions for character checking, string manipulation, memory operations, file descriptor output, and linked lists.

## Instructions

Clone the repository:

```bash
git clone (Repo)
cd (repo)
```

Compile the library:

```bash
make
```

This creates the static library `libft.a`.

Other Makefile commands:

| Command | Description |
|---|---|
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Recompile everything |

To use the library in another C program:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello 1337!\n", 1);
    return (0);
}
```

## Library Functions

The library contains 43 functions divided into different categories.

### Character Functions

- `ft_isalpha` - Check if a character is alphabetic.
- `ft_isdigit` - Check if a character is a digit.
- `ft_isalnum` - Check if a character is alphanumeric.
- `ft_isascii` - Check if a character is ASCII.
- `ft_isprint` - Check if a character is printable.
- `ft_toupper` - Convert a character to uppercase.
- `ft_tolower` - Convert a character to lowercase.

### String Functions

- `ft_strlen` - Calculate the length of a string.
- `ft_strchr` - Find the first occurrence of a character.
- `ft_strrchr` - Find the last occurrence of a character.
- `ft_strncmp` - Compare two strings up to `n` characters.
- `ft_strlcpy` - Copy a string with a size limit.
- `ft_strlcat` - Concatenate strings with a size limit.
- `ft_strnstr` - Find a substring within a limited length.
- `ft_strdup` - Duplicate a string.
- `ft_substr` - Extract a substring.
- `ft_strjoin` - Join two strings.
- `ft_strtrim` - Remove specified characters from both ends of a string.
- `ft_split` - Split a string using a delimiter.
- `ft_strmapi` - Apply a function to each character and create a new string.
- `ft_striteri` - Apply a function to each character of a string.

### Memory Functions

- `ft_memset` - Fill memory with a byte.
- `ft_bzero` - Set memory bytes to zero.
- `ft_memcpy` - Copy memory.
- `ft_memmove` - Copy memory safely when regions overlap.
- `ft_memchr` - Search for a byte in memory.
- `ft_memcmp` - Compare memory blocks.
- `ft_calloc` - Allocate and initialize memory to zero.

### Conversion Functions

- `ft_atoi` - Convert a string to an integer.
- `ft_itoa` - Convert an integer to a string.

### File Descriptor Functions

- `ft_putchar_fd` - Write a character to a file descriptor.
- `ft_putstr_fd` - Write a string to a file descriptor.
- `ft_putendl_fd` - Write a string followed by a newline.
- `ft_putnbr_fd` - Write an integer to a file descriptor.

### Linked List Functions

- `ft_lstnew` - Create a new list node.
- `ft_lstadd_front` - Add a node to the beginning.
- `ft_lstsize` - Count the number of nodes.
- `ft_lstlast` - Return the last node.
- `ft_lstadd_back` - Add a node to the end.
- `ft_lstdelone` - Delete one node.
- `ft_lstclear` - Delete and free an entire list.
- `ft_lstiter` - Apply a function to each node's content.
- `ft_lstmap` - Create a new list by applying a function to each node's content.

## Library Structure

The project contains:

- `libft.h` - Header file containing function prototypes and the `t_list` structure.
- `ft_*.c` - Source files containing the implementations.
- `Makefile` - Compiles the source files into a static library.
- `libft.a` - Static library generated after compilation.

The linked list functions use this structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains a pointer to its content and a pointer to the next node.

## Resources

References used to understand C programming and standard library behavior:

- [C reference](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/)
- Ai for deep understanding
- My peers

### AI Usage

I used ChatGPT as a learning assistant during this project.

AI helped me understand C concepts such as pointers, memory allocation, string manipulation, and linked lists. I also used it to explain function behavior, visualize memory operations, discuss edge cases, and help debug compilation errors.

The functions were implemented and tested by me as part of my learning process.

## Author

**kmanar  (L3VI)**

1337 Coding School | 42 Network
