//This file is a test
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("%d,1 - %c", argc, argv[1][0]); //Letter was wanted, not the number
  return 0;
}
