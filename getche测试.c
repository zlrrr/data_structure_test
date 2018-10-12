#include <stdio.h>
#include <conio.h> /* getche(), getch() */

int main()
{
    char c1, c2;

    printf("Press any key to exit");
    c1 = getche();
    putchar('\n');

    printf("Press any key once more to exit");
    c2 = getch();
    putchar('\n');

    printf("The character getche() read: %c \n", c1);
    printf("The character getch() read: %c \n", c2);
}
