#include <stdio.h>

int main() {
    float prix_unitaire_HT, taux_TVA, prix_total_TTC;
    int quantite;
    printf("Entrez le prix unitaire hors taxe (en €): ");
    scanf("%f", &prix_unitaire_HT);

    printf("Entrez le taux de TVA (en pourcentage): ");
    scanf("%f", &taux_TVA);

    printf("Entrez la quantité d'articles: ");
    scanf("%d", &quantite); 
    prix_total_TTC = prix_unitaire_HT * quantite * (1 + taux_TVA / 100);
    printf("Le prix total TTC de l'achat est : %.2f €\n", prix_total_TTC);
    return 0;
}

