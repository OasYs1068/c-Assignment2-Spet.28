//
// Created by asus on 2019/9/26.
//
#include <iostream>
#include <cstring>
#include "Professor.h"
using namespace std;

Professor::Professor(char* paraName, char* paraSchool){
    name = (char*)malloc(sizeof(char)*30);
    strcpy(name,paraName);
    school = (char*)malloc(sizeof(char)*30);
    strcpy(school,paraSchool);
}

void Professor::setName(char * paraName) {
    name = (char*)malloc(sizeof(char)*30);
    strcpy(name,paraName);
}

void Professor::setNumOfStudents(int paraNum) {
    numOfStudents = paraNum;
}

void Professor::setSchool(char * paraSchool) {
    school = (char*)malloc(sizeof(char)*30);
    strcpy(school,paraSchool);
}

char * Professor::getName() {
    return name;
}

int Professor::getNumOfStudents() {
    return numOfStudents;
}

char * Professor::getSchool() {
    return school;
}

double Professor::getAverageScore(Student * pupil) {
    int i = 0;
    int score = pupil[0].getScore();
    while(i<=9){
        score += pupil[i].getScore();
        ++i;
    }
    return score/(i+1);
}

int Professor::getHighestScore(Student *pupil) {
    int i = 0;
    int maxScore = pupil[0].getScore();
    while(i<=9){
        if(pupil[i].getScore()>=maxScore){
            maxScore = pupil[i].getScore();
        }
        ++i;
    }
    return maxScore;
}

int Professor::getLowestScore(Student *pupil) {
    int i = 0;
    int minScore = pupil[0].getScore();
    while(i<=9){
        if(pupil[i].getScore()<=minScore){
            minScore = pupil[i].getScore();
        }
        ++i;
    }
    return minScore;
}

void Professor::getInfo(Student *pupil) {
    int i = 0;
    while(i<=9){
        cout << "Student " << i+1 << " 's ID is " << pupil[i].getID()
            << "\n" << "Student " << i+1 << " 's name is "<< pupil[i].getName()
            << "\n" << "Student " << i+1 << " 's score is "<< pupil[i].getScore() << endl;
        cout << "\n" << endl;
        ++i;
    }
}