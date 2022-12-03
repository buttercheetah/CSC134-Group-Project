/*
    Jedidiah Lee, Noah Liby, and Ian MacAlalag
	Final Group Project
	CSC-134
*/
#include "student.h"
#include "classroom.h"
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

int main()
{
	classroom classr;
	// first section
	classr.PopulateStudentArray("studentInfo.txt");
	classr.printstudentarray();
	// second section
	classr.sortStudentsAverage();
	cout <<endl<< "Sort students by average score:" << endl;
	classr.printstudentarray();
	// third section
	classr.sortStudentsName();
	cout <<endl<< "Sort students by last name:" << endl;
	classr.printstudentarray();
	// final numbers
	cout << endl << "Total students in this class: " << classr.getStudentsAlreadyAdded() << endl << endl << "The average score of all students is: " << classr.AverageScoreOfAllStudents() << endl;
	return 0;
}