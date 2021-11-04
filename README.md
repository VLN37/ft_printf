## ft_printf

In [42SP's](42sp.org.br) third project we are asked to reimplement libc's printf with several of its converters and flags.

### What i learned?

This project introduces us to the concept of variadic functions and the libraries that allow us to handle these variable arguments.

In comparison to previous 42 projects, the various flags that must be implemented provide a higher degree of complexity, inevitably leading us to develop solutions to many overlapping possibilities in our code. Training us to think of more adaptative structures to handle them.

It was also an opportunity to learn how to use other libraries as dependancies to your project and how to use Makefile to compile them in cascade.

### My badge

![printf badge](/docs/ft_printfm.png)

### My grade

![printf grade](/docs/printfg.png)

### How to use

```
//clone the repository
git clone --recurse-submodules https://github.com/VLN37/ft_printf.git

//to compile the program
make

//To test printf with my sample program you can:
clang main.c libftprintf.a -I./libft -L./libft -lft && ./a.out

//you can also use the .a library file, which includes libft functions and printf
//functionality, to develop your own programs in C!
```

### License

This project is licensed under the MIT terms, available [here](LICENSE)
