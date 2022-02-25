#include <iostream>
#include <Windows.h>

#include "mainHeader.h"


using namespace std;



int main() {
	int entryNo = 0, choice, mainChoice, searchChoice;
	char userInput;

	//system("Color 06"); mainLoading();
	//welcome(); system("Color F0");

	while (entryNo <= 20) {

		// mainLoading();

		cout << "\n\nPress E to Enter Program, and Q to quit : ";
		cin >> userInput;
		system("CLS");

		if (userInput == 'e' || userInput == 'E') {
			while (true) {
				loading();
				mainMenu();
				cout << "> ";  cin >> mainChoice;
				system("CLS");

				if (mainChoice == 1) {
					formMenu();

					cin >> choice;
					if (choice == 1) {
						school_record(entryNo);
						break;
					}
					else if (choice == 2) {
						college_record(entryNo);
						break;

					}
					else if (choice == 3) {
						university_record(entryNo);
						break;

					}
					else if (choice == 0) {
						continue;
					}
					else {
						cout << "Sorry we didn't get you, try again";
						break;
					}
				}

				else if (mainChoice == 2) {
					searchMenu();
					cin >> searchChoice;
				}
			}
		}

		else if (userInput == 'q' || userInput == 'Q') {
			cout << "Exiting program "; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; break;
		}
		else {
			cout << "Sorry we didn't get you!, try again";
		}







		entryNo++;
	}


}