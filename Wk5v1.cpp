#include <stdio.h>
#include <string.h>

int main(){
	char wd[100];
	printf("INSERT YOUR WORD : ");
	scanf("%s",wd);
	int ln = strlen(wd);
	
	for(int i=ln-1;i>=1;i--){
		if((wd[i] >= 'a' and wd[i] <= 'z') || (wd[i] >= 'A' and wd[i] <= 'Z')){
			printf("%c",wd[i]);
			break;
		}
	}
	return 0;
}
