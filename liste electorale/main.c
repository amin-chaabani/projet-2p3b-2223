#include "lelectorale.h"
#include<stdio.h>
int main ()
{
lelectorale e1={1234,"homme","gauche",0000,5980,8901,4070,1,2,2022} ;
lelectorale e2={1356,"femme","droit",1111,1200,8985,4858,8,8,2022} ;
lelectorale e3={1415,"homme","gauche",1852,1856,1789,1568,9,3,2022};
/*int x1=ajouter("liselec.txt",e1);
if (x1==1)
printf ("\n ajout avec succes");
else 
printf ("\n erreur");
int x2=ajouter("liselec.txt",e2);
if (x2==1)
printf ("\n ajout avec succes");
else 
printf ("\n erreur");*/
/*e3=chercher ("liselect.txt",1356);
if (e3.id_liste==-1)
printf("\n not found");
else
printf ("\n %d %s %s %d %d %d %d %d %d %d",e3.id_liste,e3.genre,e3.orientation,e3.id_tete,e3.id1,e3.id2,e3.id3,e3.d.j,e3.d.m,e3.d.a);
e4=chercher ("liselect.txt",1385);
if (e3.id_liste==-1)
printf("\n not found");
else
printf ("\n %d %s %s %d %d %d %d %d %d %d",e4.id_liste,e4.genre,e4.orientation,e4.id_tete,e4.id1,e4.id2,e4.id3,e4.d.j,e4.d.m,e4.d.a);
}*/
int x=modifier("liselec.txt",1234,e1 );
if(x==1)
printf("\nModification de la liste avec succés");
else printf("\nechec Modification");

 x=supprimer("liselec.txt",1111 );
    if(x==1)
        printf("\nSuppression de la liste avec succés");
    else printf("\nechec Suppression");
    return 0;
}
