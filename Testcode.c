//This file is a test
#include <stdio.h>

int main(int argc, char *argv[]) {
  if(argc > 2) {
    printf("%d,1 - %d", argc, argv[1][0]);
    return 0;
  else {
    return -1;
  }
}
