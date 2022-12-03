#include "student.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable
int student::studentNumber = 0;

student::student() {
    lname = "";
    fname = "";
    ssn = "";
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = 0.0;

	}
    examAverage = 0.0;
    studentNumber++;
}

student::student(string _lname, string _fname, string _ssn, double _examScores[4], double _examAverage) {
    lname = _lname;
    fname = _fname;
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = _examScores[i];

	}
    ssn = _ssn;
    examAverage=_examAverage;
    studentNumber++;
}

// setters
void student::setname(string _lname) {
    lname = _lname;
}
void student::setfname(string _fname) {
    fname = _fname;
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
string student::getssn() {
    return ssn;
}
double student::getAverage() {
    return examAverage;
}
//double student::getexamScores() {
//    return examScores;
//}
int student::getstudentNumber() {
    return studentNumber;
}

//void student::determinNewexamScores() {
//    examScores = examScores + (examScores * .03);
//}
void student::displaystudentInfo() {
    cout << fixed << showpoint << setprecision(1) << left << setw(15) << lname << setw(15) << fname << setw(15) << ssn << right << setw(15) << examScores[0] << setw(15) << examScores[1]<< setw(15) << examScores[2]<< setw(15) << examScores[3] << setw(15) << examAverage << endl;
}