#ifndef QUIZRESULT_H_INCLUDED
#define QUIZRESULT_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
class QuizResult{

public:
    QuizResult();
    ~QuizResult();
    friend ostream& operator<<(ostream& output, const QuizResult& t);
    friend istream& operator>>(istream& input, QuizResult& t);
    string name;
    string test;
    int total;
    float score;
    float percent;
};


#endif // QUIZRESULT_H_INCLUDED
