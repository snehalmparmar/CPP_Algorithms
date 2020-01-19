/*
Writing a program to count the number of bits that are set to 1 in a nonnegative integer.
The following program tests bits one at a time starting with the least-significant bit. It illustrates shifting and masking; it also shows
how to avoid hard-coding the size of the integer word.
*/
#include<iostream>
#include "CountBitsSetToOne.h"

short CountBits(unsigned int x) {
	short num_bits = 0;
	while (x) {
		num_bits += x & 1;//Mask the least significant bit. If it is one, it will increament num_bits.
		x >>= 1; //Shift right by one.
	}
	return num_bits;
}
