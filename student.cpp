#include "student.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable
int student::studentNumber = 0;

// Empty Class
student::student() {
    fname = "";
    lname = "";
    ssn = "";
    double examScores[4];
}

student::student(string _fname, string _lname, string _ssn, double _examScores[4]) {
    fname = _fname;
    lname = _lname;
    ssn = _ssn;
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = _examScores[i];

	}
    studentNumber++;
}

// setters
void student::setfname(string _fname) {
    fname = _fname;
}
void student::setlname(string _lname) {
    lname = _lname;
}
void student::setssn(string _ssn) {
    ssn = _ssn;
}
void student::setexamScores(double _examScores[4]) {
    for (int i = 0; i < 4 ; i++)
	{
        examScores[i] = _examScores[i];

	}
}

// getters
// Dont know how i should return the exam scores
double student::getexamScores() {
    return 0;
}
int student::getstudentNumber() {
    return studentNumber;
}
string student::getfname() {
    return fname;
}
string student::getlname() {
    return lname;
}
string student::getssn() {
    return ssn;
}

// Other functions
void student::averageExamScore() {
    int total;
    for (int i = 0; i < 4 ; i++)
	{
        total += examScores[i];

	}
    cout << total/4;
}
void student::displayStudentInfo() {
    cout << left << setw(15) << fname << setw(15) << lname << setw(15) << ssn << setw(15) << examScores << setw(15) << studentNumber << endl;
}
