#include "classroom.h"
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

//initialize our static variable

// Empty Class
classroom::classroom() {
    classname = "";
    StudentsAlreadyAdded = 0;
    student StudentArray[24];
}

//classroom::classroom(string _classname, int _StudentsAlreadyAdded, student _StudentArray[24]) {
//    classname = "";
//    StudentsAlreadyAdded = _StudentsAlreadyAdded;
//    for (int i = 0; i < 24 ; i++)
//	{
//        StudentArray[i] = _StudentArray[i];
//
//	}
//}

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
void classroom::printstudentarray() {
    cout << left << setw(15) << "Last Name" << setw(15) << "First Name" << setw(15) << "SSN" << right << setw(15) << "Score1" << setw(15) << "Score2"<< setw(15) << "Score3"<< setw(15) << "Score4" << setw(15) << "Average" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < StudentsAlreadyAdded ; i++)
	{
		StudentArray[i].displaystudentInfo();
	}
}

// Other functions
void classroom::PopulateStudentArray() {
    // read from studentInfo
    string fnametemp;
	string lnametemp;
	string ssntemp;
    string rangeLine;
	double exam1temp;
	double exam2temp;
	double exam3temp;
	double exam4temp;
	ifstream inFile("studentInfo.txt");
	while (!inFile.eof()) // For each line in the file
	{
        // Populate the students array 
        
        inFile >> lnametemp >> fnametemp >> ssntemp >> exam1temp >> exam2temp >> exam3temp >> exam4temp;
        StudentArray[StudentsAlreadyAdded].setname(lnametemp);
        StudentArray[StudentsAlreadyAdded].setfname(fnametemp);
        StudentArray[StudentsAlreadyAdded].setssn(ssntemp);
        StudentArray[StudentsAlreadyAdded].setexamScores(0,exam1temp);
        StudentArray[StudentsAlreadyAdded].setexamScores(1,exam2temp);
        StudentArray[StudentsAlreadyAdded].setexamScores(2,exam3temp);
        StudentArray[StudentsAlreadyAdded].setexamScores(3,exam4temp);
        StudentArray[StudentsAlreadyAdded].setexamAverage();
        StudentsAlreadyAdded++;
	}
	// close the data file
	inFile.close();
}
double classroom::AverageScoreOfAllStudents() {
    // Return average of all grades from the students
    double total = 0.0;
    for (int i = 0; i < StudentsAlreadyAdded ; i++)
	{
		total += StudentArray[i].getAverage();
	}
    return total/StudentsAlreadyAdded;
}
void classroom::sortStudentsAverage() {
    // Sorts all students in StudentArray by average score
	
	student temp;
    for (int i = 0; i < StudentsAlreadyAdded; i++)
    {
        for (int j = i + 1; j < StudentsAlreadyAdded; j++)
        {
            if (StudentArray[i].getAverage() > StudentArray[j].getAverage())
            {
                temp = StudentArray[i];
                StudentArray[i] = StudentArray[j];
                StudentArray[j] = temp;
            }
        }
    }

}
void classroom::sortStudentsName() {
    // Sorts all students in StudentArray by average score
	
	student temp;
    for (int i = 0; i < StudentsAlreadyAdded; i++)
    {
        for (int j = i + 1; j < StudentsAlreadyAdded; j++)
        {
            if (StudentArray[i].getlname().compare(StudentArray[j].getlname()) > 0)
            {
                temp = StudentArray[i];
                StudentArray[i] = StudentArray[j];
                StudentArray[j] = temp;
            }
        }
    }

}