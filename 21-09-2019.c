/** WAP to find the sum of following series 
1. 1^2 + 2^2 + 3^2 + ... + n^2
2. 1 + (1/2)^2 + (1/3)^3 + ... + (1/n)^n
3. 2/2! + 3/3! + 4/4!+ ... + n/n! 
*/

#include<stdio.h>


int *func(){
    static int r[] = {1, 2};
    return r;
}


void tobinary(int n){
    int bits = 8;
    for(int i = bits; i >= 0; i--){
        if ((n>>i & 1)== 1) printf("1");
        else printf("0");
    }
}


// 10001

/*void tobinary(int n)
{
    int a[100],i,c=n;
    for(i=0;n>0;i++){
        a[i]=n%2;
        n/=2;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}*/


int fact(int n){

    if(n<0) return -1;
    if(n==1||n==0) return 1;
    if(n>1) return n*fact(n-1);

}


double sum_of_series_3(int n) {
    double sum=0;
    for(double i = 2; i <=n; i++) sum+=(i/fact(i));
    return sum;
}


int sum_of_series_1(int n){
    int sum = 0;
    for(int i = 1; i<=n ; i++) sum+=(i*i);
    return sum;
}


int main(){
    tobinary(100);
    //int *r = func();
    //for(int i = 0; i <= sizeof(r)/sizeof(int); i++ ) printf("%d", r[i]);
    //printf("%lf", sum_of_series_3(5));
    //printf("\n%d", sum_of_series_1(3));
}