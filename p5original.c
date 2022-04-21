#include <math.h>
#include <stdio.h>

float input() {
	float x;
	printf("Enter a number:");
	scanf("%f", &x);
	return 0;
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
	printf("The square root of %f numbers is %f ", x, guess);
}

int main() {
	float x, sq;
	x = input();
	sq = mysqrt(x);
	output(x, sq);
	return 0;
}