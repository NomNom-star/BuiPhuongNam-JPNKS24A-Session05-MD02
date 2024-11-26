#include<stdio.h>
int main(){

    int num1, num2, ucln, bcnn;
    printf(" Nhap vao so nguyen duong thu nhat\n");
    scanf("%d", &num1);
    printf(" Nhap vao so nguyen duong thu hai\n");
    scanf("%d", &num2);

    if( num1 >0 && num2>0){
        int min = (num1 > num2) ? num1 : num2 ;
        for (ucln=min; ucln > 0 ; ucln--) {
            if (num1%ucln==0 && num2%ucln==0){
            bcnn= (num1 * num2)/ucln;
                break;
            }
        } 
        printf(" Boi chung nho nhat cua %d va %d la: %d", num1, num2, bcnn);
    } else {
        printf(" Hay nhap lai 2 so nguyen duong\n");
    }
    
    return 0;
}