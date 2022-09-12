#include <stdio.h>

int main(){
	char *p,str[100];
	p=str;
	printf("INSERT : ");
	scanf("%s",str);
	while (*p != '\0') {
	if((*p>='a' and *p<='z')){
		*p =*p-32;
		printf("%c",*p);
	}
	else if(*p>='A' and *p<='Z'){
		*p = *p+32;
		printf("%c",*p);
	}
	p++;
	}
}
