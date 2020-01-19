//Write a program which takes as input a nonnegative integer x and returns a number y which is not equal to x, but has the same weight
//as x and their difeerence, |y-x|, is the as small as possible.
#include<iostream>
#include<stdexcept>
//std::invalid_argument
//below algorithm runs on O(n) time and space.
unsigned int Closest_Integer_Same_NumOf_SetBits(unsigned int x)
{
	const static int kNumUnsignedBits = 16;
	for (int i = 0; i < kNumUnsignedBits-1; i++) {
		if (((x >> i)&1) != ((x >> (i + 1))&1)) {
			x ^= ((1 << i) | (1 << (i + 1)));
			return x;
		}
	}
	throw std::invalid_argument("All bits are either 0 or 1");
}	