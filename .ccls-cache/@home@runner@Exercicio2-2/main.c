#include <stdio.h>

int main(void) {
  int heroi = 0;
  int pontos = 0;
  int monstro = 0;
  int quantidade = 0;
  scanf("%i %i %i", &quantidade, &heroi, &monstro);
  int c = 1;
  int b = 3;
  int a = 9;
  int s = 27;
  int saitama = 81;
  int lobo = 3;
  int tigre = 9;
  int demonio = 27;
  int dragao = 81;
  int divindade = saitama;
  switch(heroi){
    case 1: heroi = c; break;
    case 2: heroi = b; break;
    case 3: heroi = a; break;
    case 4: heroi = s; break;
    case 5: heroi = saitama; break;
  }
  switch(monstro){
    case 1: monstro = lobo; break;
    case 2: monstro = tigre; break;
    case 3: monstro = demonio; break;
    case 4: monstro = dragao; break;
    case 5: monstro = divindade; break;
  }
  pontos = quantidade * heroi;
  if (quantidade == 0){
    printf("Melhor chamar Saitama!\n");
  }
  else if ((monstro == divindade)&&(heroi == saitama)){
    printf("Heróis vencerão!");
  }
  else if ((monstro == divindade)&&(heroi != saitama)){
    printf("Melhor chamar Saitama!\n");
  }
  else if (pontos >= monstro){
      printf("Heróis vencerão!");  
  }
  else{ 
      printf("Melhor chamar Saitama!\n");
  } 
  return 0;
}