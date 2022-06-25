#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char s[20];
    int i, length;
    int j = 0;

    printf("Palindrome a string:\n");
    scanf("%s", &s);

    length = strlen(s);
    
    for(i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            j = 1;
            break;
           }
        }
    
    if (j) {
        printf("%s is not a palindrome", s);
    }    
    else {
        printf("%s is a palindrome", s);
    }
    return 0;

}






