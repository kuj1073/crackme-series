#include <stdio.h>
#include <string.h>

int main(void){
    char input[64];
    printf("Input: ");
    scanf("%63s", input);
    if (strcmp(input, "ASC{MY_F1R5T_CR4CK_M3}") == 0){
        printf("Correct!!\n");
    }
    else{
        printf("Wrong!!\n");
    }
    return 0;
}