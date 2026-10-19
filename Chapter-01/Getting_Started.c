// In the name of God

// Writing the First Program:
/*
#include <stdio.h>

int main() {
	printf("Hello, World\n");
}
*/
// Compiler in UNIX: cc Getting_Started.c
// Output file: a.out
/*
#include <stdio.h> //include information about standard
//library
main()					//define a function called main
						//that received no argument values
{						//statements of main are enclosed in braces
 printf("hello, world\n");//main calls library function printf
						  //to print this sequence of characters
}						 // \n represents the newline character

In older versions of C, if a function's return type was omitted, it was implicitly assumed to be `int`. 
Modern C does not allow this, so functions should explicitly specify their return type.
For example, use `int main(void)` instead of `main()`.
*/

// Try for newLine in printf:
/*
#include <stdio.h>

int main() {

	printf("Hello World
	"); //error: missing terminating " character

	return 0;
}
*/

// printf never supplies a newline character automatically
// You must use \n to include a newline character in the printf argument.
// For example:
/*
#include <stdio.h>

int main() {

	printf("hello, ");
	printf("world");
	printf("\n");

	return 0;
}
*/

// Among the others that C provides are 
// \t for tab, \b for backspace, \" for the double quote and \\ for the backslash itself.
// There is a complete list in Section 2.3 in (book ANSI C)

/*
Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving out
parts of the program, to see what error messages you get. 
*/
/*
#include <stdio.h>

int main() {
	
	printf("Hello, world") // error: expected ‘;’ before ‘return’ 

	return 0;
}
*/

/*
Exercise 1-2. Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above.
*/
#include <stdio.h>

int main() {
	
	printf("Hello, world\a"); // Alert 
	printf("Hello, world\k"); // Warning: unknown escape sequence: ‘\k’

	return 0;
}
// I have included an image in the `Chapter-01/img` folder regarding this escape sequence.
// Escape_sequence.png
