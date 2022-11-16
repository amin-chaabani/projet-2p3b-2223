#include "G_Utilisateur"

int ajouter(char * filename, utilisateur u)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d%d%d%d%s%d%s%s%d\n",u.Nom,u.Prenom,u.CIN,u.Genre,u.date_naissance.j,u.date_naissance.m,u.date_naissance.a,u.Adresse_email,u.Telephone,u.Adresse,u.Ville,u.Type);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int CIN, utilisateur nouv)
{
    int tr=0;
   utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d%d%d%d%s%d%s%s%d\n",u.Nom,u.Prenom,&u.CIN,&u.Genre,&u.date_naissance.j,&u.date_naissance.m,&u.date_naissance.a,u.Adresse_email,&u.Telephone,u.Adresse,u.Ville,&u.Type)!=EOF)
        {
            if(nouv.CIN== CIN)
            {
                fprintf(f2,"%s %s %d %d%d%d%d%s%d%s%s%d\n",nouv.Nom,nouv.Prenom,nouv.CIN,nouv.Genre,nouv.date_naissance.j,nouv.date_naissance.m,nouv.date_naissance.a,nouv.Adresse_email,nouv.Telephone,nouv.Adresse,nouv.Ville,nouv.Type);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d%d%d%d%s%d%s%s%d\n",u.Nom,u.Prenom,u.CIN,u.Genre,u.date_naissance.j,u.date_naissance.m,u.date_naissance.a,u.Adresse_email,u.Telephone,u.Adresse,u.Ville,u.Type);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int CIN)
{
    int tr=0;
    utilisateur u ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %s %d %s %s %d\n",u.Nom,u.Prenom,&u.CIN,&u.Genre,u.Adresse_email,&u.Telephone,u.Adresse,u.Ville,&u.Type)!=EOF)
        {
            if(u.CIN== CIN)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %s %d %s %s %d\n",u.Nom,u.Prenom,u.CIN,u.Genre,u.Adresse_email,u.Telephone,u.Adresse,u.Ville,u.Type);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
utilisateur chercher(char * filename, int CIN)
{
    utilisateur u ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %d %d%s%d%s%s%d\n",u.Nom,u.Prenom,&u.CIN,&u.Genre,u.Adresse_email,&u.Telephone,u.Adresse,u.Ville,&u.Type)!=EOF)
        {
            if(u.CIN== CIN)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        u.CIN=-1;
    return u;

}



