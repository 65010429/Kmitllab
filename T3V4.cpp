#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	for(int i=0;i<2*num-1;i++)
	{
		for(int j=0;j<2*num-1;j++)
		{
			if(j>i && i+j<2*num-2)
				printf(" ");
			else if(j<i && i+j>2*num-2)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}
}
