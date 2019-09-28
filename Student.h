//
// Created by asus on 2019/9/26.
//

#ifndef CPPASSIGNMENT2_STUDENT_H
#define CPPASSIGNMENT2_STUDENT_H


class Student {
private:
    char* name;
    int score;
    char* ID;
    char* personalIntroduction;
public:
    Student(char*, char*);
    void setName(char*);
    void setScore(int);
    void setID(char*);
    char* getName();
    char* getID();
    int getScore();
};


#endif //CPPASSIGNMENT2_STUDENT_H
