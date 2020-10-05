// Auteur : Ali Tebbal
// Date : 04-10-2020
/*
Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme

But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
               affiche son salaire. Entrez - 1 � la valeur des ventes pour quitter le programme. 
               
 plan de test 
   ventes           salaireTotal 
   5000                625 
   700                 302.5
  -522                 Erreur
   -1                  Fin du programme
 */

#include <iostream>
using namespace std;

 int main()
{
     // D�claration des variables
    float ventes;
    float pourcentage;
    float totalSalaire;
    // D�claration des variables constantes
   const int salaire = 250;

     // Demander � l'utilisateur combien de ventes a fait
        cout << " Combien de ventes vous avez fait ? : ";
        cin >> ventes;
        
            while (ventes != -1 ) // Si le l'utilisateur entre -1, il mit fin au programme 
            {
                if (ventes > 0)  // Si le chiffre est n�gative le programme affiche un message d'erreur.
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
            
  return 0;
} 
