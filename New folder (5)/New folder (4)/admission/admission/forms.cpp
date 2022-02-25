#include <iostream>
#include <string>
#include <conio.h>
#include "mainHeader.h"
#include "arrays.h"

using namespace std;

void studentInfo(int i) {
	system("CLS");
	cout << "**********STUDENT INFORMATION**********\n" << endl;
	cout << "Enter Student's First Name : ";
	cin >> firstName[1];
	cout << endl;
	cout << "Enter Student's Last Name : ";
	cin >> lastName[1];
	cout << "Enter Student's gender : ";
	getline(cin, gender[i]);
	cout << "Enter Student's date of birth : ";
	getline(cin, DOB[i]);
	cout << "Enter Student's blood group : ";
	getline(cin, bloodgroup[i]);
	cout << "Enter Student's CNIC/B-form No : ";
	getline(cin, CNIC[i]);
	cout << "Enter Student's age : ";
	getline(cin, age[i]);
	cout << "Enter Student's province : ";
	getline(cin, province[i]);
	cout << "Enter Student's domicile : ";
	getline(cin, domicile[i]);
	cout << "Enter Student's religion : ";
	getline(cin, religion[i]);
	cout << "Enter Student's nationality : ";
	getline(cin, nationality[i]);
	cout << "Enter Student's mark of identification : ";
	getline(cin, mark[i]);
	cout << "Enter Student's cell no : ";
	getline(cin, cellno[i]);
	cout << "Enter Student's email id : ";
	getline(cin, email[i]);
	cout << "Enter Student's home address(present) : ";
	getline(cin, present_address[i]);
	cout << "Enter Student's home address(permanent) : ";
	getline(cin, permanent_address[i]);
}

void familyInfo(int i) {
	system("CLS");
	cout << "**********FATHER'S INFORMATION***********\n" << endl;
	cout << "Enter Student's Father name : ";
	getline(cin, fathername[i]);
	cout << "Enter father's occupation : ";
	getline(cin, occupation[i]);
	cout << "Enter father's office contact number(if any) : ";
	getline(cin, cellno1[i]);
	cout << "Enter father's monthly income : ";
	getline(cin, income[i]);
	cout << "Enter father's contact number : ";
	getline(cin, cellno[i]);
	cout << "Enter father's email id : ";
	getline(cin, email[i]);
	cout << "Enter father's status(alive/deceased) : ";
	getline(cin, status[i]);
	cout << endl;
	system("CLS");
	cout << "**********MOTHER'S INFORMATION***********\n" << endl;
	cout << "Enter Student's Mother name : ";
	getline(cin, mothername[i]);
	cout << "Enter mother's occupation : ";
	getline(cin, m_occupation[i]);
	cout << "Enter mother's office contact number(if any) : ";
	getline(cin, m_cellno1[i]);
	cout << "Enter mother's monthly income : ";
	getline(cin, m_income[i]);
	cout << "Enter mother's contact number : ";
	getline(cin, m_cellno[i]);
	cout << "Enter mother's email id : ";
	getline(cin, m_email[i]);
	cout << endl;
	cout << "*****SIBLINGS INFORMATION*******\n" << endl;
	int siblings;
	cout << "How many siblings do you have? ";
	cin >> siblings;
	for (int i = 1; i <= siblings; i++)
	{
		if (siblings == 0)
			break;
		else
		{
			cout << "Name : ";
			getline(cin, s_name[0]);
			cout << "Occupation : ";
			getline(cin, s_occupation[0]);
		}
	}
}

void decForm(int i) {
	char submit;

	int toChange;
	char changeInfo;
	cout << "\t\tDeclaration Form\n";
	cout << "If the entered information is wrong, we hold the right to ban you from taking admission in any of our Institute\n";
	cout << "Do you want to change the information you entered? (Y/N)=";
	cin >> changeInfo;
	if (changeInfo == 'Y' || changeInfo == 'y') {
		cout << "Which information do you want to change? \n1.Education Information\n2.Personal Information\n3.Family Information\n";
		cin >> toChange;
		switch (toChange) {
		case 1:
			cout << "Education Information\n";
			break;
		case 2:
			studentInfo(i);
			break;
		case 3:
			familyInfo(i);
		default:
			cout << "Please enter numbers ranging 1-3\n";
			decForm(i);
			break;
		}
	}
	cout << endl;
	cout << "I, hereby declare that, the entries made by me in the APPLICATION FORM are complete and true to the best of my knowledge and based on record " << endl;
	cout << "I, hereby undertake to present the original documents immediately upon demand by the concerned authorities of the institute." << endl;
	cout << "Press enter to SUBMIT your APPLICATION FORM" << endl;
	cin.get(submit);
	if (submit == '\n')
	{
		cout << "THANK YOU! SUBMITTED SUCESSFULLY " << endl;
		cout << "ROLL NO alloted to you is " << rollno[i] << endl << "Please note it down." << endl << endl;
	}
}

void search_record() {
	cout << endl << firstName[0] << firstName[1];
}

void schoolInfo(int i) {
	double mark1, mark2;
	string s_lastInstitute[20];
	cout << "Enter the last class attended : ";
	cin >> s_lastClass[i];
	cin.ignore();
	cout << "Enter the institute name last attended : ";
	getline(cin, s_lastInstitute[i]);
	cout << "Enter the marks obtained in previous class : ";
	cin >> mark1;
	cout << "Enter the total marks : ";
	cin >> mark2;
	//s_lastPer[i] = mark1 * 100 / mark2;
	cout << "Your percentage is : " << s_lastPer[i] << endl;
}

void collegeInfo(int i) {
	system("CLS");
	double m_mark1, m_mark2, c_mark1, c_mark2, per[2];
	string institute[2];
	cout << "MATRIC:" << endl;
	cout << "Enter the marks obtained : ";
	cin >> m_mark1;
	cout << "Enter the total marks : ";
	cin >> m_mark2;
	cin.ignore();
	//per[0] = percentage(m_mark1, m_mark2);
	cout << "Your percentage is : " << per[0] << endl;
	cout << "Enter the name of institute : ";
	getline(cin, institute[0]);
	cout << "HSSC-I" << endl;
	cout << "Enter the marks obtained : ";
	cin >> c_mark1;
	cout << "Enter total mark : ";
	cin >> c_mark2;
	cin.ignore();
	//per[1] = percentage(c_mark1, c_mark2);
	cout << "Your percentage is : " << per[1] << endl;
	cout << "Enter the name of institute : ";
	getline(cin, institute[1]);
}

void uniInfo(int i) {
	double m_mark1, m_mark2, c_mark1, c_mark2, e_mark1, e_mark2, per[3];
	string institute[2];
	cout << "MATRIC:" << endl;
	cout << "Enter the marks obtained : ";
	cin >> m_mark1;
	cout << "Enter the total marks : ";
	cin >> m_mark2;
	cin.ignore();
	//per[0] = percentage(m_mark1, m_mark2);
	cout << "Your percentage is : " << per[0] << endl;
	cout << "Enter the name of institute : ";
	getline(cin, institute[0]);
	cout << "HSSC-II" << endl;
	cout << "Enter the marks obtained : ";
	cin >> c_mark1;
	cout << "Enter total mark : ";
	cin >> c_mark2;
	cin.ignore();
	//per[1] = percentage(c_mark1, c_mark2);
	cout << "Your percentage is : " << per[1] << endl;
	cout << "Enter the name of institute : ";
	getline(cin, institute[1]);
	cout << "ENTRY TEST" << endl;
	cout << "Enter the obtained marks : ";
	cin >> e_mark1;
	cout << "Enter the total marks : ";
	cin >> e_mark2;
	cin.ignore();
	//per[2] = percentage(e_mark1, e_mark2);
	cout << "Your percentage is : " << per[2] << endl;
}

// ELIGIBLITY FUNCTIONS 
void schoolElig(int i) {
	system("CLS");
	cout << "\nMain Menu > Apply Now > Apply in ABC Schools\n\n\n";
	int schoolChoice;
	cout << "\nYou must meet our eligibility criteria before taking admission in ABC School \n\n";
	cout << "Apply In\n" << endl;
	cout << " 1- Early Years\n 2- Middle & Higher\n\n> ";
	cin >> schoolChoice;
	if (schoolChoice == 1) {
		system("CLS");
		cout << "  \nIn the Early Years, children enjoy a caring environment that fosters positive feelings of self-worth and respect.\n";
		cout << "  Personal, social, emotional, physical and intellectual development take place through opportunities to\n";
		cout << "  engage in free and carefully structured play.\t";
		cout << "\n\nOur eligibility criteria for early years is shown below :";

		cout << "\n ________________________" << endl;
		cout << "| Classes  |  Age limit  |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|   KG     | Above 4 yrs |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|  Prep    | Above 5 yrs |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|   1      | Above 6 yrs |" << endl;
		cout << "|__________|_____________|" << endl << endl;
		cout << "\n\nEnter the Class in which you want to take admission : ";
		cin >> s_class[i];

	}
	if (schoolChoice == 2) {
		system("CLS");
		cout << "\nOur school program includes the best aspects of teaching and learning and is designed keeping CIE expectations in mind.\n";
		cout << "We are committed to embrace the cross curriculum priorities and general capabilities of the CIE curriculum.\n\n";

		cout << "\n\nOur eligibility criteria for middle & Higher schools is shown below :\n";
		cout << " ____________________________________________________" << endl;
		cout << "| Classes  | Percentage obtained in previous class   |" << endl;
		cout << "|__________|_________________________________________|" << endl;
		cout << "|  2-5     |    Should be greater than 80%           |" << endl;
		cout << "|__________|_________________________________________|" << endl;
		cout << "|  6-8     |    Should be greater than 75%           |" << endl;
		cout << "|__________|_________________________________________|" << endl;
		cout << "|  9-10    |    Should be greater than 70%           |" << endl;
		cout << "|__________|_________________________________________|" << endl << endl;
		cout << "\n\nEnter the Class in which you want to take admission : ";
		cin >> s_class[i];
		cin.ignore();
		cout << "\nEnter the marks obtained in " << s_class[i] - 1 << " :";
		cin >> s_preMarks[i];
		cout << "\nEnter total marks of " << s_class[i] - 1 << " :";
		cin >> s_preTMarks[i];

		s_percentage[i] = (s_preMarks[i] * 100) / s_preTMarks[i];
		cout << s_percentage[i];

			if( (s_class[i]>=2 && s_class[i]<=5) && (s_percentage[i]>80) ) {
				cout<<"YOU ARE ELIGIBLE TO GET ADMISSION"<<endl;
			}
			else if( (s_class[i]>=6 && s_class[i]<=8) && (s_percentage[i]>75) ) {																	//form filling will be added									
				cout<<"YOU ARE ELIGIBLE TO GET ADMISSION"<<endl;
			}
			else if( (s_class[i]>=9 && s_class[i]<=10) && (s_percentage[i]>70) ) {
				cout<<"YOU ARE ELIGIBLE TO GET ADMISSION"<<endl;
			}
			else {
				cout<<"SORRY! YOU ARE NOT ELIGIBLE TO GET ADMISSION"<<endl;	
			}
	}
}

void collegeElig(int n) {
	cout << "\nYou must meet our eligibility criteria before taking admission in ABC Colleges \n\n";
}

void universityElig(int n) {
	cout << "\nYou must meet our eligibility criteria before taking admission in ABC University \n\n";
}

inline double percentage(double a, double b)
{
	return (a * 100 / b);
}