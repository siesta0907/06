#1916513
#include <stdio.h>

int combination(int n, int r){
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int factorial(int a){
	int res = 1;
	int i;
	for (i =1; i<=a; i ++){
		res *= i;
	}
	return res;
}

int main(void)
{
	int n,r;
	
	printf("n을 입력하세요: ");
	scanf("%d", &n);
	printf("r을 입력하세요: ");
	scanf("%d", &r);

	printf("결과값은 %d입니다.",combination(n,r));
}
