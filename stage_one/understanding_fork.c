#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("A\n");

    fork();

    printf("B\n");

    fork();

    printf("C\n");

    return 0;
}
