#ifndef LELECTORALE_H_INCLUDED
#define LELECTORALE_H_INCLUDED
typedef struct {
int j;
int m;
int a;
}date;
typedef struct
{
  int id_liste;
  char genre [50];
  char orientation [50];
  int id_tete ;
  int id1;
  int id2;
  int id3;
  date d;
     
    
}lelectorale;
int ajouter (char *,lelectorale e);
int modifier (char *,int, lelectorale e);
int supprimer (char *,int);
lelectorale chercher( char *,int);






#endif // LELECTORALE_H_INCLUDED


