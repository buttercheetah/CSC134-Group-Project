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

// setters
void classroom::setclassname(string _classname) {
    classname = _classname;
}
void classroom::setStudentsAlreadyAdded(int _StudentsAlreadyAdded) {
    StudentsAlreadyAdded = _StudentsAlreadyAdded;
}
void classroom::setStudentArray(student students[], int _numStudent) {
    for (int i = 0; i < _numStudent ; i++)
	{
		StudentArray[i] = students[i];
	}
    StudentsAlreadyAdded = _numStudent;
}

// getters
student* classroom::getStudentArray() {
    return StudentArray;
}
string classroom::getClassName() {
    return classname;
}
int classroom::getStudentsAlreadyAdded() {
    return StudentsAlreadyAdded;
}


void classroom::printstudentarray() {
    // print header
    cout << left << setw(15) << "Last Name" << setw(15) << "First Name" << setw(15) << "SSN" << right << setw(15) << "Score1" << setw(15) << "Score2"<< setw(15) << "Score3"<< setw(15) << "Score4" << setw(15) << "Average" << endl;
    // print header seperator
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    // print individual student data using its own function.
    for (int i = 0; i < StudentsAlreadyAdded ; i++)
	{
		StudentArray[i].displaystudentInfo();
	}
}

// Other functions
void classroom::PopulateStudentArray(string _filename) {
    // read from filename
    string fnametemp;
	string lnametemp;
	string ssntemp;
    string rangeLine;
	double exam1temp;
	double exam2temp;
	double exam3temp;
	double exam4temp;
	ifstream inFile(_filename);
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
    // Sorts all students in StudentArray by last name
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