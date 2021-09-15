#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream qfile;
    ofstream output;
    qfile.open("questions.txt");
    output.open("text.txt", ofstream::app);
    string answer;
    for (string question; getline(qfile, question); )
    {
        cout << question << endl;
        cin >> answer;
        output << answer << endl;
    }
    qfile.close();
    output.close();









   return 0;
}
