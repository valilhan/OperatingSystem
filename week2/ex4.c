
#include <stdio.h>
#include <string.h>

int a, b;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
}