#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
    
    observateur obs1={1213332,"Othmen","Anissa","femme","Tunisienne","observateur",{23,8,2001}},obs2={1213334,"Miller","Michael","homme","Américain","journaliste",{02,9,1996}},obs3;

    int x;
x=ajouter("observateur.txt", obs1);

    if(x==1)
        printf("\najout de l'observateur avec succés");
    else printf("\nechec ajout");

    x=modifier("observateur.txt",1213332,obs2 );

    if(x==1)
        printf("\nModification de l'observateur avec succés");
    else printf("\nechec Modification");

   /*x=supprimer("observateur.txt",1213332);
    if(x==1)
        printf("\nSuppression de l'observateur avec succés");
    else printf("\nechec Suppression");

    obs3=chercher("observateur.txt",1213334);
    if(obs3.id==-1)
        printf("introuvable");*/
    return 0;
}

