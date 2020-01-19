/*
This code takes as input 64 bit integer and swaps the bits at indices i and j.
*/
#include<iostream>
long long SwapBits(long long x, int i, int j)
{
	
	if ((x >> i & 1L) != (x >> j & 1L)) { //Check if ith and jth bits are same or not. If same, there can't be any swap, it remains same.
		long long bitmask{ 0 };//create a bitmask;
		bitmask = (1L << i) | (1L << j);
		x ^= bitmask;
	}
	return x;
}