#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("data.txt", "r");
    char line[100];
    int countline = 1,countchar=0,countword=0;
    while (fgets(line, sizeof(line), fp)) 
    {
        printf("Line %d: %s", countline, line);
        countline++;
        line[strcspn(line, "\n")] = '\0';
        countchar += strlen(line);
        char *token = strtok(line, " \t\n");
        while (token != NULL)
        {
            countword++;
            token = strtok(NULL, " \t\n");
        }
    }
    printf("\nNo. of lines: %d",countline);
    printf("\nNo. of characters: %d",countchar);
    printf("\nNo. of words: %d",countword);
    fclose(fp);
    return 0;
}