// Auteur : Ali Tebbal
// Date : 04-10-2020
/* but : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.

Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition 
*/

#include <iostream> 
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // Pour gérer efficacement la conversion des caractères accentués

	// Déclaration des variables

	int compteur = 1;
	int number;
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	// Demander à l'utilisateur un nombre
	cout << " Veuillez entrer un nombre : ";
	cin >> number;

	// Si le nombre entré n'est pas entre 0 et 100 le programme affiche un code d'erreur.
	if (number >= 0 && number <= 100)
	{
		   compteur = 2; // Le programme commence à compter à partir de deux.
			while (compteur <= 5) // le programme donne à l'utilisateur 5 chance pour deviner le bon chiffre.
			{
				if (number == iRandom)
		        cout << " Vous avez gagné la devinette ";
				else
				cout << " Veuillez entrer un nombre " << compteur << " : ";
				cin >> number;
				compteur++;
            }
		
			cout << " Vous n'avez pas gagné la devinette ";
	}
	else
    {
			cout << " Erreur : veuillez entrer un chiffres entre 0 et 100  " << endl;
			system("pause");
	}
	

	/*
  Plan de test 
        chiffre entré                résultat
		 -5                   Erreur : veuillez entrer un chiffres entre 0 et 100
         900                  Erreur : veuillez entrer un chiffres entre 0 et 100
		 66                     Veuillez entrer un nombre 2 
		 7                      Veuillez entrer un nombre 3
		 12                     Veuillez entrer un nombre 4
         99                     Veuillez entrer un nombre 5
		 45   
		                       Vous n'avez pas gagné la devinette
*/
		return 0;
	
}


