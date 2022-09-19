#include <stdio.h>

int main(){
    int num,r;
    float d,sum;
    printf("INSERT YOUR NUM : ");
    scanf_s("%d",&num);

    for(r=1;r*r<=num;r++);
    r--;

    for(d=0.001;d<1.0;d=d+0.001){
        sum = (float)r+d;
        if(sum*sum>(float)num){
            sum=sum-0.001;
            break;
        }
    }
    printf("%f",sum);
}