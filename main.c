#1916513
#include <stdio.h>

int sumTwo(int a, int b)
{
	return a+b;
}
int square(int n){
	return n*n;
}
int get_max(int x, int y){
	if (x>y) return x;
	else return y;
}
int main(void)
{
	printf("2 + 5 = %d\n", sumTwo(2,5));
	printf("9^2 = %d\n", square(9));
	printf("%d\n", get_max(10,14));
}
