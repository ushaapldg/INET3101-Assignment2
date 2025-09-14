#include <stdio.h>
void to_base_n(long n, long b);

int main()
{
    int loopConverter = 0;
    long num;
    long base;
    while(loopConverter == 0){
        printf("Enter an integer to convert (Enter -1 to quit): \n");
        scanf("%ld", &num);

        if (num == -1){
            printf("Program has been quit.\n");
            break;
        }

        printf("Enter a base to convert to: \n");
        scanf("%ld", &base);

        if (base<2 || base>16){
            while (base<2 || base>16){
                printf("Please enter a base system between 2-16\n");
                scanf("%ld", &base);
            }
        }
        printf(" %ld converted to base %ld is: \n", num, base);
        to_base_n(num, base);
        printf("\n");
    }
}

void to_base_n(long n, long b){
    char digits[] = "0123456789ABCDEF";
    if (n >= b) {
        to_base_n(n / b, b);
    }
    printf("%c", digits[n % b]);
}
