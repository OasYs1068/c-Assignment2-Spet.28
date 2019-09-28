#include <iostream>
#include "Professor.h"
#include "Student.h"
#include <cstdlib>
#include <ctime>

#define random(x,y) (rand()%(y-x+1)+x)
using namespace std;

int main() {
    Professor Byleth = Professor((char*)"Byleth",(char*)"Blue Lion");
    Student pupil[10] =
            {Student((char*)"Dimitri",(char*)"001"),
             Student((char*)"Bernadette",(char*)"002"),
             Student((char*)"Felix",(char*)"003"),
             Student((char*)"Mercedes",(char*)"004"),
             Student((char*)"Annette",(char*)"005"),
             Student((char*)"Dedue",(char*)"006"),
             Student((char*)"Sylvan",(char*)"007"),
             Student((char*)"Ingrid",(char*)"008"),
             Student((char*)"Ashe",(char*)"009"),
             Student((char*)"Ferdinand",(char*)"010")};
    srand((int)time(0));
    for(int i=0;i<10;i++){
        pupil[i].setScore(random(85,100));
    }


    Byleth.setNumOfStudents(10);
    cout << "Professor " << Byleth.getName() << " has " << Byleth.getNumOfStudents() << " students." << endl;
    Byleth.getInfo(pupil);
    cout << "The average score of the students is " << Byleth.getAverageScore(pupil) << endl;
    cout << "The highest score of the students is " << Byleth.getHighestScore(pupil) << endl;
    cout << "The lowest score of the students is " << Byleth.getLowestScore(pupil) << endl;
    return 0;
}