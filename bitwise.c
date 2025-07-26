#include <stdio.h>

int main() {
    int num, position;

    // 1. Check even or odd using bitwise AND
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is Odd\n", num);
    else
        printf("%d is Even\n", num);

    // 2. Set a bit
    printf("\nEnter bit position to set (0-31): ");
    scanf("%d", &position);
    int setResult = num | (1 << position);
    printf("After setting bit %d: %d\n", position, setResult);

    // 3. Clear a bit
    int clearResult = num & ~(1 << position);
    printf("After clearing bit %d: %d\n", position, clearResult);

    // 4. Toggle a bit
    int toggleResult = num ^ (1 << position);
    printf("After toggling bit %d: %d\n", position, toggleResult);

    return 0;
}
