#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
int main() {
  printf("Hello there, I'm proccess %d\n", getpid());
  sleep(10);
  printf("I'm done, bye!\n");
  return 0;
}