#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;
/* Bei dieser Aufgabe wird Zufallszahlen von 1 bis 10
genriert und der Nutzer muss diese Zahlen erraten */
/* Dabei hat der Nutzer nur fünf Versuche	*/
void begruessung()
{
	cout << "HALLO UND HERZLICH WILLKOMMEN !!" << endl
		<< "Bei diesem Programm sollst du Zufallszahlen erraten ";
}
// Hier deklariert man diese Funktion
// damit kann man sie bei "easy-mode-Funktion" aufrufen 
void medium_mode();



void easy_mode()
{
	// Damit wird der Inhalt gelöscht und der Bildschirm neu geladen
	system("cls");
	int versuche = 0;
	int eingabe;
	// Damit werden nur Zahlen zwischen 1 und 10 generiert
	int zufallszahl = rand() % 10 + 1;
	

	while (true)
	{
		cout << "Geb biit eine Zahl zwischen 1 und 10 ein: ";
		cin >> eingabe;
		if (eingabe != zufallszahl)
		{
			// Wenn man die Zahl falsch errät , wird das angezeigt und die Varable "versuche" wird um 1 erhöht 
			cout << "\nFalsch!! " << "\n";
			versuche++;
			// Hier wird dem Nutzer gesagt, ob die Zahl größer oder kleiner ist
			if (zufallszahl > eingabe)
			{
				cout << "\nDie Zahl ist groesser " << "\n";
			}
			else
			{
				cout << "Die Zahl ist kleiner " << "\n";
			}
		}
		// Wenn die Zahl richtig ist,  werden die Anzahl der gebrauchten Versuche angezeigt
		else
		{
			cout << "Du hast richtig erraten" << "\n";
			cout << "Du hast " << versuche << " Versuche gebraucht " << "\n\n";
			// Wenn die man weniger als 3 Versucht brauchte, kann der Nutzer dirkt einen schweren Modus wählen
			if (versuche < 3)
			{
				char weiter;
				cout << "Du hast super gespielt!! " << "\n\n"
					<< "Willst du was Schwerigeres auspropieren ? (J)a/(N)ein??";
				cin >> weiter;
				if (weiter == 'j' || weiter == 'J')
				{
					medium_mode();
				}
				else
				{
					cout << "\nSchade!!"<<"\n";
					break;
				}
			}
			
			break;
		}

		// Wenn man keine Versuche mahr hat, endt das Spiel 
		// Die Schleife wird dementsprechend unterbrochen

		if (versuche == 5)
		{
			cout << "Du hast keine Versuche mehr." << "\n";
			break;
		}
	}

}
void hard_mode();

void medium_mode()
	{
		system("cls");
		int versuche = 0;
		int eingabe;
		int zufallszahl = rand() % 25 + 1;


		while (true)
		{
			cout << "Geb bitte eine Zahl zwischen 1 und 25 ein: ";
			cin >> eingabe;
			if (eingabe != zufallszahl)
			{

				cout << "\nFalsch!! " << "\n";
				versuche++;
				if (zufallszahl > eingabe)
				{
					cout << "\nDie Zahl ist groesser " << "\n";
				}
				else
				{
					cout << "Die Zahl ist kleiner " << "\n";
				}
			}
			else
			{
				cout << "Du hast richtig erraten" << "\n";
				cout << "Du hast " << versuche << " Versuche gebraucht " << "\n\n";
				
				if (versuche < 3)
				{
					char weiter;
					cout << "Du hast toll gespielt!!,du musst auf dich Stolz sein " << "\n\n"
						<< "Willst du den schwirigesten Modus auspropieren (J)a/(N)ein??";
					cin >> weiter;
					if (weiter == 'j' || weiter == 'J')
					{
						hard_mode();
					}
					else
					{
						cout << "\nSchade!!" << "\n";
						break;
					}
				}
				break;
			}
			if (versuche == 5)
			{
				char choise;
				cout << "Du hast keine Versuche mehr." << "\n";
				cout << "Loser!!"<<endl;
				cout << "Willst du was Einfacheres auspropieren (J)a, (N)ein danke "<<"\n\n";
				cin >> choise;
				if (choise=='j'||choise=='J')
				{
					easy_mode();
				}
				else
				{
					cout << "\nDas schaffst du bestimmt jetzt, versuch einfach nochmal!!" << endl;
					break;
				}
				

			}
		}

	}

	void hidden_modus();

	void hard_mode()
	{
		system("cls");
		int versuche = 0;
		int eingabe;
		int  zufallszahl = rand() % 50 + 1;


		while (true)
		{
			cout << "Geb biite eine Zahl zwischen 1 und 50 ein: ";
			cin >> eingabe;
			if (eingabe != zufallszahl)
			{
				cout << "\nFalsch!! " << "\n";
				versuche++;
				if (zufallszahl > eingabe)
				{
					cout << "Die Zahl ist groesser " << endl;
				}
				else
				{
					cout << "Die Zahl ist kleiner " << endl;
				}
			}
			else
			{
				cout << "Du hast richtig erraten" << endl;
				cout << "Du hast " << versuche << " Versuche gebraucht " << "\n\n";
				if (versuche < 3)
				{
					char input;
					cout << " Du hast wunderschoen gespielt!!." << endl
						<< " Du bist wirklich ein Held " << "\n\n"
						<< "Willst du den Hidden Modus auspropieren ? (J)a, (N)ein " << "\n\n";
					cin >> input;
					if (input == 'j' || input == 'J')
					{
						hidden_modus();
					}
					else
					{
						cout << "\n Schade " << endl;
						break;
					}
				}
				break;
			}
			if (versuche == 5)
			{
				char choise;
				cout << "Du hast keine Versuche mehr." << "\n\n";
				cout << "Du hast sehr gut gespielt" << "\n\n"
					<< "Willst du was Einfacheres auspropieren? (J)a, (N)ein danke. " << "\n";
				cin >> choise;
				if (choise == 'j' || choise == 'J')
				{
					medium_mode();
				}
				else
				{
					cout << "\nDas schaffst du bestimmt jetzt, versuch einfach nochmal!!" << endl;
					break;
				}

			}
		}
	}

void hidden_modus()
{
	system("cls");
	int versuche = 0;
	int eingabe;
	int  zufallszahl = rand() % 100 + 1;
	cout << "DAS IST DER HIDDEN-MODUS" << "\n\n"
		<< "Du hast nur drei Versuche!!!" << endl;

		while (true)
		{
			cout << "GEBE BITTE EINE ZAHL ZWISCHEN 1 UND 100 EIN: "<<endl;
			cin >> eingabe;
			if (eingabe != zufallszahl)
			{
				cout << "\nFalsch!! " << "\n";
				versuche++;
				if (eingabe > zufallszahl)
				{
					cout << "Die Zahl ist kleiner"<<endl;
				}
				else
				{
					cout << "Die Zahl ist groesser" << endl;
				}
			}
			else
			{
				cout << "DU HAST RICHTIG ERRATEN!!" << "\n\n"
					<< "HERZLICHEN GLUECKWUNSCH!!!" << endl;
				if (versuche == 1)
				{
					cout << "DU BIST WIRKLICH EIN GENIE"<<endl;
				}
				break;
			}
			if (versuche == 3)
			{
				char input;
				cout << "DU HAST LEIDER KEINE VERSUCHE MEHR !!" << endl
					<< "Willst du was Einfaches ausprobieren ? (J)a,(N)ein  ";
				cin >> input;
				if (input == 'j' || input == 'J')
				{
					hard_mode();
				}
				else
				{
					cout << "Guter Versuch!!!";
				}
				break;
			}

		}
		
}

void menu()
{

	char input = ' ';

	cout << "\n\n";

	while (input != '4' && input != 'q')
	{
		cout << "WAEHLE DIE SCHWERIGKEIT AUS: " << endl
			<< "(1) EINFACH" << endl
			<< "(2) MITTEL" << endl
			<< "(3) SCHWER " << endl
			<< "(q) oder (4) BEENDEN ";
		cin >> input;
		switch (input)
		{
		case'1':
			easy_mode();
			break;
		case'2':
			medium_mode();
			break;
		case'3':
			hard_mode();
			break;
		case'4':

		case'q':
			cout << "Ende" << endl;
			break;

		default:
			cout << "Ungueltige Eingabe!!, versuche bitte erneut.";
			break;
		}
	}
}

int main()
{
	// Damit zufällige Zahlen genriert werden können
	srand(time(NULL));
	begruessung();
	menu();
	system("PAUSE");
	return 0;
}
