//4. WAP to check a given number is prime number or not.

#include <stdio.h>
int main(){
    int num, count = 0;
    printf("Enter number you want to check prime or not : ");
    scanf("%d", &num);
    for ( int i = 2 ; i <= num/2 ; ++i){
        if(num % i == 0){
            count = 1;
            break;
        }
    }

    if( num == 1){
        printf(" 1 is neither prime nor composite nmber");
    }else{
        if( count == 0){
            printf(" %d is prime number", num);
        }else{
            printf(" %d is NOT Prime number", num);
        }
    }
}