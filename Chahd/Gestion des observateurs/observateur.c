#include<stdio.h>
#include "observateur.h"

int ajouter(char * filename, observateur obs )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %d %d %d\n",obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,obs.dn.j,obs.dn.m,obs.dn.a);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, observateur nouv )
{
    int tr=0;
    observateur obs;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %d %d %d\n",&obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,&obs.dn.j,&obs.dn.m,&obs.dn.a)!=EOF)
        {
            if(obs.id== id)
            {
                fprintf(f2,"%d %s %s %s %s %s %d %d %d\n",nouv.id,nouv.nom,nouv.prenom,nouv.genre,nouv.nationalite,nouv.profession,nouv.dn.j,nouv.dn.m,nouv.dn.a);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %s %d %d %d\n",obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,obs.dn.j,obs.dn.m,obs.dn.a);

        }
    }
    fclose(f);
    fclose(f2);
    remove(f);
    rename("nouv.txt","observateur.txt");
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    observateur obs;
    FILE * f=fopen(filename, "r"); 
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s  %s %s %s %s %d %d %d\n",&obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,&obs.dn.j,&obs.dn.m,&obs.dn.a)!=EOF)
        {
            if(obs.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %s %d %d %d\n",obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,obs.dn.j,obs.dn.m,obs.dn.a);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur chercher(char * filename, int id)
{
    observateur obs;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s %s %s %s %d %d %d\n",&obs.id,obs.nom,obs.prenom,obs.genre,obs.nationalite,obs.profession,&obs.dn.j,&obs.dn.m,&obs.dn.a)!=EOF)
        {
            if(obs.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        obs.id=-1;
    return obs;

}

