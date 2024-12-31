#include <stdio.h>

struct Etudiant {
    char nom[50];
    int age;
    float note;
};

void entrerEtudiant(struct Etudiant* etudiant){
    printf("Entrer le nom de l'etudiant : ");
    scanf("%s", etudiant->nom);  // Utiliser %s pour lire une chaîne de caractères
    printf("Entrer l'age de l'etudiant : ");
    scanf("%i", &etudiant->age);  // Utiliser & pour passer l'adresse de l'âge
    printf("Entrer la note de l'etudiant : ");
    scanf("%f", &etudiant->note);  // Utiliser %f pour lire un float et & pour passer l'adresse
}

void afficherEtudiant(struct Etudiant etudiant){
    printf("Nom : %s - age : %i - note : %f\n", etudiant.nom, etudiant.age, etudiant.note);  // Utiliser %s pour afficher une chaîne de caractères
}

int main(){
    struct Etudiant etudiant;
    entrerEtudiant(&etudiant);
    afficherEtudiant(etudiant);
    return 0;
}
