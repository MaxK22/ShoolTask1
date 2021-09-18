#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool stringsorting(string a, string b)
{
    int y = (int)(a[0])-(int)(b[0]);
    bool answer;
    for(int i = 0; i+1 < a.size() && i+1 < b.size() && !y; i++)
    {
        y = (int)(a[i+1])-(int)(b[i+1]);
    }
    if(y < 0)
        answer = true;
    else
        answer = false;
    return answer;
}

int main()
{
    cout << "Questions or results? (enter r or q)";
    char ans;
    cin >> ans;
    if(ans == 'r')
    {
        ifstream input;
        vector< vector<string> > text;
        input.open("text.txt");
        int y = 0;
        map<string, bool> books;
        for (string line; getline(input, line); y++)
        {
            if(y%3 == 0)
            {
                vector<string> a;
                a.resize(3, "");
                text.push_back(a);
                text.back()[0] = line;
            }
            else{
                text.back()[y%3] = line;
            }
            if(y%3==2)
                books[text.back()[2]];
        }
                for(int i = 0; i + 1 < text.size(); ++i)
        {
        for(int j = 0; j+1 < text.size() - i; ++j)
        {
            if(stringsorting(text[j+1][0], text[j][0]))
            {
                swap(text[j+1], text[j]);
                //swap(text[j+1], text[j]);
            }
        }
        }
        for(int i = 0; i < text.size(); ++i)
        {
            cout << text[i][0] << ' ' << text[i][1] << ' ' << text[i][2] << endl;
        }
        cout << "Passed the survey: " << text.size() << endl << "Different books: " << books.size();

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
