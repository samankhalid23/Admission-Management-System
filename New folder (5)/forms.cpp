#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "mainHeader.h"
#include "arrays.h"   

using namespace std;


void studentInfo(int i) {
	system("CLS");
	cout << "STUDENT INFORMATION" << endl;
	cout << "___________________\n\n";
	cin.ignore(); // to clear memory buffer
	cout << "Enter Student's First Name             : ";
	getline(cin, firstName[i]);
	cout << "Enter Student's Last Name              : ";
	getline(cin, lastName[i]);
	cout << "Enter Student's gender                 : ";
	getline(cin, gender[i]);
	cout << "Enter Student's date of birth          : ";
	getline(cin, DOB[i]);
	cout << "Enter Student's CNIC/B-form No         : ";
	getline(cin, CNIC[i]);
	cout << "Enter Student's age                    : ";
	cin >> age[i]; cin.ignore();
	cout << "Enter Student's City of Residence      : ";
	getline(cin, city[i]);
	cout << "Enter Student's Nationality            : ";
	getline(cin, nationality[i]);
	cout << "Enter Student's Religion		     : ";
	getline(cin, religion[i]);
	cout << "Enter Student's Phone Number           : ";
	getline(cin, phone[i]);
	cout << "Enter Student's Email Address          : ";
	getline(cin, email[i]);
	cout << "Enter Student's Address                : ";
	getline(cin, address[i]);
	savingInfo(); 
}


void familyInfo(int i) {
	system("CLS");
	cout << "FATHER'S INFORMATION\n";
	cout << "____________________\n\n";
	cout << "Enter Student's Father name                  : ";
	getline(cin, fatherName[i]);
	cout << "Enter father's occupation                    : ";
	getline(cin, occupation[i]);
	cout << "Enter father's monthly income                : ";
	getline(cin, income[i]);
	cout << "Enter father's contact number                : ";
	getline(cin, cellno[i]);
	cout << "Enter father's Email id                      : ";
	getline(cin, fEmail[i]);
	cout << "Enter father's status(alive/deceased)        : ";
	getline(cin, status[i]);
	cout << endl;
	system("CLS");
	cout << "MOTHER'S INFORMATION" << endl;
	cout << "____________________\n\n";
	cout << "Enter Student's Mother name                  : ";
	getline(cin, mothername[i]);
	cout << "Enter mother's occupation                    : ";
	getline(cin, m_occupation[i]);
	cout << "Enter mother's contact number                : ";
	getline(cin, m_cellno[i]);

	cout << endl;
	cout << "SIBLINGS INFORMATION" << endl;
	cout << "____________________\n\n";
	int siblings;
	cout << "How many siblings do you have? ";
	cin >> siblings;
	cin.ignore();
	for (int i = 1; i <= siblings; i++)
	{
		if (siblings != 0) {
			cout << "Name of sibling " << i << "       : ";
			getline(cin, sibName[i]);
			cout << "Occupation of sibling " << i << " : ";
			getline(cin, sibOccupation[i]);
		}
	}
	savingInfo();
}

void decForm(int i) {
	while (true) {
		system("CLS");

		decAnim();
		cout << "\n\n\nIf the entered information is wrong, we hold the right to ban you from taking admission\n";
		cout << "Do you want to change the information you entered?";
		int cchangeInfo = changeInfo(); // will ask the user if he wants to change info that was being entered
		system("CLS");

		if (cchangeInfo == 1) { // if he wants to change
			int toChange = toChangee();

			switch (toChange) {
			case 1:
				if (applied[i] == "School") {
					schoolElig(i);
				}
				else if (applied[i] == "College") {
					collegeElig(i);
				}
				else if (applied[i] == "University") {
					universityElig(i);
				}
				break;
			case 2:
				studentInfo(i);
				break;
			case 3:
				familyInfo(i);
				break;
			case 4:
				continue;
			default:
				cout << "Please enter numbers ranging 1-3\n";
				decForm(i);
				break;
			}
		}
		system("CLS");

		cout << "I, hereby declare that, the entries made by me in the APPLICATION FORM are complete and true to the best of my knowledge and based on record " << endl;

		int ddecLast = decLast();


		if (ddecLast == 1) {
			system("CLS");
			loading();
			submitted();
			cout << " " << firstName[i] << ", Roll Number alloted to you is " << rollNumber[i] << endl << "\nAfter your admission has been confirmed, We'll get to you through your email address " << email[i] << endl << endl;
			cin.get();
			break;
		}
		else {
			system("CLS");
			cout << "YOU MUST AGREE TO THE DECLARATION FORM";
			Sleep(1000);
			continue;
		}
	}
}

// ELIGIBLITY FUNCTIONS 
int schoolElig(int i) {
	applied[i] = "School";

	system("CLS");
	cout << "\nMain Menu > Apply Now > Apply in Hawk House Schools\n\n\n";
	int schoolChoice;
	cout << "\nYou must meet our eligibility criteria before taking admission in ABC School \n\n";
	cout << "Apply In\n" << endl;
	cout << " 1- Early Years\n 2- Middle & Higher\n\n> ";
	cin >> schoolChoice;
	if (schoolChoice == 1) {
		loading();
		system("CLS");
		cout << "\nMain Menu > Apply Now > Apply in Hawk House Schools > Early Years\n\n\n";

		cout << "  \nIn the Early Years, children enjoy a caring environment that fosters positive feelings of self-worth and respect.\n";
		cout << "  Personal, social, emotional, physical and intellectual development take place through opportunities to\n";
		cout << "  engage in free and carefully structured play.\t";
		cout << "\n\nOur eligibility criteria for early years is shown below :";

		cout << "\n ________________________" << endl;
		cout << "| Classes  |  Age limit  |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|  1- KG   | Above 4 yrs |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|  2- Prep | Above 5 yrs |" << endl;
		cout << "|__________|_____________|" << endl;
		cout << "|  3- One  | Above 6 yrs |" << endl;
		cout << "|__________|_____________|" << endl << endl;
		cout << "\n\nEnter the Class in which you want to take admission : ";
		cin >> s_class[i];
		cout << "\n\nEnter your age : ";
		cin >> age[i];

		checkElig();

		system("CLS");
			if( s_class[i]==1 && (age[i]>=4 && age[i]<8) ) {
				isElig();
				return 1;
			}
			else if(s_class[i] == 2 && (age[i] >= 5 && age[i] < 9)) {
				isElig();
				return 1;

			}
			else if( s_class[i] == 3 && (age[i] >= 6 && age[i] < 10) ) {
				isElig();
				return 1;

			}
			else {
				isNElig();
				cin.ignore();   
				cin.get();
				system("CLS");
				return 0;

			}

	}
	if (schoolChoice == 2) {
		loading();

		system("CLS");
		cout << "\nMain Menu > Apply Now > Apply in Hawk House Schools > Middle & Higher\n\n\n";

		cout << "\nOur school program includes the best aspects of teaching and learning and is designed keeping CIE expectations in mind.\n";
		cout << "We are committed to embrace the cross curriculum priorities and general capabilities of the CIE curriculum.\n\n";

		cout << "\n\nOur eligibility criteria for middle & Higher schools is shown below :\n";
		cout << "		____________________________________________________" << endl;
		cout << "		| Classes  | Percentage obtained in previous class   |" << endl;
		cout << "		|__________|_________________________________________|" << endl;
		cout << "		|  2-5     |    Should be greater than 80%           |" << endl;
		cout << "		|__________|_________________________________________|" << endl;
		cout << "		|  6-8     |    Should be greater than 75%           |" << endl;
		cout << "		|__________|_________________________________________|" << endl;
		cout << "		|  9-10    |    Should be greater than 70%           |" << endl;
		cout << "		|__________|_________________________________________|" << endl << endl;
		cout << "\n\nEnter the Class in which you want to take admission : ";
		cin >> s_class[i];
		cin.ignore();
		cout << "\nEnter the marks obtained in " << s_class[i] - 1 << " :";
		cin >> s_preMarks[i];
		cout << "\nEnter total marks of " << s_class[i] - 1 << " :";
		cin >> s_preTMarks[i];


		per[i] = percentage(s_preMarks[i], s_preTMarks[i]);
		cout << per[i];
		checkElig();
		system("CLS");
			if( (s_class[i]>=2 && s_class[i]<=5) && (per[i]>80) ) {
				isElig();
				return 1;
			}
			else if( (s_class[i]>=6 && s_class[i]<=8) && (per[i]>75) ) {																	
				isElig();
				return 1;

			}
			else if( (s_class[i]==9 || s_class[i]==10) && (per[i]>70) ) {
				isElig();
				return 1;

			}
			else {
				isNElig();
				cin.ignore();
				cin.get();
				system("CLS");
				return 0;

			}
	}
}

int collegeElig(int n) {
	system("CLS");
	applied[n] = "College";

	int choice;
	double x, y, z, a, b, c, total;
	float mark1, mark2;


	choice = college();

	system("CLS");
	cout << "Main Menu > Apply Now > Apply in College\n\n";
	if (choice == 1) {
		cout << "\nMain Menu > Apply Now > Apply in College > HSSC Part 1\n\n";
		cout << "Eligibility Criteria for getting admission" << endl;
		cout << "		 _______________________________ " << endl;
		cout << "		|          Percentage           |" << endl;
		cout << "		|_______________________________|" << endl;
		cout << "		| Percentage obtained in matric |" << endl;
		cout << "		|  should be greater than 85%   |" << endl;
		cout << "		|_______________________________|" << endl << endl;
		cout  << endl;
		cout << "Obtained Marks in matric : ";
		cin >> mark1;
		cout << "Total marks in matric : ";
		cin >> mark2;
		per[n] = percentage(mark1, mark2);
	

		system("CLS");

		if (per[n] > 85)
		{
			cout << "Your aggregate is " << per[n] << endl << endl ;
		    isElig();
			return 1;
		}
		else
		{
			isNElig();
			cout << "\nPress enter to go back to Main Menu";
			cin.get(); Sleep(1000);
			system("CLS");
			return 0;
		}
	}
		
	if (choice ==2){
		cout << "\nMain Menu > Apply Now > Apply in College > HSSC Part 2\n\n";

		cout << "Eligibility Criteria for getting admission" << endl;
		cout << "		________________________________________________ " << endl;
		cout << "		|          | Weightage for aggregate calculation |" << endl;
		cout << "		|__________|_____________________________________|" << endl;
		cout << "		| Matric   |      20% marks in matric            |" << endl;
		cout << "		|__________|_____________________________________|" << endl;
		cout << "		| HSSC-I   |       80% marks in HSSC-I           |" << endl;
		cout << "		|__________|_____________________________________|" << endl << endl;
		cout << "TOTAL AGGREGATE SHOULB BE GREATER THAN 85% " << endl;
		cout << "Enter your marks to check if you are eligible to take admission" << endl;
		cout << "Total marks in matric : ";
		cin >> x;
		cout << "Obtained marks in matric : ";
		cin >> y;
		z = percentage(y, x);
		cout << "Total marks in HSSC-I : ";
		cin >> a;
		cout << "Obtained marks in HSSC-I : ";
		cin >> b;
		c = percentage(b, a);
		total = (z * 0.2) + (c * 0.8);
		if (total > 85)
		{
			isElig();
			return 1;		
		}
		else
		{
			isNElig();
			cout << "\nPress enter to go back to Main Menu";
			cin.get(); Sleep(1000);
			system("CLS");
			return 0;
		}

	}
}

int universityElig(int n) {
	applied[n] = "University";

	loading();
	system("CLS");
		float x, y, z, a, b, c, d, e, f, total;
		cout << "\nMain Menu > Apply Now > Apply in University\n\n";
		cout << "Eligibility Criteria for getting admission in university" << endl;
		cout << "		___________________________________________" << endl;
		cout << "		| Weightage for aggregate calculation       |" << endl;
		cout << "		|___________________________________________|" << endl;
		cout << "		| Matric   |      10% marks in matric       |" << endl;
		cout << "		|__________|________________________________|" << endl;
		cout << "		|  FSC     |       40% marks in FSC         |" << endl;
		cout << "		|__________|________________________________|" << endl;
		cout << "		|Entry Test|    50% marks in entry test     |" << endl;
		cout << "		|__________|________________________________|" << endl << endl;
		cout << "TOTAL AGGREGATE SHOULD BE GREATER THAN 80%\n " << endl;
		cout << "Enter Total marks in matric : ";
		cin >> x;
		cout << "Enter Obtained marks in matric : ";
		cin >> y;
		z = percentage(y, x);
		cout << endl << "Percentage in matric : " << z << '%' << endl << endl;
		cout << "Total marks in FSC : ";
		cin >> a;
		cout << "Obtained marks in FSC : ";
		cin >> b;
		c = percentage(b, a);
		cout << endl << "Percentage in FSC : " << c << '%' << endl << endl;
		cout << "Obtained marks in Entry test : ";
		cin >> e;
		f = percentage(e, 100);
		cout << endl << "Percentage in Entry Test : " << f << '%' << endl << endl;

		per[n] = (z * 0.1) + (c * 0.4) + (f * 0.5);

		checkElig();
		cout << "Your Aggregate : " << per[n] << '%';

		if (per[n] >= 80) {
			isElig();
			return 1;

		}
		else if(per[n]<80){
			isNElig();
			cout << "\nPress enter to go back to Main Menu";
			cin.get(); //Sleep(1000);
			system("CLS");
			return 0;

		}

	}


float percentage(double a, double b) {
	return (a * 100 / b);
}



// Search Functions



bool searchRoll() {

		string searchKeyword;
		bool found = false;

		cout << "\nEnter the Roll Number you want to search : ";
		cin >> searchKeyword;

		// searching animation
		system("Color 02");
		system("CLS");
		cout << "\n\n\n\n\n\nSearching for Roll Number " << "'" << searchKeyword << "'" << " in our Database."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(350);
		system("Color 0F");
		//
		cout << "\nSearching Completed! \nSearch Results for Roll# " << searchKeyword << " : \n\n";

		for (int i = 0; i < 99; i++) {
			if (searchKeyword == rollNumber[i]) {
				system("CLS");
				cout << "Record Found!\n";
				cout << "Information of the person bearing Roll Number '" << searchKeyword << "' is shown below.\n\n";
				cout << "Applied For      : " << applied[i] << " in class " << s_class[i] << "\n";
				cout << "Status           : ADMISSION IN PROCESS\n";
				cout << "Name             : " << firstName[i] << " " << lastName[i] << endl;
				cout << "Father Name      : " << fatherName[i] << endl;
				cout << "Email            : " << email[i] << endl;
				cout << "CNIC Registered  : " << CNIC[i] << endl;
				found = true;
				break;
			}
		}

		if (found == false) {
			cout << "No such record exists";
			return false;
		}

		if (found) {
			return true;
		}

	}

bool searchName() {

	string searchKeyword;
	bool found = false;

	cout << "\nEnter the First Name of the entry you want to inquire : ";
	cin >> searchKeyword;

	// searching animation
	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nSearching for the Name " << "'" << searchKeyword << "'" << " in our Database."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(350);
	system("Color 0F");
	//
	cout << "\nSearching Completed! \nSearch Results for Name '" << searchKeyword << "' : \n\n";

	for (int i = 0; i < 99; i++) {
		if (searchKeyword == firstName[i]) {
			system("CLS");
			cout << "Record Found!\n";
			cout << "Information of the person having name '" << searchKeyword << "' is shown below.\n\n";
			cout << "Status           : ADMISSION IN PROCESS\n";
			cout << "Applied For      : " << applied[i] << endl;
			cout << "Roll             : " << rollNumber[i] << endl;
			cout << "Name             : " << firstName[i] << " " << lastName[i] << endl;
			cout << "Father Name      : " << fatherName[i] << endl;
			cout << "Email            : " << email[i] << endl;
			cout << "CNIC Registered  : " << CNIC[i] << endl;
			found = true;
			break;
		}
	}
	system("CLS");
	if (found == false) {
		cout << "Searching Completed! \nSearch Results : \n\n";
		cout << "No such record exists.";
		return false;
	}

	if (found == true) {

		return true;
	}
	

}


bool searchPhone() {

	string searchKeyword;
	bool found = false;

	cout << "\nEnter the Phone Number of the entry you want to inquire : ";
	cin >> searchKeyword;

	// searching animation
	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nSearching for the Phone Number " << "'" << searchKeyword << "'" << " in our Database."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(350);
	system("Color 0F");
	//
	cout << "\nSearching Completed! \nSearch Results for Phone Number '" << searchKeyword << "' : \n\n";

	for (int i = 0; i < 99; i++) {
		if (searchKeyword == phone[i]) {
			system("CLS");
			cout << "Record Found!\n";
			cout << "Information of the person having Phone Number '" << searchKeyword << "' is shown below.\n\n";
			cout << "Status           : ADMISSION IN PROCESS\n";
			cout << "Applied For      : " << applied[i] << " in class " << s_class[i] << "\n";
			cout << "Roll             : " << rollNumber[i] << endl;
			cout << "Name             : " << firstName[i] << " " << lastName[i] << endl;
			cout << "Father Name      : " << fatherName[i] << endl;
			cout << "Email            : " << email[i] << endl;
			cout << "CNIC Registered  : " << CNIC[i] << endl;
			found = true;
			break;
		}
	}

	if (found == false) {
		cout << "Searching Completed! \nSearch Results : \n\n";
		cout << "No such record exists.";
		return false;
	}

	if (found == true) {
		return true;
	}
}

bool searchEmail() {

	string searchKeyword;
	bool found = false;

	cout << "\nEnter the Email the entry you want to inquire : ";
	cin >> searchKeyword;

	// searching animation
	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nSearching for the Email " << "'" << searchKeyword << "'" << " in our Database."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(350);
	system("Color 0F");
	//
	cout << "\nSearching Completed! \nSearch Results for Email '" << searchKeyword << "' : \n\n";

	for (int i = 0; i < 99; i++) {
		if (searchKeyword == email[i]) {
			system("CLS");
			cout << "Record Found!\n";
			cout << "Information of the person having email '" << searchKeyword << "' is shown below.\n\n";
			cout << "Status           : ADMISSION IN PROCESS\n";
			cout << "Applied For      : " << applied[i] << " in class " << s_class[i] << "\n";
			cout << "Roll             : " << rollNumber[i] << endl;
			cout << "Name             : " << firstName[i] << " " << lastName[i] << endl;
			cout << "Email            : " << email[i] << endl;
			cout << "Father Name      : " << fatherName[i] << endl;
			cout << "CNIC Registered  : " << CNIC[i] << endl;
			found = true;
			break;
		}
	}

	if (found == false) {
		cout << "Searching Completed! \nSearch Results : \n\n";
		cout << "No such record exists.";
		return false;
	}

	if (found == true) {
		return true;
	}
}



bool searchCNIC() {

	string searchKeyword;
	bool found = false;

	cout << "\nEnter the CNIC of the entry you want to inquire : ";
	cin >> searchKeyword;

	// searching animation
	system("Color 02");
	system("CLS");
	cout << "\n\n\n\n\n\nSearching for the CNIC " << "'" << searchKeyword << "'" << " in our Database."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(450); cout << "."; Sleep(350);
	system("Color 0F");
	//
	cout << "\nSearching Completed! \nSearch Results for CNIC '" << searchKeyword << "' : \n\n";

	for (int i = 0; i < 99; i++) {
		if (searchKeyword == CNIC[i]) {
			system("CLS"); 
			cout << "Record Found!\n";
			cout << "Information of the person having email '" << searchKeyword << "' is shown below.\n\n";
			cout << "Status           : ADMISSION IN PROCESS\n";
			cout << "Applied For      : " << applied[i] << " in class " << s_class[i] << "\n";
			cout << "Roll             : " << rollNumber[i] << endl;
			cout << "Name             : " << firstName[i] << " " << lastName[i] << endl;
			cout << "Email            : " << email[i] << endl;
			cout << "Father Name      : " << fatherName[i] << endl;
			cout << "CNIC Registered  : " << CNIC[i] << endl;
			found = true;
			break;
		}
	}

	if (found == false) {
		cout << "Searching Completed! \nSearch Results : \n\n";
		cout << "No such record exists.";
		return false;
	}

	if (found == true) {
		return true;
	}
}

void aboutUs() {
	system("Color 74");
	cout << "\n\n\t\t\t\t\t\t________\n";
	cout <<     "\t\t\t\t\t\tABOUT US\n";
	cout <<     "\t\t\t\t\t\t________\n\n\n";

	cout << " Hawk house values its heritage while it continues to reinvent its educational approach to meet the needs of \nthe future. We believe that modern methods and attitudes can enable students to achieve their fullest potential";

	cout << "with the world and the needs of the community changing at an ever - increasing rate, Hark house endeavours to\nbe open to change, to adapt, innovate and keep pace with the goals that society expects.At Hawk house, our aim and belief is that through effort and hard work, students will be able to step confidently into the highly\ncompetitive real World. We ensure that they are equipped with the ability to make mature and well - informed \njudgements based on a clear understanding of essential principles, concepts and moral values.This, we believe, is the best contribution we can make towards their development as productive members of society and, through\nthem, to the country and the wider world." ;
	cout << "\n\n> Back to Main Menu";
	cin.ignore();
	cin.get();
}
