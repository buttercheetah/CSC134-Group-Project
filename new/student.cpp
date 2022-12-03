#include "student.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable
int student::studentNumber = 0;

student::student() { // If no arguments are passed define them as nothing
    lname = ""; // Blank string as default
    fname = ""; // Blank string as default
    ssn = ""; // Blank string as default
    for (int i = 0; i < 4 ; i++) // Simple for loop to set all exam scores to zero
	{
        examScores[i] = 0.0;

	}
    examAverage = 0.0; // Since we are assuming all scores are zero, the average is zero
    studentNumber++; // increment student number by one
}

student::student(string _lname, string _fname, string _ssn, double* _examScores, double _examAverage) { // if data is passed, set them to the equivalent without the _
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
    for (int i = 0; i < 4 ; i++) // For every exam score, add it to total. then divide the total by 4 to get the average.
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
    setexamAverage();
    return examAverage;
}
double* student::getScores() {
    return examScores;
}
int student::getstudentNumber() {
    return studentNumber;
}
void student::displaystudentInfo() { // Displays student last name, first name, ssn, and scores
    cout << fixed << showpoint << setprecision(1) << left << setw(15) << lname << setw(15) << fname << setw(15) << ssn << right << setw(15) << examScores[0] << setw(15) << examScores[1]<< setw(15) << examScores[2]<< setw(15) << examScores[3] << setw(15) << examAverage << endl;
}