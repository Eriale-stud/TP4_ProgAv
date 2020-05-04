#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
    int lin,col,color;
    int ** Case;
    int leftry;
}Grille;

void remplir(Grille * m, int i, int j, int color, int newcolor);


void initialiser (Grille * m){

    int i,j;
    (*m).lin = 12;
    (*m).col = 12;


    (*m).Case = malloc((*m).lin * sizeof (char*));



    for(i=0;i<(*m).lin;i++){
        (*m).Case[i] = malloc((*m).col * sizeof(char*));
        for (j=0;j<(*m).col;j++){
            ; 
        }
    }
}


void afficherGrille(Grille * m){
  int i,j;
  system("cls");                       
  for(i=0;i<=((*m).lin)-1;i++){         
    for(j=0;j<=((*m).col)-1;j++){             
      printf("|");
      printf("%c",(*m).Case[i][j]);   
    }
    printf("|\n");
  }
  printf("\n");
}

void fin(Grille * m);

int main(void) {
  Grille m; 



  return 0;
}