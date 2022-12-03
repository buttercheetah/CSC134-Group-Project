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
        student(string _lname, string _fname, string _ssn, double _examScores[4],double _examAverage);

        //setters and getters
        void setname(string _lname);
        string getlname();
        void setfname(string _fname);
        string getfname();
        void setexamScores(double _examScores);
        void setssn(string _ssn);
        void setexamScores(int index, double _examScores);
        void setexamAverage();
        double getexamScores();
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