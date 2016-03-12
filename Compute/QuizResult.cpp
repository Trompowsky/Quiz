#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "QuizResult.h"
#include "Quiz.h"

using namespace std;

    QuizResult::QuizResult(){

    }

    QuizResult::~QuizResult(){

    }

 ostream& operator<<(ostream& output, const QuizResult& t)
  {
    output << t.name << "\t" << t.test << "\t" << t.total << "\t" << t.score << endl;
    return output;
  }

  istream& operator>>(istream& input, QuizResult& t)
  {
    input >> t.name >> t.test >> t.total >> t.score;
    return input;
  }
