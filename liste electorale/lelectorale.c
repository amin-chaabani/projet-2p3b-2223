#include "lelectorale.h"
#include<stdio.h>
int ajouter (char nomfich[],lelectorale e)
{
FILE *f=NULL;
f=fopen("liselec.txt","a");
if(f!=NULL)
{
fprintf (f,"%d %s %s %d %d %d %d %d %d %d \n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);
fclose(f);
return(1);
}
return (0);
}
lelectorale chercher (char nomfich[],int id_liste)
{
lelectorale e;
int trouve=-1;
FILE *f=NULL;
f=fopen("liselec.txt","r");
if (f!=NULL)
{
while (fscanf(f,"%d %s %s %d %d %d %d %d %d %d \n",&e.id_liste,e.genre,e.orientation,&e.id_tete,&e.id1,&e.id2,&e.id3,&e.d.j,&e.d.m,&e.d.a)!=EOF)
{
if (e.id_liste==id_liste)
trouve=1;
}
fclose(f);}
if (trouve==-1)
e.id_liste=-1;
return e;
}
int modifier (char nomfich[],int id_liste,lelectorale nouv)
{
int tr=0;
lelectorale e;
FILE *f=fopen(nomfich,"r");
FILE *f2=fopen("nouv.txt","w");
if (f!=NULL && f2!=NULL)
{
while (fscanf(f,"%d %s %s %d %d %d %d %d %d %d \n",&e.id_liste,e.genre,e.orientation,&e.id_tete,&e.id1,&e.id2,&e.id3,&e.d.j,&e.d.m,&e.d.a)!=EOF)
{
if (e.id_liste==id_liste)
{
fprintf(f2,"%d %s %s %d %d %d %d %d %d %d \n",nouv.id_liste,nouv.genre,nouv.orientation,nouv.id_tete,nouv.id1,nouv.id2,nouv.id3,nouv.d.j,nouv.d.m,nouv.d.a);
tr=1;
}
else
fprintf(f2,"%d %s %s %d %d %d %d %d %d %d \n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);
}
}
fclose(f);
fclose(f2);
remove(nomfich);
rename ("nouv.txt",nomfich);
return tr;
}
int supprimer(char nomfich[], int id_liste)
{
    int tr=0;
    lelectorale e;
    FILE * f=fopen(nomfich, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %d %d %d %d %d %d %d\n",&e.id_liste,e.genre,e.orientation,&e.id_tete,&e.id1,&e.id2,&e.id3,&e.d.j,&e.d.m,&e.d.a)!=EOF)
        {
            if(e.id_liste== id_liste)
                tr=1;
            else
                fprintf(f2,"%d %s %s %d %d %d %d %d %d %d\n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);
        }
    }
    fclose(f);
    fclose(f2);
    remove(nomfich);
    rename("nouv.txt", nomfich);
    return tr;
}













