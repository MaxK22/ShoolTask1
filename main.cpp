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

    }
   return 0;
}
