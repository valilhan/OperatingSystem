  
#include <stdio.h>
#include <float.h>
#include <limits.h>

int a = INT_MAX;
double b = DBL_MAX;
float c = FLT_MAX;

int main(){
	printf("INT:%d\n", a);
	printf("FLOAT:%f\n", c);
	printf("DOUBLE:%f\n", b);
}