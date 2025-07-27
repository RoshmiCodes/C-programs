#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("data.txt","a");
    char sentence[100];
    printf("\nEnter 'exit' when you want to stop adding texts to file.\n");
    while(true)
    {
        printf("\nEnter a sentence: \n");
        fgets(sentence, sizeof(sentence), stdin);
        if (strcmp(sentence, "exit\n") == 0) 
            break;
        fputs(sentence, fp);
    }
    fclose(fp);
    return 0;
}