
#include <stdio.h>
#include <string.h>

int n;
int j = 1;
int m;

int main(){
	scanf("%d", &n);
	m = 2*n-1;
	for(int i = 1; i <= m; i += 2){
		for(int j = 1; j <= (m-i)/2; j++){
			printf(" ");
		}
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		for(int j = 1; j <= (m-i)/2; j++){
			printf(" ");
		}
		printf("\n");
	}
}