#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("data.txt", "r");
    char line[100];
    int c = 1;
    while (fgets(line, sizeof(line), fp)) 
    {
        printf("Line %d: %s", c, line);
        c++;
    }
    fclose(fp);
    return 0;
}