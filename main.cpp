#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream input;
    input.open("text.txt");
   for (string line; getline(input, line); )
    {
        cout << line << endl;
    }
    input.close();





   return 0;
}
