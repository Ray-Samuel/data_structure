#include <stdio.h>
// SEPARAÇÃO
void hl(){
  printf("\n------------\n");
}




// INTEIROS
void leiaInt(){
  int x;
  scanf("%d", &x);
  hl();
}
void imprimaInt(int x){
  printf("%d", x);
  hl();
}

// REAIS
void leiaFloat() {
    float x;
    scanf("%f", &x);
    hl();
}

void imprimaFloat(float x) {
    printf("%.2f", x);
    hl();
}

// CARACTERES
void leiaChar() {
    char x;
    scanf(" %c", &x);
    hl();
}

void imprimaChar(char x) {
    printf("%c", x);
    hl();
}
