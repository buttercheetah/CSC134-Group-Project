#include "student.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable
int student::empID = 0;

student::student() {
    fname = "";
    lname = "";
    ssn = "";
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = 0.0;

	}
    examAverage = 0.0;
}

student::student(string _fname, string _lname, string _ssn, double _examScores[4], double _examAverage) {
    fname = _fname;
    lname = _lname;
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = _examScores[i];

	}
    ssn = _ssn;
    examAverage=_examAverage;
    empID++;
}

// setters
void student::setname(string _fname) {
    fname = _fname;
}
void student::setlname(string _lname) {
    lname = _lname;
}
void student::setssn(string _ssn) {
    ssn = _ssn;
}
void student::setexamScores(int index, double _examScores) {
    examScores[index] = _examScores;
}
void student::setexamAverage() {
    double total = 0.0;
    for (int i = 0; i < 4 ; i++)
	{
		total += examScores[i];
	}
    examAverage = total/4;
}

// getters
string student::getfname() {
    return fname;
}
string student::getlname() {
    return lname;
}
double student::getAverage() {
    return examAverage;
}
//double student::getexamScores() {
//    return examScores;
//}
int student::getEmpID() {
    return empID;
}

//void student::determinNewexamScores() {
//    examScores = examScores + (examScores * .03);
//}
void student::displaystudentInfo() {
    cout << left << setw(15) << fname << setw(15) << lname << setw(15) << ssn << setw(15) << examScores[0] << setw(15) << examScores[1]<< setw(15) << examScores[2]<< setw(15) << examScores[3] << setw(15) << examAverage << setw(15) << empID << endl;
}
// 