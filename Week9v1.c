#include <stdio.h>


int main(){
    int num;
    int i,j,f,w,n,u=1;
    printf("INSERT : ");
    scanf("%d",&num);

    f=num;
    w=1;

    for(i=1;i<=num;i++){
        for(j=1;j<=(2*f)-1;j++){
        printf("*");
        }
        f--;
        printf("\n");
        if(i!=num){
        for(int h=1;h<=u;h++){
            printf(" "); 
        }
        }
        u++;
    }

    u=u-2;

    for(int b=1;b<num;b++){
            for(int n=1;n<u;n++)
            {
                printf(" ");
            }


            for(int e=1;e<=(2*w)+1;e++){
            printf("*");
            }

            w++;
            u--;
            printf("\n");
        }

    return 0;
}