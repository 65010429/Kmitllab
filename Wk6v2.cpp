#include <stdio.h>

char v(int x){
	char g;
	if(x>= 97 and x<=122)
	{	
		g=x-32;
	}
	
	else if(x>=65 and x<=90)
	{
		g=x+32;
	}
	return g;
	
}

int main() 
{
	char str[100];
	int i=0;
	printf("INSERT : ");
	scanf("%s",str);
	
	while( str[i]!='\0')
	{
		while(str[i]>=0 and str[i]<=9){
			i++;
		}
		char ga=v(str[i]);
		printf("%c",ga);
		str[i];	
		i++;
	}
	
}
