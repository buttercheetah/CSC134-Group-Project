/*
    Header files - has the detailed specifications of its related class
*/

#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class student {
    public:
        // constructers
        student(); // null
        student(string _fname, string _lname, string _ssn, double _examScores);

        //setters and getters
        void setfname(string _fname);
        void setlname(string _lname);
        void setssn(string _ssn);
        void setexamScores(double _examScores);


        //getters
        double getexamScores();
        int getstudentNumber();
        string getfname();
        string getlname();
        string getssn();

        // other functions
        void averageExamScore();
        void displayStudentInfo();


    private:
        string fname;
        string lname;
        string ssn;
        double examScores;
        static int studentNumber;
};
#endif