// 1.2 Variables and Arithmetic Expressions

// C = Celsius
// F = Fahrenheit
// The next program use the formula C=(5/9)(F-32) to print the following table of 
// Fahrenheit temperatus and their centigrade or Celsius equivalents:
/*
 0 -17
 20 -6
 40 4
 60 15
 80 26
 100 37
 120 48
 140 60
 160 71
 180 82
 200 93
 220 104
 240 115
 260 126
 280 137
 300 148
*/

// It's ez :D
#include <stdio.h>

int main() {

	int fahrenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahrenheit = lower;

	while(fahrenheit <= upper)
	{
		celsius = 5 * (fahrenheit - 32) / 9;
		printf("%d\t%d\n", fahrenheit, celsius);
		fahrenheit += step; // OR  fahrenheit = fahrenheit + step;
	}
	
	return 0;
}
/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
// Are a comment, which in this case explains briefly what the program does.
// Any character between /* and */ are ignored by the compiler.
