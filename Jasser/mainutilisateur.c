#include <stdio.h>
#include <string.h>
#include"G_Utilisateur"



int main()
{
    int x;
    utilisateur u1= {"Chtourou","Jasser",14501725,0,29,05,2001,"Mohamedjasser.chtourou@esprit.tn",50776924,"Ghzela","Ariana",0};
    utilisateur u2= {"Bouguerra","Zied",14501823,0,15,01,2000,"Zied.b@gmail.com",23166450,"Menzah1","Tunis",0};
    utilisateur u3;
    x=ajouter("utilisateur.txt", u1);

    if(x==1)
        printf("Ajout d'utilisateur avec succés\n");
    else
        printf("Echec d'ajout d'utilisateur \n");

    x=modifier("utilisateur.txt",14501823,u2 );

    if(x==1)
        printf("Modification d'utilisateur avec succés \n");
    else
        printf("Echec de modification de l'utilisateur \n");
  x=ajouter("utilisateur.txt", u1);

   x=supprimer("utilisateur.txt",14501725);
  if(x==1)
     printf("Suppression de l'utilisateur avec succés \n");
 else
       printf("Echec de suppression de l'utilisateur \n");
    u3=chercher("utilisateur.txt",00502513 );
    if(u3.CIN==-1)
        printf("utilisateur introuvable");
    return 0;
}

