#include <iostream>
using namespace std;
char findGrade(float point){
    char grade;
    if (point >= 90){
        grade = 'A';
    }
    else if (point > 75 && point <= 90){
        grade = 'B';
    }
    else if (point > 60 && point <= 75){
        grade = 'C';
    }
    else if (point > 45 && point <= 60){
        grade = 'D';
    }
    else if (point >= 0 && point <= 45){
        grade = 'F';
    }
    return grade;
}
