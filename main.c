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
	
	printf("n�� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("r�� �Է��ϼ���: ");
	scanf("%d", &r);

	printf("������� %d�Դϴ�.",combination(n,r));
}
