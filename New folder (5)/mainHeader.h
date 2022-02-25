#pragma once
//#ifndef "MAINHEADER_H_"
//#define "MAINHEADER_H_"

//Animations
void welcome();
void mainLoading();
void loading();
void isElig();
void isNElig();
void redirectForm();
void checkElig();
void welcomeR();
void decAnim();
void savingInfo();


//Eligibility forms 
int schoolElig(int i);
int collegeElig(int n);
int universityElig(int n);

// school, college, university
void formMenu();

void school_record(int n);
void college_record(int n);
void university_record(int n);

// evaluating info
void studentInfo(int i);
void familyInfo(int i);
void decForm(int i);

// complete search function
void search();


// Search Functions
bool searchRoll();
bool searchName();
bool searchPhone();
bool searchEmail();
bool searchCNIC();

// misc functions
float percentage(double a, double b);



// Eligibility Checker
void eligC();




// menus
int mmainMenu();
void searchAgain();
int college();
int whichElig();
int changeInfo();
int toChangee();

int decLast();
void submitted();
void aboutUs();
