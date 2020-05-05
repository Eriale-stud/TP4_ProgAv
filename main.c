#include "grille.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
    int lin,col;
    int ** Case;
    int leftry;
}Grille;

void rdm();//test des couleurs des voisins~~~~~~~~

void setCase(Grille * m, int l, int c, int newcolor){
  (*m).Case[i][j] = newcolor;
}

void remplir(Grille * m, int i, int j, int pastcolor, int newcolor){
  setCase(m,0,0,newcolor);

  /*if((*m).Case[0][1] == pastcolor){

  }

  if((*m).Case[1][1] == pastcolor){
    
  }*/
}

void
  //bord sup
  if(i == 0){
    //haut gauche
    if(j == 0){

    }
    //haut droite
    else if(j == 11){

    }
    else{

    }
  }
  //bord inf
  else if(i == 11){
    //bas gauche
    if(j == 0){

    }
    //bas droite
    else if(j == 11){

    }
    else{

    }
  }
  //bord gauche
  else if(j == 0){

  }
  //bord droite
  else if(j == 11){

  }
  //middle
  else{

  }
}

void initialiser (Grille * m){
    int i,j;
    srand(time(0));
    (*m).lin = 12;
    (*m).col = 12;

    (*m).Case = malloc((*m).lin * sizeof (char*));

    for(i=0;i<(*m).lin;i++){
        (*m).Case[i] = malloc((*m).col * sizeof(char*));
        for (j=0;j<(*m).col;j++){
            setCase(m,i,j,rand()%(7)); 
        }
    }
}


void afficherGrille(Grille * m){
  int i,j;
  system("cls");                       
  for(i=0;i<=((*m).lin)-1;i++){         
    for(j=0;j<=((*m).col)-1;j++){             
      printf("|");
      printf("%d",(*m).Case[i][j]);   
    }
    printf("|\n");
  }
  printf("\n");
}

int fin(Grille * m){
  int i,j;
  int test = (*m).Case[0][0];
  
  for(i=0;i<(*m).lin;i++){
      for (j=0;j<(*m).col;j++){
          if((*m).Case[i][j] != test){
            return 0;
          }
      }
  }
  return 1;
}

int main(void) {
  Grille m; 



  return 0;
}