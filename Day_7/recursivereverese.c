#include <stdio.h>


int reverseNumber(int n) {
    int reverse=0;
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverseNumber(num));

    return 0;
}
