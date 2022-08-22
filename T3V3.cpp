#include <stdio.h>

int main(){
	int num,r,cl;
	printf("INSERT YOUR NUM : ");
	scanf("%d",&num);
	for(r=1;r<=num; r++){
		for(cl=1;cl<=(2*num)-1;cl++){
			if(cl<=r || cl>=2*num-r || r==num){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for(r=1;r<=num-1;r++){
		for(cl=1;cl<=2*num-1;cl++){
			if(cl<= num-r || cl>=num+r){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
