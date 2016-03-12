#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "QuizResult.h"
#include "Quiz.h"

using namespace std;

int main()
{
    string name;
    string names[6];
    string rnames[100];

    string test;
    string tests[6];


    float score;
    float scores[6];

    float percentages[6];

    int total;
    float overallpercent[6];
    float counter[6];

    float personalpercentage[6];
    float teststaken[6];



    ifstream input("C:\\Users\\Ali Abdulla\\Desktop\\Tests.txt", ios::in );

    if (!input) {
    cerr << "error opening file " << errno << " " << strerror(errno) << endl;
    exit( EXIT_FAILURE );
}

    string buffer;

    QuizResult t;
    const int NUM_QUIZZES = 3;
    Quiz *apQuizzes[NUM_QUIZZES + 1] = {0};

    //int i =0;
    while (input >> t) {
       for (int i=0 ; i<NUM_QUIZZES; i++) {
        //while (i<NUM_QUIZZES){
            if (!apQuizzes[i]) {  // this position blank, so add this quiz name and add result
                apQuizzes[i] = new Quiz(t.test);
                apQuizzes[i]->add(t);
                cout << t << endl;
                break;

            }
            if ((*apQuizzes[i]).add(t)){
                cout << t << endl;
                break;
                } // found quiz, so done for this input
        //i++;
        //cout << "PAY ATTENTION:     " << t << endl;
        }
    }
    /*for (int z=0;z<NUM_QUIZZES-1;z++){
        cout << apQuizzes[z] << endl;
    if (apQuizzes[z]){
        Quiz a = *apQuizzes[z];
        cout << a << endl;
        }
    }*/
int z = 0;
    Quiz* pQuiz;
    while( (pQuiz = apQuizzes[z++]) ) { // increment i after assign
        cout << *pQuiz;
    }
}




//Quiz Result Name Quiz Total Score
// Quiz QuizName #Tests Score Hi and Lo
//StudentGrade Name Score Total

//Add Low, High, Average for Tests and Students
