#include <math.h>
#include <stdio.h>

float input() {
	float x;
	printf("Enter a number:");
	scanf("%f", &x);
	return x;
}

float mysqrt(float x) {
	float guess = x / 2;
	float next = x / guess;
	while (fabs(guess - next) > 0.000001) {
		guess = (guess + next) / 2;
		next = x / guess;
	}
	return guess;
}

void output(float x, float guess) {
	printf("%f is the square root of %f", guess, x);
}

int main() {
	float x, sq;
	x = input();
	sq = mysqrt(x);
	output(x, sq);
	return 0;
}