// Auteur : Ali Tebbal
// Date : 04-10-2020
/*
Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme

But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
               affiche son salaire. Entrez - 1 à la valeur des ventes pour quitter le programme. 
 */              

#include <iostream>
using namespace std;

 int main()
{
       setlocale(LC_ALL, ""); // Pour gérer efficacement la conversion des caractères accentués
     
     // Déclaration des variables
    float ventes;
    float pourcentage;
    float totalSalaire;
    // Déclaration des variables constantes
   const int salaire = 250;

     // Demander à l'utilisateur combien de ventes a fait
        cout << " Combien de ventes vous avez fait ? : ";
        cin >> ventes;
        
            while (ventes != -1 ) // Si le l'utilisateur entre -1, il mit fin au programme 
            {
                if (ventes > 0)  // Si le chiffre est négative le programme affiche un message d'erreur.
                {
                    pourcentage = ventes * 7.5 / 100;
                    totalSalaire = pourcentage + salaire;
                    cout << totalSalaire << " $ " << endl;

                    cout << " Combien de ventes vous avez fait ? : ";
                    cin >> ventes;
                }
                else
                {
                        cout << " Veuillez entrez un chiffres positive " << endl;
                        system("pause");
                        system("cls"); // clear screen

                        cout << " Combien de ventes vous avez fait ? : ";
                        cin >> ventes;
                   
                }
            }
   
   /*
          plan de test
                ventes           salaireTotal
                5000                625 $
                700                 302.5 $
                - 522              Erreur : veuillez entrez un chiffres positive 
                555                 291.6 $
                - 1                 Fin du programme
 */
            
  return 0;
} 
