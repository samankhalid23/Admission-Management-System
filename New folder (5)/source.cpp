#include <iostream>
#include <Windows.h>

#include "mainHeader.h"


using namespace std;


// Driver Code
int main() {
	int entryNo = 0, choice, mainChoice, searchChoice;
	char userInput; bool searchResult;

	system("Color 06"); mainLoading();  // Main Loading animation
	welcomeR(); system("Color F0");     // Welcome Animation

	while (entryNo <= 99) {
		mainLoading();
		cout << "\n\nPress E to Enter Menu, and Q to quit : ";
		cin >> userInput;
		system("CLS");

		if (userInput == 'e' || userInput == 'E') {

			while (true) {

				mainChoice = mmainMenu();     // Main Menu which will let the user select

				loading();
				system("CLS");

				if (mainChoice == 1) {
					formMenu();               // Will prompt user to choose b/w School, College and University 

					cin >> choice;
					if (choice == 1) {
						school_record(entryNo);
						break;				// Will take user out of the infinite loop
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
						search();
						break;		
				}

				else if (mainChoice == 3) {
					     eligC();            // if the user just want to check his eligibility 
						 break;
				}
				else if (mainChoice == 4) {
					     aboutUs(); 		 // Simple about us text
				}
				else {
					cout << "Sorry we didn't get you!, try again";
					break;
				}
			}
				
		}
		

		else if (userInput == 'q' || userInput == 'Q') {
			cout << "Exiting program "; Sleep(800); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n\n\n"; break;
		}
		else {
			cout << "Sorry we didn't get you!, try again";
		}


		entryNo++;                     // it'll increase array's index number by 1, each time we fill in a form
	}

	
}
