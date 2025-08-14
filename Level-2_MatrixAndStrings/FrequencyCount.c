#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int freq[256] = {0};
    int i, length, maxFreq = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    length = strlen(sentence);
    if (sentence[length - 1] == '\n')
    {
        sentence[length - 1] = '\0';
        length--;
    }
    printf("\nYour sentence: %s\n", sentence);
    for (i = 0; i < length; i++) 
    {
        unsigned char ch = sentence[i];
        freq[ch]++;
        if (freq[ch] > maxFreq) 
        {
            maxFreq = freq[ch];
        }
    }
    printf("\nMost frequent character(s): ");
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] == maxFreq && i != ' ') 
        { 
            printf("%c ", i);
        }
    }
    printf("\nFrequency: %d\n", maxFreq);
    return 0;
}