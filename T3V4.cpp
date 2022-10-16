#include <stdio.h>

int main(){
	int num,r,check1=1,check_,b=0,check2=1,check3,check_2,check4;
	scanf("%d",&num);
	r = num*2-1;
	check3=num-1;
	check_2=1;
	check4=num-1;
	if(num>1){
		check_=(2*num)-3;
	}
	else{
		check_=0;
	}
	while(r>0){
	if(r>=num){
		for(int i=1;i<=check1;i++){
		printf("*");
		}
		check1++;

		for(int j=check_-b;j>=1;j--){
		printf(" ");	
		}
		b =b+2;
		
		if(r==num){
			check2=num-1;
		}

		for(int k=1;k<=check2;k++){
		printf("*");
		}
		check2++;
	}

	else {
		for(int l=1;l<=check3;l++){
			printf("*");
		}
		check3--;

		for(int m=1;m<=check_2;m++){
			printf(" ");

		}
		check_2 = check_2+2;

		for(int n=1;n<=check4;n++){
			printf("*");

		}
		check4--;
	}

	printf("\n");
	r=r-1;
	}
	return 1;
}
