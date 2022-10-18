# printf

void printc(char str, unsigned int *count); - prints


void print_numbers(int n, unsigned int *count); - prints a number 

void print_char(va_list *ptr, unsigned int *count); - prints a char

void print_integer(va_list *ptr, unsigned int *count); - prints an integer

void print_string(va_list *ptr, unsigned int *count); - prints a string

void print_binary(va_list *ptr, unsigned int *count); - prints binary

void print_unsigned_int(va_list *ptr, unsigned int *count); - prints unsigned integer 

void print_rot13(va_list *ptr, unsigned int *count); - prints rot13 

void print_pointer(va_list *ptr, unsigned int *count);  - prints a pointer

void print_reverse(va_list *ptr, unsigned int *count); - prints a reverse string


int _printf(const char *format, ...);


 #Requirements
 ##General

-Allowed editors: vi, vim, emacs

-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89


-All your files should end with a new line

-A README.md file, at the root of the folder of the project is mandatory

-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

-You are not allowed to use global variables

-No more than 5 functions per file

-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do -we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

-The prototypes of all your functions should be included in your header file called main.h

-Don’t forget to push your header file

-All your header files should be include guarded

-Note that we will not provide the _putchar function for this project

#GitHub

-There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

-More Info

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Compilation

-Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

-As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

-Our main files will include your main header file (main.h): #include main.h

-You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

-We strongly encourage you to work all together on a set of tests

-If the task does not specify what to do with an edge case, do the same as printf

#Copyright - Plagiarism

-You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

-You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.

-You are not allowed to publish any content of this project.

-Any form of plagiarism is strictly forbidden and will result in removal from the program.
