*This project has been created as part of the 42 curriculum by moslaoui.*

Description

A custom C library built as part of the 42 curriculum at 1337. The project explores how common library functions work by implementing them from scratch, with a focus on pointers, memory, strings, and dynamic allocation.

The library is compiled into libft.a, a static archive that can be linked with other C projects. Function declarations and the linked-list structure are exposed through libft.h.

## Instructions

Compile the library:

```
make
```
This produces `libft.a` at the root of the repository.

Clean object files:

```
make clean
```

Remove all build artifacts:

```
make fclean
```

Rebuild from scratch:

```
make re
```

To use the library in another project, include `libft.h` and link with `libft.a`:

```
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Resources

- use the man to study contracts, return values, and edge cases. When system behavior differs, follow the subject's explicit requirements.
- GeeksforGeeks and W3schools for informations about some concept that helped understand some functions .
- the 42 school Libft subject . 
- Youtube for tutorial videos and explanations .
AI use

AI assistance was used for:

- Discussing and debugging draft implementations of memory functions, string functions, allocation functions, and linked-list functions.
- Suggesting test cases and explaining compiler errors, linking errors, and memory-management issues.