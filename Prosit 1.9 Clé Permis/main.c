#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef enum Infraction Infraction;
enum Infraction
{
    infraction0,infraction1,infraction2,infraction3,infraction4
};

char* infractionToString(Infraction infraction)
{
    switch (infraction)
    {
    case infraction0 :
        return "Pas d'infraction";
    case infraction1 :
        return "Infraction de type 1";
    case infraction2 :
        return "Infraction de type 2";
    case infraction3 :
        return "Infraction de type 3";
    case infraction4 :
        return "Infraction de type 4";
    default :
        return "Erreur";
    }
}




int main(int *tableau_infraction)
{
    choixUtilisateur();
    free(tableau_infraction);

    return NULL;
}




void TableauInfractionsSarah()
{

    int *tableau_infraction, taille_tableau;
    int nombre_infraction1=0, nombre_infraction2=0, nombre_infraction3=0, nombre_infraction4=0;


    printf("Nombre d'infractions commises?\n");
    scanf("%d", &taille_tableau);

    tableau_infraction=(int*)malloc(taille_tableau*sizeof(int));

    insertionTableauDynamique(tableau_infraction, taille_tableau, &nombre_infraction1, &nombre_infraction2, &nombre_infraction3, &nombre_infraction4);

    system("PAUSE");
    printf("\n");

    printf("Par ordre chronologique, du plus recent au plus ancien:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");
    printf("\n");

    bubbleSort(tableau_infraction, taille_tableau);
    printf("Par type d'infraction, de la plus grave a la moins importante:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");

    affichageNombreInfraction(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");

    affichagePointEtAmende(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");
    return 0;
}


void TableauInfractionsMarty()
{

    int *tableau_infraction, taille_tableau;
    int nombre_infraction1=0, nombre_infraction2=0, nombre_infraction3=0, nombre_infraction4=0;


    printf("Nombre d'infractions commises?\n");
    scanf("%d", &taille_tableau);

    tableau_infraction=(int*)malloc(taille_tableau*sizeof(int));

    insertionTableauDynamique(tableau_infraction, taille_tableau, &nombre_infraction1, &nombre_infraction2, &nombre_infraction3, &nombre_infraction4);

    system("PAUSE");
    printf("\n");

    printf("Par ordre chronologique, du plus recent au plus ancien:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");
    printf("\n");

    bubbleSort(tableau_infraction, taille_tableau);
    printf("Par type d'infraction, de la plus grave a la moins importante:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");

    affichageNombreInfraction(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");

    affichagePointEtAmende(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");
    return 0;
}


void TableauInfractionsDoc()
{

    int *tableau_infraction, taille_tableau;
    int nombre_infraction1=0, nombre_infraction2=0, nombre_infraction3=0, nombre_infraction4=0;


    printf("Nombre d'infractions commises?\n");
    scanf("%d", &taille_tableau);

    tableau_infraction=(int*)malloc(taille_tableau*sizeof(int));

    insertionTableauDynamique(tableau_infraction, taille_tableau, &nombre_infraction1, &nombre_infraction2, &nombre_infraction3, &nombre_infraction4);

    system("PAUSE");
    printf("\n");

    printf("Par ordre chronologique, du plus recent au plus ancien:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");
    printf("\n");

    bubbleSort(tableau_infraction, taille_tableau);
    printf("Par type d'infraction, de la plus grave a la moins importante:\n");
    affichageTableauDynamique(tableau_infraction, taille_tableau);

    system("PAUSE");

    affichageNombreInfraction(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");

    affichagePointEtAmende(nombre_infraction1, nombre_infraction2, nombre_infraction3, nombre_infraction4);

    system("PAUSE");
    return 0;
}




void choixUtilisateur()
{
    int demande_utilisateur;

    printf("Quel utilisateur de cle permis souhaitez-vous voir? \n");
    printf("1-Sarah \n");
    printf("2-Marty \n");
    printf("3-Doc \n");
    scanf("%d", &demande_utilisateur);
    printf("\n");
    if(demande_utilisateur==1)
    {
        TableauInfractionsSarah();
    }
    else if(demande_utilisateur==2)
    {
        TableauInfractionsMarty();
    }
    else if(demande_utilisateur==3)
    {
        TableauInfractionsDoc();
    }
}


void insertionTableauDynamique(int *tableau_infraction, int taille_tableau, int *nombre_infraction1, int *nombre_infraction2, int *nombre_infraction3, int *nombre_infraction4)
{

    printf ("\n");
    printf("0- Pas d'infraction\n1-Regles de conduite\n2-Priorites\n3-Exces de vitesse\n4-Conduite en etat d'ivresse\n\n");

    int i;
    for (i = 0; i<taille_tableau; i++)
    {
        printf("Infraction %d: ", i+1);
        scanf("%d", &tableau_infraction[i]);
        if(tableau_infraction[i]==0)
        {
            tableau_infraction[i]=infraction0;
        }
        else if(tableau_infraction[i]==1)
        {
            tableau_infraction[i]=infraction1;
            (*nombre_infraction1)++;
        }
        else if(tableau_infraction[i]==2)
        {
            tableau_infraction[i]=infraction2;
            (*nombre_infraction2)++;
        }
        else if(tableau_infraction[i]==3)
        {
            tableau_infraction[i]=infraction3;
            (*nombre_infraction3)++;
        }
        else if(tableau_infraction[i]==4)
        {
            tableau_infraction[i]=infraction4;
            (*nombre_infraction4)++;
        }
    }
    printf("\n");
}


void affichageTableauDynamique(int *tableau_infraction, int taille_tableau)
{
    int i;

    printf("\n");
    for(i=taille_tableau-1; i>=0; i--)
    {
        tableau_infraction[i];
        printf("%s\n", infractionToString(tableau_infraction[i]));
    }

    printf("\n");
}


void affichageNombreInfraction(int nombre_infraction1, int nombre_infraction2, int nombre_infraction3, int nombre_infraction4)
{
    int i;

    if((nombre_infraction1)>0 || (nombre_infraction2)>0 || (nombre_infraction3)>0 || (nombre_infraction4)>0)
    {

        printf("\n");
        printf("Vous avez commis des infractions!\n");
        printf("%d infractions de type 1\n", (nombre_infraction1));
        printf("%d infractions de type 2\n", (nombre_infraction2));
        printf("%d infractions de type 3\n", (nombre_infraction3));
        printf("%d infractions de type 4\n", (nombre_infraction4));
        printf("\n");


    }
    else
    {
        printf("\n");
        printf("Vous n'avez commis aucune infraction. Bravo!\n");
        printf("\n");

    }

}


void affichagePointEtAmende(int nombre_infraction1, int nombre_infraction2, int nombre_infraction3, int nombre_infraction4)
{
    int point_restant, point_max=20;
    int point_infraction1=2, point_infraction2=4, point_infraction3=6, point_infraction4=20;
    int prix_amende, prix_infraction1=100, prix_infraction2=200, prix_infraction3=300, prix_infraction4=400;
    point_restant=point_max-(nombre_infraction1*point_infraction1+nombre_infraction2*point_infraction2+nombre_infraction3*point_infraction3+nombre_infraction4*point_infraction4);
    prix_amende=nombre_infraction1*prix_infraction1+nombre_infraction2*prix_infraction2+nombre_infraction3*prix_infraction3+nombre_infraction4*prix_infraction4;

    if(point_restant>5)
    {
        printf("Il vous reste %d points \n", point_restant);
        printf("Votre amende s'eleve a %d euros. \n", prix_amende);

    }
    else if(point_restant<=5 && point_restant>0)
    {
        printf("Attention, il vous reste %d points, un stage pourrait vous aidez!\n", point_restant);
        printf("Votre amende s'eleve a %d euros. \n", prix_amende);
    }
    else
    {
        printf("Vous n'avez plus de points, veuillez vous presentez au commisseriat! \n");
        printf("Votre amende s'eleve a %d euros. \n", prix_amende);
    }
}


void bubbleSort(int *tableau_infraction, int taille_tableau)
{
    int i, j, variable_temporaire, l=1;
    while(l)
    {
        l=0;
        for(j=0; j<taille_tableau-1; j++)
        {
            if(tableau_infraction[j+1]<tableau_infraction[j])
            {
                variable_temporaire=tableau_infraction[j+1];
                tableau_infraction[j+1]=tableau_infraction[j];
                tableau_infraction[j]=variable_temporaire;
                l=1;
            }
        }

    }

    printf("\n\n");
}

