struct pokemon {char name[100]; int health;};
struct pokemon randPokemon();
void printStruct(struct pokemon a);
struct pokemon editPokemon(struct pokemon *p,char pokename[], int pokehealth);
