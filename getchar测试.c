#include <stdio.h>

int main()
{
    char c, s[20];
    printf("Enter a string: ");
    c = getchar();
    printf("Read the remaining from the buffer\n");
    scanf("%s", s);

    putchar(c);
    putchar('\n');
    printf("%s \n", s);
}
