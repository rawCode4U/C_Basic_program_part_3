// 7. WAP to print the following pattern: 1 3 5 7 9 …….till a user input number.

#include <stdio.h>
int main(){
    int input;
    for(int i = 1; i < 12 ; i += 2){
        printf("%d ", i);
    }

    return 0;
}