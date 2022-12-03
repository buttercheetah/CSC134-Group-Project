/*
    Header files - has the detailed specifications of its related class
*/
#include "student.h"
#ifndef CLASSROOM_H
#define CLASSROOM_H

#include<string>
using namespace std;

class classroom {
    public:
        // constructers
        classroom(); // null
        // Cant figure out how to use an array - Noah Liby
        classroom(string _classname, int _StudentsAlreadyAdded, student _StudentArray[24]);

        //setters
        void setclassname(string _classname);
        void setStudentsAlreadyAdded(int _StudentsAlreadyAdded);
        void setStudentArray(string _StudentArray); // There shoulld never be a time in which we call this

        //getters
        string getClassName();
        student getStudentArray();
        int getStudentsAlreadyAdded();

        // other functions
        void PopulateStudentArray();
        double AverageScoreOfAllStudents();
        void sortStudentsAverage();
        void sortStudentsName();
        void printstudentarray();


    private:
        string classname;
        int StudentsAlreadyAdded;
        student StudentArray[24];
};
#endif