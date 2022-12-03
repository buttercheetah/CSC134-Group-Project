/*
    Header files - has the detailed specifications of its related class
*/
#include "student.h"
#ifndef CLASSROOM_H
#define CLASSROOM_H

#include<string>
using namespace std;

class classroom {
    // public class
    public:
        // constructers
        classroom(); // null
        classroom(string _classname, int _StudentsAlreadyAdded, student _StudentArray[24]);

        //setters
        void setclassname(string _classname);
        void setStudentsAlreadyAdded(int _StudentsAlreadyAdded);
        void setStudentArray(student students[], int _numStudent);

        //getters
        string getClassName();
        student* getStudentArray();
        int getStudentsAlreadyAdded();

        // other functions
        void PopulateStudentArray(string _filename);
        double AverageScoreOfAllStudents();
        void sortStudentsAverage();
        void sortStudentsName();
        void printstudentarray();

    // private class
    private:
        string classname;
        int StudentsAlreadyAdded;
        student StudentArray[24];
};
#endif