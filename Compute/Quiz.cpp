#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

#include "Quiz.h"
#include "QuizResult.h"

using namespace std;

  Quiz::Quiz(string test){
    this->name=test;
    this->lowest_percent=400;
    this->highest_percent=-1;
    this->total_score=0;
    this->counter=0;
    this->percent=0;
    this->average=0;
    this->rcounter=0;
  }

  Quiz::~Quiz(){

  }

  ostream& operator<<(ostream& output, const Quiz& t)
  {
    output << t.name << endl;
    return output;
  }

  bool Quiz::add(QuizResult& t){
      //cout << "AAAAAAAAA" << endl;
    if (name.compare(t.test)==0){
        //cout << "YOU ARE IN THE ADD METHOD FOR: " << t.test << "   and " << t.name << endl;
        rcounter++;
        float percent = (t.score/t.total)*100;
            total_score+=percent;
            average=total_score/rcounter;

        //cout << "PERCENT: " << percent << " Individual Score:" << t.score << " out of this total:" << t.total << " The total score for this test so far: " << total_score << "  How many people have taken this test: " <<rcounter << "  Average for the test:  " << average << endl;

        if(highest_percent < percent){
            highest_percent = percent;
            cout << "New Highest Percent for " << t.test << ":   " << setprecision(3) << highest_percent << "%" << endl;
        }

        if(lowest_percent > percent){
            lowest_percent = percent;
            cout << "New Lowest Percent for " << t.test << ":    " << setprecision(3) << lowest_percent << "%" << endl;
        }

        cout << "New average for " << t.test << ":  " << setprecision(3) << average << "%" << endl;

        return true;
    }else{
        return false;
    }
}
