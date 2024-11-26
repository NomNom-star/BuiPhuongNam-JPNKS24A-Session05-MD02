#include<stdio.h>
int main(){

    int num1, num2, answer;
    printf(" Xin moi nhap so thu nhat\n");
    scanf("%d",&num1);
    printf(" Xin moi nhap so thu hai\n");
    scanf("%d",&num2);
    for ( int i = 0; i<=5;){
        printf(" 1. Tong 2 so\n");
        printf(" 2. Hieu 2 so\n");
        printf(" 3. Tich 2 so\n");
        printf(" 4. Thuong 2 so\n");
        printf(" 5. Thoat\n");
        printf(" Lua chon cua ban:\t");
        scanf("%d", &answer);
        if(answer==1){
            printf(" Tong cua so %d va so %d la: %d\n", num1, num2, num1+num2);
            printf("\n");
        } else if(answer==2) {
            printf(" Hieu cua so %d va so %d la: %d\n", num1, num2, num1-num2);
            printf("\n");
        } else if(answer==3) {
            printf(" Tich cua so %d va so %d la: %d\n", num1, num2, num1*num2);
            printf("\n");
        } else if(answer==4) {
            printf(" Thuong cua so %d va so %d la: %d\n", num1, num2, num1/num2);
            printf("\n");
        } else {
            break;
        }

    }

    return 0;
}