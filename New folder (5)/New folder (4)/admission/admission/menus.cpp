#include <iostream>
#include <Windows.h>
#include "mainHeader.h"
using namespace std;

void mainMenu() {
	//int input;
	system("Color 00");

	cout << "\nAdmissions are currently opened in all of our institutes!" << endl << endl;
	cout << "\n1- Apply Now\n" << endl;
	cout << "2- Inquire your admission\n" << endl;
	cout << "3- Display all records\n" << endl;
	cout << "4- Eligibility Checker\n" << endl;
	cout << "5- About Us\n" << endl;

}

void formMenu() {
	int choice;
	loading();
	cout << "\nMain Menu > Apply Now" << endl;
	cout << endl;
	cout << " 1- Apply in ABC Schools \n 2- Apply in abc Group of Colleges \n 3- Apply in abc University \n\n 0- Back to Main Menu\n" << endl;
	cout << "\n> ";
}

void searchMenu() {
	cout << "Search now!" << endl << endl;
	cout << "Enter" << endl << "1.\t to search by roll number" << endl;
	cout << "Enter" << endl << "2.\t to search by Name" << endl;
	cout << "Enter" << endl << "3.\t to search by Email Address" << endl;
	cout << "Enter" << endl << "4.\t to search by Phone Number" << endl;
}


void school_record(int n) {
	schoolElig(n);
	//studentInfo(n);
	//schoolInfo(n);

}


void college_record(int n) {
	schoolInfo(n);

}


void university_record(int n) {
	schoolInfo(n);

}

// Messages

void welcome() {
	char welcome[] = {'W','e','l','c','o','m','e'};
	system("Color FA");
	cout << "\n\n\t\t\t";
	for (int i = 0; i < 7; i++) {
			cout << welcome[i];
			i!=6 ? Sleep(300) : Sleep(600);
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

void loading() {

	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nLoading"; Sleep(500); 
	system("CLS");
	cout << "\n\n\n\n\n\n\nLoading" << "."; Sleep(500);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\nLoading" << ".."; Sleep(500); 
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\nLoading" << "..."; Sleep(500);
	system("CLS");
	system("Color 0F");

}





//loading shit
void gotoxy(int x, int y)
{
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}
void load()
{
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



