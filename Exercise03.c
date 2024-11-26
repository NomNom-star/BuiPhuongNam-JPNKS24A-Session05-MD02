#include<stdio.h>
int main(){

    int n;
    int sum=0;
    printf(" Hay nhap 1 so nguyen duong bat ki ");
    scanf("%d",&n);

    for( int i=1; i<=n; i++) {
        sum += i;
    }
    printf("Tong cac chu so tu 1 den %d la: %d ", n, sum);

    return 0;
}