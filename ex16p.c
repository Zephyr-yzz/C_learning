#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Person {
  char name;
  int age;
  int height;
  int weight;
};

struct Person joe;
joe.name = Joe Alex;
joe.age = 32;
joe.height = 64;
joe.weight = 140;


struct Person frank;
frank.name = Frank Blank;
frank.age = 20;
frank.height = 72;
frank.weight = 180;

void Person_print_joc(struct Person joe){
  printf("Name: %s\n",joe.name);
  printf("\tAge: %d\n",joe.age);
  printf("\tHeight: %d\n",joe.height);
  printf("\tWeight: %d\n",joe.weight);
}
  
void Person_print_frank(struct Person frank){
  printf("Name: %s\n",frank.name);
  printf("\tAge: %d\n",frank.age);
  printf("\tHeight: %d\n",frank.height);
  printf("\tWeight: %d\n",frank.weight);
}
  
int main(int argc, char *argv[]){
  
  Person_print_joc(struct Person joe);
  Person_print_frank(struct Person frank);

  joe.age += 20;
  joe.height -= 2;
  joe.weight += 40;

  frank.age += 20;
  frank.weight += 20;

  return 0;
}

