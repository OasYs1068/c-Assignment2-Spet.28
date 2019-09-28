//
// Created by asus on 2019/9/26.
//

#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student(char* paraName, char* paraID) {
    name = (char*)malloc(sizeof(char)*30);
    strcpy(name,paraName);
    ID = (char*)malloc(sizeof(char)*30);
    strcpy(ID,paraID);
}
void Student::setID(char *paraID) {
    ID = (char*)malloc(sizeof(char)*30);
    strcpy(ID,paraID);
}
void Student::setScore(int paraScore) {
    score = paraScore;
}
void Student::setName(char * paraName) {
    name = (char*)malloc(sizeof(char)*30);
    strcpy(name,paraName);
}
char* Student::getName() {
    return name;
}
char* Student::getID() {
    return ID;
}
int Student::getScore() {
    return score;
}