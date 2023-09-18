# 0x05. C - Pointers, arrays and strings
![image](https://user-images.githubusercontent.com/105258746/190977571-d5135d31-02a5-4ff3-88de-d9062d6cfe13.png)

### A pointer is a variable that stores the memory address of another variable as its value. A pointer variable points to a data type (like int) of the same type, and is `created with the * operator`.
**Concepts**

For this project, we expect you to look at these concepts:

[Pointers and arrays](https://intranet.alxswe.com/concepts/60)
[Data Structures](https://intranet.alxswe.com/concepts/120)
**Resources**

Read or watch:

[C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
[C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
[C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
[Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables
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
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.


- File: `main.h` is the header file containing all the function prototypes used in this project.

- File: `0-reset_to_98.c` is a function that takes a pointer to an int as parameter and updates the value it points to to 98.

- File: `1-swap.c` is a function that swaps the values of two integers.

- File: `2-strlen.c` is a function that returns the length of a string.

- File: `3-puts.c` is a function that prints a string, followed by a new line, to stdout.

- File: `4-print_rev.c` is a function that prints a string, in reverse, followed by a new line.

- File: `5-rev_string.c` is a function that reverses a string.

- File: `6-puts2.c` is a function that prints one char out of 2 of a string, followed by a new line.

- File: `7-puts_half.c` is a function that prints half of a string, followed by a new line.

- File: `8-print_array.c` is a function that prints n elements of an array of integers, followed by a new line.

- File: `9-strcpy.c` is a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

- File: `100-atoi.c` is a function that convert a string to an integer.

- File: `101-keygen.c` is a program that generates random valid passwords for the program 101-crackme.

- File: `_putchar.c` contains the _putchar() function definition.
