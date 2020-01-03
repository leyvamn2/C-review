#include <stdio.h>

void usoLocal(void);
void usoStaticLocal(void);
void usoGlobal(void);

int x=1;

int main(){

  int x=5;
  printf("la x local fuera del alcance de main es %d\n",x);

  {
    int x=7;
    printf("la x local en el alcance interno es %d\n",x);
  }

  printf("la x local fuera del alcance de main es %d\n",x);

  usoLocal();
  usoStaticLocal();
  usoGlobal();
  usoLocal();
  usoStaticLocal();
  usoGlobal();

  printf("la x local fuera del alcance de main es %d\n",x);

  return 0;
}

void usoLocal(void){

}

void usoStaticLocal(void) {

}

void usoGlobal(void) {
  /* code */
}
