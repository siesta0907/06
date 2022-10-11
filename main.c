#1916513
#06-01
#include <stdio.h>
void func(void) {
	int x;
	printf("func1 x is at %p\n", &x);
}
int main(void) {
	int x;
	printf("main x is at %p\n", &x);
	func();
	return 0;
}
