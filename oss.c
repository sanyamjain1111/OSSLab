#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if(num < 100 || num > 999) {
        printf("That's not a 3-digit number!\n");
    } else {
        reversed = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}

