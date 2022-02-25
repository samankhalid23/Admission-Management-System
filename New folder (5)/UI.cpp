#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "mainHeader.h"

using namespace std;

class Coposition{
private:
	bool ss;
public:
	Coposition():ss(1){};
};
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; 							  // used for goto




// Messages (BASICALLY UI) ///////////////////////////////////////////////////////////////////////////////

void welcome() {
	char welcome[] = { 'W','e','l','c','o','m','e' };
	system("Color FA");
	cout << "\n\n\t\t\t";
	for (int i = 0; i < 7; i++) {
		cout << welcome[i];
		i != 6 ? Sleep(300) : Sleep(600);
	}

	//	system("CLS");
	system("Color FE");
	cout << "\n\n\n\t\t\tTO";
	Sleep(1000);
	//	system("CLS");
	system("Color FB");
	cout << "\n\n\n\n\t\tOur Student Admission Management System";
	Sleep(1500);
	system("CLS");

}







//main loading
void gotoxy(int x, int y) {
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}
void load() {
	char a = 219;
	gotoxy(36, 14);
	cout << "Loading" << endl;
	gotoxy(30, 16);
	for (int r = 1; r <= 20; r++)
	{
		for (int q = 0; q <= 50000000; q++);
		cout << a;
	}
}


void mainLoading() {
	load();
	cout << endl;
	system("CLS");
}


// checking elig

void checkElig() {

	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nChecking your Eligibility"; Sleep(450);
	system("CLS");
	cout << "\n\n\n\n\n\n\nChecking your Eligibility" << "."; Sleep(450);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\nChecking your Eligibility" << ".."; Sleep(450);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\nChecking your Eligibility" << "..."; Sleep(450);
	system("CLS");
	system("Color 0F");

}

void isElig() {
	system("color F2");
	cout << "\n\n\t\t----------------------------------------------------\n";
	cout << "\n\n\t\tCongratulations! You are eligible to take admission!";
	cout << "\n\n\t\t----------------------------------------------------\n";
	Sleep(2000);
}

void submitted() {
	system("color F2");
	cout << "\n\n\t\t-------------------------------------------\n";
	cout << "\n\n\t\tYour form has been submitted successfully!";
	cout << "\n\n\t\t-------------------------------------------\n";
}
// add it in school
void isNElig() {
	system("color F4");
	cout << "\n\n\t\t------------------------------------------------\n";
	cout << "\n\n\t\tSorry! You are not eligible to take admission!";
	cout << "\n\n\t\t-------------------------------------------------\n";

}

void redirectForm() {
	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nRedirecting you to Admission Form"; Sleep(650);
	system("CLS");
	cout << "\n\n\n\n\n\n\nRedirecting you to Admission Form" << "."; Sleep(650);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\nRedirecting you to Admission Form" << ".."; Sleep(650);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\nRedirecting you to Admission Form" << "..."; Sleep(650);
	system("CLS");
	system("Color 0F");
}








void bell(char arr[]) {
	cout << "\n\n\t\t\t";
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		cout << arr[i];
		if (arr[i] != ' ')
		{
			Beep(300, 100);
		}
		Sleep(40);
	}
	cout << "\n\t\t\t";
	for (int i = 0; i < len; i++)
	{
		cout << "_"; Sleep(15);
	}
}
void welcomeR() {
	system("CLS");
	system("COLOR 02");
	cout << "\t\t\t\tASSALAM-U-ALAIKUM:)\n";
	char a[] = "HAWK HOUSE EDUCATIONAL SYSTEM";
	bell(a);
	char b[] = "ADDMISSION FALL 2021";
	bell(b);
	cout << endl << endl << "\n\n\nPress Enter to continue";
	cin.get();
	system("CLS");
}



void gotoXY(int, int); 
int mmainMenu()
{
	system("CLS");
	system("Color F3");
	int menu_item = 0,  x = 6;


	gotoXY(0, 6); cout << "> "; 

	while (true)
	{
		gotoXY(10, 2); cout << "Main Menu";
		gotoXY(10, 3); cout << "_________";
		gotoXY(2, 6);  cout << " Apply Now";
		gotoXY(2, 7);  cout << " Inquire your admission";
		gotoXY(2, 8);  cout  <<" Eligibility Checker";
		gotoXY(2, 9);  cout  <<" About Us";

		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  "; 
			x++;
			gotoXY(0, x); cout << "> "; 
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  "; 
			x--;
			gotoXY(0, x); cout << "> "; 
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			switch (menu_item) {

			case 0: {
				return 1;
			}
			case 1: {
				return 2;
			}
			case 2: {
				return 3;
			}
			case 3: {
				return 4;
			}
			}
		}
	}
}

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}


void searchAgain() {
	int menu_item = 0, run, x = 15;

	gotoXY(0, 15); cout << "> ";

	while (true)
	{
		gotoXY(2, 15);  cout << "Search Again";
		gotoXY(2, 16);  cout << "Back to Main menu\n";
		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				system("CLS");

			    search();
			}
			else {
				system("CLS");
				cout << "Taking you back to main menu";
				system("CLS");
				break;

			}


		}

	}
}


int college() {
	int menu_item = 0, run, x = 15;
	bool running = true;

	gotoXY(0, 15); cout << "> ";

	while (running)
	{
		gotoXY(2, 15);  cout << "HSSC Part 1";
		gotoXY(2, 16);  cout << "HSSC Part 2\n";

		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				return 1;
			}
			else if (menu_item == 1) {
				return 2;
			}
			else {
				"Sorry we couldn't get you, please try again";
			}

		}

	}
}



int whichElig() {
	int menu_item = 0, run, x = 5;
	bool running = true;

	gotoXY(0, 5); cout << "> ";

	while (running)
	{
		gotoXY(2, 5);  cout << "School Eligibility";
		gotoXY(2, 6);  cout << "College Eligibility";
		gotoXY(2, 7);  cout << "University Eligibility\n";
		gotoXY(2, 8);  cout << "Back to Main Menu\n";


		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				return 1;
			}
		    else if (menu_item == 1) {
				return 2;
			}
			else if (menu_item == 2) {
				return 3;
			}
			else if (menu_item == 3) {
				return 4;
			}
			else {
				"Sorry we couldn't get you, please try again";
			}

		}

	}
}

int changeInfo() {
	int menu_item = 0, run, x = 11;
	bool running = true;

	gotoXY(0, 11); cout << "> ";

	while (running)
	{
		gotoXY(2, 11);  cout << "Yes, I want to change the information I entered";
		gotoXY(2, 12);  cout << "No, I'm satisfied with what I inputted";

		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}
		system("CLS");
		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				return 1;
			}
			else if (menu_item == 1) {
				return 2;
			} 
			else {
				"Sorry we couldn't get you, please try again";
			}

		}

	}

}

int toChangee() {
	int menu_item = 0, run, x = 5;
	



	gotoXY(0, 5); cout << "> ";

	while (true)
	{
		gotoXY(1, 2);  cout << "Which information do you want to change?";

		gotoXY(2, 5);  cout << "Education Information";
		gotoXY(2, 6);  cout << "Personal Information";
		gotoXY(2, 7);  cout << "Family Information\n";
		gotoXY(2, 8);  cout << "Back to Declaration Form\n";

		system("pause>nul"); // the >nul bit causes it the print no message

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				return 1;
			}
			else if (menu_item == 1) {
				return 2;
			}
			else if (menu_item == 2) {
				return 3;
			}
			else if (menu_item == 3) {
				return 4;
			}
			else {
				"Sorry we couldn't get you, please try again";
			}

		}

	}
}

void decAnim() {
	gotoXY(50, 3); cout << "Declaration Form\n\n";

	
	for (int i = 0; i <= 17; i++) {
		Sleep(100);
		gotoXY(49+i, 1);
		cout << '_';
		gotoXY(49+i, 4);
		cout << '_';
	}
   


}
void loading() {

	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nLoading"; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\nLoading" << "."; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\nLoading" << ".."; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\nLoading" << "..."; Sleep(350);
	system("CLS");
	system("Color 0F");

}


void savingInfo() {

	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\Saving your information"; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\nSaving your information" << "."; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\nSaving your information" << ".."; Sleep(350);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\nSaving your information" << "..."; Sleep(350);
	system("CLS");
	system("Color 0F");

}

int decLast() {
	int menu_item = 0, run, x = 6;





	gotoXY(0, 6); cout << "> ";

	while (true)
	{
		gotoXY(2, 6);  cout << "Accept";
		gotoXY(2, 7);  cout << "Decline";

		system("pause>nul");

		if (GetAsyncKeyState(VK_DOWN)) //down button pressed
		{
			gotoXY(0, x); cout << "  ";
			x++;
			gotoXY(0, x); cout << "> ";
			menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP)) //up button pressed
		{
			gotoXY(0, x); cout << "  ";
			x--;
			gotoXY(0, x); cout << "> ";
			menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			if (menu_item == 0) {
				return 1;
			}
			else if (menu_item == 1) {
				return 2;
			}
		

		}

	}
}
