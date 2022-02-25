#pragma once
#ifndef FORMHEADER_H_
#define FORMHEADER_H_

//messages
void welcome();
void mainLoading();
void loading();
void isElig();
void isNotElig();
// 
//Eliglibility forms 
void schoolElig(int i);
void collegeElig(int n);
void universityElig(int n);

//
void mainMenu();
void formMenu();
void searchMenu();

void school_record(int n);
void college_record(int n);
void university_record(int n);

void studentInfo(int i);
void familyInfo(int i);
void decForm(int i);
void search_record();

void schoolInfo(int i);
void collegeInfo(int i);
void uniInfo(int i);


#endif