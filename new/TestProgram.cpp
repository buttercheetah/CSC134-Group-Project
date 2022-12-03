/*
    Jedidiah Lee, Noah Liby, and Ian MacAlalag
	Midterm Project
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
	classr.PopulateStudentArray();
	classr.printstudentarray();
	classr.sortStudentsAverage();
	cout <<endl<< "Sort students by average score:" << endl;
	classr.printstudentarray();
	classr.sortStudentsName();
	cout <<endl<< "Sort students by last name:" << endl;
	classr.printstudentarray();
	cout << endl << "Total students in this class: " << classr.getStudentsAlreadyAdded() << endl << endl << "The average score of all students is: " << classr.AverageScoreOfAllStudents() << endl;
	return 0;
}