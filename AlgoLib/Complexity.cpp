
// from a lecture at https://youtu.be/ewd7Lf2dr5Q


#include "pch.h"
#include "Complexity.h"

// O(b) - linear
// (returns a ^ 2)
int Complexity::exp1(int a, int b) {
	int ans = 1;

	while (b > 0) {
		ans *= a;
		b -= 1;
	}

	return ans;
}

// O(b) - linear
// does the same thing as exp1 (returns a^2)
int Complexity::exp2(int a, int b) {
	if (b == 1)
		return a;
	else
		return a * exp2(a, b - 1);
}