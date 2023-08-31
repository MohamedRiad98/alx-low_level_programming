#include <stdio.h>

#include <string.h>

void isPalindrome(char str[], int l);

int main(){

    char str[15];

    printf("Enter a word to check: ");

    scanf("%s", str);

    isPalindrome(str, 0);

    return 0;

} 

void isPalindrome(char str[], int l){

    int n = strlen(str) - (l + 1);   

    if (str[l] == str[n]){        

        if (l + 1 == n || l == n){

            printf("The entered word is a palindrome\n");

            return;

        }
    }
}    

        isPalindrome(str, l + 1);

    }

    else

    {

        printf("The entered word is not a palindrome\n");

    }

}
