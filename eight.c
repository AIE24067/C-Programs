#include<stdio.h>
int main(){
    char ch;

   
    printf("Enter an alphabet character: ");
    scanf(" %c", &ch); 

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 'a' - 'A';
        }

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}