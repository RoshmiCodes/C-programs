
#include <stdio.h>
#include <string.h>
int main()
{
    int len,i;
    printf("\n ENTER THE LENGTH OF THE STRING YOU'LL INPUT: ");
    scanf("%d",&len);
    char word[len];
    printf("Enter the string: ");
    scanf("%s", word); 
    char rev[len]; 
    for(i = 0; i < len; i++) 
    {
        rev[i] = word[len - 1 - i];
    }
    rev[len] = '\0'; 
    printf("Reversed string: %s\n", rev);   
    if(strcmp(word,rev)==0)
    {
        printf("\n Palindrome.");
    }
    else
    {
        printf("\n NOT a Palindrome.");
    }
    return 0;
}