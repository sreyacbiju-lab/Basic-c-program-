#include <stdio.h>
int main() {
    int n, rev = 0, temp, rem;
    scanf("%d", &n);
    temp = n;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(temp == rev)
        printf("%d palindrome");
    else
        printf("%d is not palindrome");

    return 0;
}
