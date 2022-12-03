/*
    Header files - has the detailed specifications of its related class
*/ 

#ifndef student_H
#define student_H

#include<string>
using namespace std;

class student {
    public:
        // constructers
        student(); // null
        student(string _lname, string _fname, string _ssn, double* _examScores,double _examAverage);

        //setters
        void setname(string _lname);
        void setfname(string _fname);
        void setexamScores(double _examScores);
        void setssn(string _ssn);
        void setexamScores(int index, double _examScores);
        void setexamAverage();

        //getters
        string getlname();
        string getfname();
        double* getScores();
        double getAverage();
        string getssn();
        int getstudentNumber();

        // other functions
        void determinNewexamScores();
        void displaystudentInfo();


    private:
        string lname;
        string ssn;
        string fname;
        double examScores[4];
        double examAverage;
        static int studentNumber;
};
#endif