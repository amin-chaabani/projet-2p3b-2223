#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int j;
    int m;
    int a;
}Date ;
typedef struct
{
    char Nom [20] ;
    char Prenom [20] ;
    int CIN;
    int Genre ;
    Date date_naissance;
    char Adresse_email [20];
    int Telephone;
    char Adresse[30] ;
    char Ville[20];
    int Type ;
} utilisateur;


int ajouter(char * filename, utilisateur u);
int modifier( char * filename, int CIN, utilisateur nouv);
int supprimer(char * filename, int CIN );
utilisateur chercher(char * filename, int CIN) ;


#endif
