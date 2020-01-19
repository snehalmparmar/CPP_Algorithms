#include "Variant_Parity.h"
#include <iostream>
#include <cmath>
/* This algorithm takes O(n) time
unsigned Variant1_Parity(unsigned long x) {
	unsigned long result{ 1 };
	short count{ 0 };
	unsigned long y{ x };
	while (result ^= (x & 1)) { //O(n)
		//result ^= (x & 1);
		count++; //O(1)
		x >>= 1;//O(1)
	}
	return (x = y + (pow(2, count) - 1));//O(1)
}*/
//checkout the link for other bit operations: https://gist.github.com/stephenLee/4024869
unsigned Variant1_Parity(unsigned long x, int n=1) {
	//unsigned long result{ 1 };
	//x |= (x - 1);//O(1). Right propagate the rightmost set bit in x, e.g, turns (0101 0000) to (0101 1111)
	//x %= unsigned(pow(2, n));//O(1). Compute x mode power of 2, e,g., returns 13 for 77 mod 64
	x = ((x % 2) == 0); //O(1). Test if x is power of 2, i.e., evaluates to true for x = 1,2,4,6,7....false for all others.
	return x;
}