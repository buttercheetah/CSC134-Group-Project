#include "classroom.h"
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable
int student::studentNumber = 0;

// Empty Class
classroom::classroom() {
    classname = "";
    StudentsAlreadyAdded = 0;
    student StudentArray[24];
}

classroom::classroom(string _classname, int _StudentsAlreadyAdded, student _StudentArray[24]) {
    classname = "";
    StudentsAlreadyAdded = _StudentsAlreadyAdded;
    for (int i = 0; i < 24 ; i++)
	{
        StudentArray[i] = _StudentArray[i];

	}
}

// setters
void classroom::setclassname(string _classname) {
    classname = _classname;
}
void classroom::setStudentsAlreadyAdded(int _StudentsAlreadyAdded) {
    StudentsAlreadyAdded = _StudentsAlreadyAdded;
}
void classroom::setStudentArray(string _StudentArray) {
    // I dont know how to do this - Noah Liby
}

// getters
string classroom::getClassName() {
    return classname;
}
int classroom::getStudentsAlreadyAdded() {
    return StudentsAlreadyAdded;
}
// I dont know how to do this - Noah Liby
//student classroom::getstudentarray() {
//    return StudentArray;
//}

// Other functions
void classroom::PopulateStudentArray() {
    // read from studentInfo
	ifstream inFile("studentInfo.txt");
	while (inFile) // For each line in the file
	{
        // Populate the students array 
	}
	// close the data file
	inFile.close();
}
void classroom::AverageScoreOfAllStudents() {
    // Return average of all grades from the students
    // I dont know how to implement this yet - Noah Liby
}
void classroom::sortStudents() {
    // Sorts all students in StudentArray by average score
    // I dont know how to implement this yet - Noah Liby
}
