#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"
int main(int argc, char const *argv[]) {
  struct pokemon Ash;
  strcpy(Ash.name,"sqirtle");
  Ash.health=100;
  printf("Testing Printer for Struct:\n");
  printStruct(Ash);
  printf("\nExpected: [Pokemon: squirtle][Health: 100]\n\n");
  printf("Testing Random Struct:\n");
  printStruct(randPokemon());
  printf("\n\nTesting Inputing Data into Struct:\n");
  struct pokemon *p=&Ash;
  editPokemon(p,"Ho-Oh",95);
  printStruct(Ash);
  printf("\n Expected: [Pokemon: Ho-Oh][Health: 95]");
  return 0;
}
