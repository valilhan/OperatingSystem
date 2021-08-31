
#include <stdio.h>
#include <string.h>

char s[10001];
char ans[10001];
int j = 0;

int main(){
	scanf("%s", s);
	for(int i = strlen(s) - 1; i >= 0; i--){
		ans[j++] = s[i];
	}
	printf("%s", ans);
}
