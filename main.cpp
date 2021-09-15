#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    cout << "Questions or results? (enter r or q)";
    char ans;
    cin >> ans;
    if(ans == 'r')
    {


    ifstream input;
    input.open("text.txt");
   for (string line; getline(input, line); )
    {
        cout << line << endl;
    }
    input.close();
    }
    else{
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
    }
   return 0;
}
