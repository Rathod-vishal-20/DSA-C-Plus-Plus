#include<stdio.h>
int main(){

    int i,j,n,a;
    printf("enter no ");
    scanf("%d",&n);

        for(i=1;i>=n;i++){

            if(i%2==0){
                return 0;
            }
            else {
            j=i+2;
            printf("%d",j);
            }

        }
        for(a=1; a>=j;--a){
            printf("%d",a);
        }


    return 0;

}