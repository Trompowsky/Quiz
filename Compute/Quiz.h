#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "QuizResult.h"

using namespace std;

class Quiz{
public:
    friend ostream& operator<<(ostream& output, const Quiz& t);
    Quiz(string test);
    ~Quiz();
    bool add(QuizResult& t);
    int Average();
    int counter;
    float percent;
    float lowest_percent;
    float highest_percent;
    string name;
    float total_score;
    float average;
    float rcounter;
};


#endif // QUIZ_H_INCLUDED
