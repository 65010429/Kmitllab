#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int c[100];
    int r;
    int y[100];
    int g=1;
    int j=0;
    printf("INSERT : ");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
    c[i] =s[i];
    }
    y[j]=0;
    while(c[j]!=0){
    r=c[j]%2;
    c[j]=c[j]/2;
    y[j] = y[j]+(r*g);
    g=g*10;
    if(c[j]==0 && j<strlen(s)){
        j++;
        y[j]=0;
        g=1;
    }
    }
    for(int l=0;l<strlen(s);l++){
    printf("%d ",y[l]);
    }
}