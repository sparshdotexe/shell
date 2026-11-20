#include <stdio.h>
#include <unistd.h>

int main(void){
    printf("before\n");

    char *args[] = {"ls", "-l", NULL};

    execve("/usr/bin/ls", args, NULL);

    printf("after");
}
