#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;




int main()
{
    ofstream output("C:\\Users\\Ali Abdulla\\Desktop\\Tests.txt", ios::ate | ios::app );

    if (!output) {
    cerr << "error opening file " << errno << " " << strerror(errno) << endl;
    exit(EXIT_FAILURE);
}
    string name;
    string test;
    int total;
    float score;

    cout << "ENTER STUDENT'S NAME: ";
    cin >> name;
    cout << "ENTER NAME OF TEST: ";
    cin >> test;
    cout << "ENTER TOTAL POSSIBLE MARK (TOTAL): ";
    cin >> total;
    cout << "ENTER ACTUAL MARK (SCORE): ";
    cin >> score;

    cout << "Your response has been recorded." << endl;

    output << name << "  " << test << "    " << total << "   " << score <<  endl;
    output.close();


    ifstream input("C:\\Users\\Ali Abdulla\\Desktop\\Tests.txt", ios::in );

    string buffer;
    while(input >> buffer) {
    //cout << buffer << "     ";
}

    input.clear();
    input.seekg(0, input.beg); // seekp is for PUT to file, seekg is for GET

    return 0;
}
