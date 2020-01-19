#include<iostream>
int Reverse_8Bits(int num) {
	int bitmask{ 3 };
	int y0 = num & 3;
	int y1 = (num >> 2) & 3; 
	int y2 = (num >> 4) & 3;
	int y3 = (num >> 6) & 3;
	if ((y0 != 0) && (y0 != 3)) {
		y0 ^= 3;
		y0 <<= 6;
	}
	if ((y1 != 0) && (y1 != 3)) {
		y1 ^= 3;
		y1 <<= 4;
	}
	if ((y2 != 0) && (y2 != 3)) {
		y2 ^= 3;
		y2 <<= 2;
	}
	if ((y3 != 0) && (y3 != 3)) {
		y3 ^= 3;
	}
	return (y0 | y1 | y2 | y3);
}

unsigned int Reverse_16Bits(unsigned long long num) {
	int bitmask{ 255 };
	unsigned int x0 = num & 255;
	//x0 <<= 8;
	unsigned int x1 = (num >> 8) & 255;
	return ((Reverse_8Bits(x0)<<8) | Reverse_8Bits(x1));
}
unsigned long long ReverseBits(unsigned long long x)
{
	int bitmask{ 0xFFFF };
	unsigned long long z0 = x & bitmask;
	z0 = Reverse_16Bits(z0);
	z0 <<= 48;

	unsigned long long z1 = (x >> 16) & bitmask;
	z1 = Reverse_16Bits(z1);
	z1 <<= 32;

	unsigned long long z2 = (x >> 32) & bitmask;
	z2 = Reverse_16Bits(z2);
	z2 <<= 16;

	unsigned long long z3 = (x >> 48)& bitmask;
	z3 = Reverse_16Bits(z3);
	return (z0 | z1 | z2 | z3);
}