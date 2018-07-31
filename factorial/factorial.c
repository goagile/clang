#include <assert.h>
#include <stdio.h>

// 
//  факториал через линейную рекурсию
//
static long faclin(long n) {
	return (n < 2) ?
				1  :
				n * faclin(n - 1);
}

// 
//  факториал через хвостовую рекурсию
//
static long factail(long n, long p) {
	return (n < 2) ?
				p  :
				factail(n - 1, n * p);
}

// 
// факториал - итеративная версия
//
static long factiter(long n) {
	long p = 1;
	while (n > 1) {
		p *= n;
		n -= 1;
	}
	return p;
}

int main() {
	assert(120 == faclin(5));
	assert(120 == factail(5, 1));
	assert(120 == factiter(5));
	return 0;
}
