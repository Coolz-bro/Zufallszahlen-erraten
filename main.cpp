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
		<< "Bei diesem Programm koennen Sie Zufallszahlen erraten ";
}
void easy_mode()
{
	system("cls");
	srand(time(NULL));
	int versuche = 0;
	int eingabe;
	int zufallszahl = rand() % 10 + 1;
	cout << "\n\n";

	while (true)
	{
		cout << "Geben Sie eine Zahl zwischen 1 und 10 ein: ";
		cin >> eingabe;
		if (eingabe != zufallszahl)
		{
			cout << "Sie haben  falsch  erraten " << endl;
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
			cout << "Sie haben richtig erraten" << endl;
			cout << "Sie haben " << versuche << " Versuche gebraucht " << "\n\n";
			break;
		}
		if (versuche == 5)
		{
			cout << "Sie haben keine Versuche mehr." << "\n\n";
			break;
		}
	}

}

void medium_mode()
{
	system("cls");
	srand(time(NULL));
	int versuche = 0;
	int eingabe;
	int zufallszahl = rand() % 25 + 1;
	cout << "\n\n";

	while (true)
	{
		cout << "Geben Sie eine Zahl zwischen 1 und 25 ein: ";
		cin >> eingabe;
		if (eingabe != zufallszahl)
		{
			cout << "Sie haben  falsch  erraten " << endl;
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
			cout << "Sie haben richtig erraten" << endl;
			cout << "Sie haben " << versuche << " Versuche gebraucht " << "\n\n";
			break;
		}
		if (versuche == 5)
		{
			cout << "Sie haben keine Versuche mehr." << "\n\n";
			break;
		}
	}

}
void hard_mode()
{
	system("cls");
	srand(time(NULL));
	int versuche = 0;
	int eingabe;
	int  zufallszahl = rand() % 50 + 1;
	cout << "\n\n";

	while (true)
	{
		cout << "Geben Sie eine Zahl zwischen 1 und 50 ein: ";
		cin >> eingabe;
		if (eingabe != zufallszahl)
		{
			cout << "Sie haben  falsch  erraten " << endl;
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
			cout << "Sie haben richtig erraten" << endl;
			cout << "Sie haben " << versuche << " Versuche gebraucht " << "\n\n";
			break;
		}
		if (versuche == 5)
		{
			cout << "Sie haben keine Versuche mehr." << "\n\n";
			break;
		}
	}

}

void menu()
{

	char input = ' ';
	begruessung();
	cout<<"\n\n";
	
	while (input != '4' && input != 'q')
	{
		cout << "WAEHLEN SIE DIE SCHWERIGKEIT AUS: " << endl
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
				cout << "Ungueltige Eingabe!!, versuchen Sie bitte erneut.";
				break;
		}
	}
}

int main()
{
	menu();
}
