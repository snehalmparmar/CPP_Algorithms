#include "ParityCheck.h"
#include <iostream>
/*BruteForce Algorithm
short parity(unsigned long long x) {
	short result{ 0 };
	while (x) {
		result ^= (x & 1);
		x >>= 1;
	}
	return result;//returns 1 for odd parity and 0 for even.
}*/

/*Bit fiddling algorithm. x&(x-1) returns x with its lowest set bit erased. This alogirthm is faster than brute force.
short parity(unsigned long long x) {
	short result{ 0 };
	while (x) {
		result ^= 1;
		x &= (x - 1);
	}
	return result;// Drops the lowest set bit of x.
}*/

//Processing multiple bits at a time and caching. This is even faster than bit fiddling algorithm.
short parity(unsigned long long x) {
	const int kMaskSize{ 16 };
	const int kBitMask{ 0xFFFF };
	unsigned long long result{ 0 };
	result = ((x >> (3 * kMaskSize)) ^ (x >> (2 * kMaskSize))& (kBitMask) ^ (x >> kMaskSize)& (kBitMask) ^ (x & kBitMask));
	/*return kPreComputedParity[x >> (3 * kMaskSize)] ^
		kPreComputedParity[(x >> (2 * kMaskSize))& (kBitMask)] ^
		kPreComputedParity[(x >> kMaskSize)& (kBitMask)] ^
		kPreComputedParity[x & kBitMask];*/
	return result;
}