#include <stdio.h>



int main(){
    int num,o=1,r=1,ch1=1,b=2,k=3,l=3,e=2;
    printf("INSERT : ");
    scanf("%d",&num);
    int y=(2*num)-1;
    int p=(2*num)-1;
    for(int u=1;u<=(2*num)-1;u++){
        if(u<=num){
            while(y>0){
            printf("*");
            y=y-1;
            }
        }
        
        else{
            while(k>0){
            printf("*");
            k--;
            }
        }
        printf("\n");

        if(u==num){
            o=num-2;
        }
        while(r<=o){
            printf(" ");
            r++;
        }
        if(u<num){
            o++;
            r=1;
        }

        else{
            o--;
            r=1;
        }

        if(y==0){
            y=p-b;
            b=b+2;
        }

        if(k==0){
            k=l+e;
            e=e+2;
        }

    }

    return 0;
}