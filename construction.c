#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"
struct pokemon randPokemon(){
  srand(time(NULL));
  struct pokemon random;
  char randName [11][100]={"eevee","ditto","charmander","pikachu","piplup","mewtwo","wabuffet","meowth","jiggypuff","kabuto","slowpoke"};
  strcpy(random.name,randName[rand()%11]);
  random.health=rand()%100;
  return random;
}
void printStruct(struct pokemon a){
  printf("Pokemon: %s\n Health: %d",a.name, a.health);
}
struct pokemon editPokemon(struct pokemon *p,char pokename[], int pokehealth){
  strcpy((*p).name,pokename);
  (*p).health=pokehealth;
  return *p;
}
