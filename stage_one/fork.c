#include <stdio.h>
#include <unistd.h>

int main(void){
  printf("hello\n");
  fork();

  printf("world\n");
}
