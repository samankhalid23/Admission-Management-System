#pragma once
#include <iostream>

using namespace std;

// ALL THE DATA WILL BE STORED IN THIS HEADER AND THIS HEADER HAS TO BE ACCESSED EVERYWHERE WE'RE USING THIS DATABASE

//PERSONAL INFO
string firstName[99]; string lastName[99], phone[99];
string rollNumber[99] = {"99801","999802","999803","999804", "999805", "999806", "999807", "999808", "999809" , "999810" ,"999811"  ,"999812"  "999813" ,"999814" ,"999815" ,"999816" ,"999817" ,"999818" ,"999819", "999820",  "999821",  "999822", "999823", "999824",  "999825",  "999826",  "999827",  "999828",  "999829",  "999830",  "999831",  "999832",  "999833",  "999834" };
string city[99],  DOB[99], CNIC[99], email[99];
int age[99];

//FAMILY INFO
string fatherName[99], mothername[99];
string occupation[99];
string gender[99], status[99], cellno[99], cellno1[99], bloodgroup[99];
string income[99];
string m_cellno[99], m_cellno1[99], m_occupation[99], m_income[99], m_email[99];
string address[99],   mark[99];
string religion[99], nationality[99], province[99], domicile[99];
string sibOccupation[99], sibName[99];
string fEmail[99];
int per[99];

// DATA OF SCHOOL FORM

string s_lastInstitute[99];
int s_class[99];                      // Class in which he's taking admission
int sLastClass[99];
int sLastInst[99];
float s_preMarks[99];                 // Obtained marks in previous Class
float s_preTMarks[99];                // Total Marks in previous Class



// APPLIED IN
string applied[99];
