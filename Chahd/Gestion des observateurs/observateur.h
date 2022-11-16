#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
#define MAX 100
typedef struct date_de_naissance
{
  int j;
  int m;
  int a;
}Date;
typedef struct 
{
  int id;
  char nom[MAX];
  char prenom[MAX];
  char genre[MAX];
  char nationalite[MAX];
  char profession[MAX];
  Date dn;
} observateur;
int ajouter(char *, observateur obs);
int modifier( char *, int id, observateur obs );
int supprimer(char *, int id );
observateur chercher(char *, int id);

#endif // OBSERVATEUR_H_INCLUDED
