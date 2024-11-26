#include<stdio.h>
int main(){

    int tich;
    for (int i = 1; i <= 9; i++ ){
        printf(" Bang cuu chuong %d\n", i);
        for ( int n = 1; n <= 10; n++){
            tich = i * n;
            printf(" %d * %d = %d\n",i, n, tich);
        }
    }

    return 0;
}