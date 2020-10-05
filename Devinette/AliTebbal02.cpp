// Auteur : Ali Tebbal
// Date : 04-10-2020
/* but : Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
L�utilisateur a un maximum de 5 chances. Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
nombre.

D�fi : Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition 
*/

#include <iostream> 
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables

	int compteur = 1;
	int number;
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	// Demander � l'utilisateur un nombre
	cout << " Veuillez entrer un nombre : ";
	cin >> number;

	// Si le nombre entr� n'est pas entre 0 et 100 le programme affiche un code d'erreur.
	if (number >= 0 && number <= 100)
	{
		   compteur = 2; // Le programme commence � compter � partir de deux.
			while (compteur <= 5) // le programme donne � l'utilisateur 5 chance pour deviner le bon chiffre.
			{
				if (number == iRandom)
		        cout << " Vous avez gagn� la devinette ";
				else
				cout << " Veuillez entrer un nombre " << compteur << " : ";
				cin >> number;
				compteur++;
            }
		
			cout << " Vous n'avez pas gagn� la devinette ";
	}
	else
    {
			cout << " Erreur : veuillez entrer un chiffres entre 0 et 100  " << endl;
			system("pause");
	}
		return 0;
	
}


