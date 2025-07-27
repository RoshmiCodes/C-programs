#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("data.txt", "r");
    FILE *report = fopen("stats.txt", "w");  // New file to write stats

    char line[100];
    int countline = 1, countchar = 0, countword = 0;

    while (fgets(line, sizeof(line), fp)) 
    {
        fprintf(report, "Line %d: %s", countline, line);
        countline++;

        // Remove newline for clean count
        line[strcspn(line, "\n")] = '\0';
        countchar += strlen(line);

        // Count words
        char *token = strtok(line, " \t");
        while (token != NULL)
        {
            countword++;
            token = strtok(NULL, " \t");
        }
    }

    // Final stats
    int totallines = countline - 1; // Adjust because last line++ is extra
    fprintf(report, "\n\nNo. of lines: %d", totallines);
    fprintf(report, "\nNo. of characters: %d", countchar);
    fprintf(report, "\nNo. of words: %d", countword);

    fclose(fp);
    fclose(report);

    return 0;
}
