#include <stdio.h>
#include <string.h>

int redivide(char a){
    int x[100];
    int k=1;
    int v;
    int g;
    int z=1;
    int sum=0;
    if(k==1){
    v=0;
    }
    x[v]=a;
    while(x[v]!=0){
    if(x[v]%2==1){
        g=x[v]%2;
        sum=sum+(g*z);
        z=z*10;
        x[v]=x[v]/2;
    }
    else{
        g=x[v]%2;
        sum=sum+(g*z);
        z=z*10;
        x[v]=x[v]/2;
    }
    }
    v++;
    k++;
    return sum;
}


int main(){
    char text[100];
    int x[100];
    printf("INSERT : ");
    scanf("%s",text);

    for(int i=0;i<strlen(text);i++){
        printf("%d\t",redivide(text[i]));
    }

    return 0;

}