
#include <stdio.h>

int main() {
   long int n, money_left;
    scanf(" %ld", &n);
    if(n>1000){
        printf("I will buy Punjabi\n");
        money_left= n-1000;
        if(money_left>=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }

    return 0;
}