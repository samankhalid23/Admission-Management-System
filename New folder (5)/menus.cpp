#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cstdlib>

#include "mainHeader.h"

using namespace std;


void formMenu() {

	int choice;
	loading();
	system("CLS");
	system("Color F6");
	cout << "\nMain Menu > Apply Now" << endl;
	cout << endl;
	cout << " 1-\t Apply in Hawk House Schools \n 2-\t Apply in Hawk House Group of Colleges \n 3-\t Apply in Hawk House University \n\n 0- Back to Main Menu\n" << endl;
	cout << "\n> ";
}

void search() {
	system("CLS");
	system("Color F9");
	int searchChoice; 

	bool searchResult = false; // due to conditional statement (if Hypothesis then Conclusion)

	cout << "\nMain Menu > Inquire your admission\n\n";
	cout << "\nSearch now!" << endl;
	cout << " \n 1-\t Search by Roll Number \n 2-\t Search by Name \n 3-\t Search by Phone Number \n 4-\t Search by Email Address\n 5-\t Search by CNIC \n\n 0- Back to Main Menu\n" << endl;
	cout << "\n\n> ";
	cin >> searchChoice;


		system("CLS");
		switch (searchChoice) {
		case 1:
			cout << "\nMain Menu > Inquire your admission > Search by Roll Number\n";
			searchResult = searchRoll();
			break;
		case 2:
			cout << "\nMain Menu > Inquire your admission > Search by Name\n";
			searchResult = searchName();
			break;
		case 3: 
			cout << "\nMain Menu > Inquire your admission > Search by Phone Number\n";
			searchResult = searchPhone();
			break;
		case 4:
			cout << "\nMain Menu > Inquire your admission > Search by Email Address\n";
			searchResult = searchEmail();
			break;
		case 5:
			cout << "\nMain Menu > Inquire your admission > Search by CNIC\n";
			searchResult = searchCNIC();
			break;

		}
		if (searchResult == false) {
			searchAgain(); // if the record has not been found 
			//this function will let the user to either search again or go back to main menu
		}
		cin.ignore();
		cout << "\n\n> Back to Main Menu";
		cin.get();
	}


void school_record(int n) {
	int elig = schoolElig(n);

	if (elig == 1) {        // Application forms will only 
		redirectForm();     // be called if and only if the eligibility function returns one
		studentInfo(n);     // indirectly means "IF THE USER IS ELIGIBLE"
		familyInfo(n);
		decForm(n);
	}


}


void college_record(int n) {
	int elig = collegeElig(n);

	if (elig == 1) {
		redirectForm();
		studentInfo(n);
		familyInfo(n);
		decForm(n);
	}
}


void university_record(int n) {
	int elig = universityElig(n);

	if (elig == 1) {
		redirectForm();
		studentInfo(n);
		familyInfo(n);
		decForm(n);
	}

}

void eligC() {
	system("CLS"); system("Color F6");
	cout << "\nMain Menu > Eligibility Checker\n";
	int wwhichElig = whichElig();

	if (wwhichElig == 1) {
		schoolElig(99);
	}
	else if (wwhichElig == 2) {
		collegeElig(99);
	}
	else if (wwhichElig == 3) {
		universityElig(99);
	}
	else if (wwhichElig == 4) {
		cout << ".";
	}
	else {
		cout << "Sorry we didn't get you!";
	}
	system("CLS");


}
