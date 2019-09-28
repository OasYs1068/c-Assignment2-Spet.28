//
// Created by asus on 2019/9/26.
//

#ifndef CPPASSIGNMENT2_PROFESSOR_H
#define CPPASSIGNMENT2_PROFESSOR_H


#include "Student.h"

class Professor {
private:
    char * name;
    int numOfStudents;
    char * school;
public:
    Professor(char* ,char* );
    void setName(char*);
    void setNumOfStudents(int);
    void setSchool(char*);
    char* getName();
    char* getSchool();
    int getNumOfStudents();
    double getAverageScore(Student*);
    int getLowestScore(Student*);
    int getHighestScore(Student*);
    void getInfo(Student*);
};


#endif //CPPASSIGNMENT2_PROFESSOR_H
