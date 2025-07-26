#include <stdio.h>
#include <string.h>
int main()
{
    int i,vowel=0,consonant=0,number=0,white=0,other=0;
    char sentence[100];
    printf("\n Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int length=strlen(sentence);
    if (sentence[length - 1] == '\n') 
    {
        sentence[length - 1] = '\0';
        length--; 
    }
    printf("\n\nYour sentence: %s", sentence);
    for(i=0;i<length;i++)
    {
        if((sentence[i]>='A' && sentence[i]<='Z') || (sentence[i]>='a' && sentence[i]<='z'))
        {
            if(sentence[i]=='A' || sentence[i]=='E' || sentence[i]=='O' || sentence[i]=='U' ||
                 sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u')
                vowel++;
            else
                consonant++;
        }
        else if(sentence[i]>='0' && sentence[i]<='9')
            number++;
        else if(sentence[i]==' ')
            white++;
        else
            other++;
    }
    printf("\n Number of vowels= %d",vowel);
    printf("\n Number of consonants= %d",consonant);
    printf("\n Number of numbers= %d",number);
    printf("\n Number of white spaces= %d",white);
    printf("\n Number of other characters= %d",other);
    return 0;
}