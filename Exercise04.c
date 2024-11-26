#include<stdio.h>
int main(){

    int n, tich;
    int i=1;
    printf(" Hay nhap 1 so nguyen duong tu 1 den 10 de in ra bang cuu chuong tuong ung ");
    scanf("%d",&n);

    if(n>=1 && n<=10){
            while (i<=10){
        tich = i*n;
        printf(" %d * %d = %d \n", n, i, tich);
        i++;
    }
    } else {
        printf("So nhap vao khong hop le\n");
    }

    return 0;
}