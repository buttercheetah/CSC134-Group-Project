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
	cout << classr.AverageScoreOfAllStudents() << endl;
	classr.sortStudentsAverage();
	cout << endl;
	classr.printstudentarray();
	cout << endl;
	classr.sortStudentsName();
	classr.printstudentarray();
	//string fnametemp;
	//string lnametemp;
	//string ssntemp;
	//double exam1temp;
	//double exam2temp;
	//double exam3temp;
	//double exam4temp;
	//student teststudents[16];
//
	//
	//ifstream inFile("studentInfo.txt");
	//for (int i = 0; i < 16 ; i++)
	//{
	//	inFile >> fnametemp >> lnametemp >> ssntemp >> exam1temp >> exam2temp >> exam3temp >> exam4temp;
	//	teststudents[i].setname(fnametemp);
	//	teststudents[i].setlname(lnametemp);
	//	teststudents[i].setssn(ssntemp);
	//	teststudents[i].setexamScores(0,exam1temp);
	//	teststudents[i].setexamScores(1,exam2temp);
	//	teststudents[i].setexamScores(2,exam3temp);
	//	teststudents[i].setexamScores(3,exam4temp);
	//}
	//
//
	//while (inFile)
	//{
	//    inFile.ignore(100, '\n');
	//    // read next student record, write your code here
	//	
	//	
	//}
	//// close the data file, write your code here
	//inFile.close();

	
	return 0;
}