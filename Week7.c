#include <stdio.h>

int main(){

    float x,n;
    int i;
    scanf_s("%f",&n);
    x=n;
    for(i=0; i<10 ;i++){
        x= (x+n/x)/2;
    }
    printf("%.20f",x);
}