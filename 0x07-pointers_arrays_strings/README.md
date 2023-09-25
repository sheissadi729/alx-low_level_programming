Concepts
For this project, we expect you to look at this concept:

[Pointers and arrays](https://intranet.alxswe.com/concepts/60)

Resources
Read or watch:

[C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
[C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
[Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
[Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
*Learning Objectives*
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers to pointers and how to use them
What are multidimensional arrays and how to use them
What are the most common C standard library functions to manipulate strings
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
More Info
You do not need to learn about pointers to functions, arrays of structures, malloc and free - yet.
# 0x07. C - Even more pointers, arrays and strings C Project
### File: `0-memset.c` is a function that fills memory with a constant byte.

### File: `1-memcpy.c` is a function that copies memory area.

### File: `2-strchr.c` is a function that locates a character in a string.

### File: `3-strspn.c` is a function that gets the length of a prefix substring.

### File: `4-strpbrk.c` is a function that searches a string for any of a set of bytes.

### File: `5-strstr.c` is a function that locates a substring.

### File: `7-print_chessboard.c` is a function that prints the chessboard.

### File: `8-print_diagsums.c` is a function that prints the sum of the two diagonals of a square matrix of integers.

### File `100-set_string.c` is a function that sets the value of a pointer to a char.

### File `main.h` is the header file with the functions prototypes.

### File `_putchar.c` is the file that contains the _putchar function.

## File: 101-crackme_password contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
- You may need to install the `openssl` library to run the crakme2 program: `sudo apt install libssl-dev`
- Edit the source list `sudo vim /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`

OR 

## The Advanced task no. 9
1. open the file using `vi -b 101-cranckme_password`
2. when you see the vi window, don't use the insert mode, just type `:set binary` and hit enter
3. type `:set noeol` and hit enter
4. use the insert mode(i) and type abc123
5. esc `:wq` hit enter

==> Then git add . etc
