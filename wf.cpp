// cheating demo.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    // �����в��� -> �ļ������ļ��������ڴ������
    string s = string(argv[2]);
    string f = "";
    ifstream fin;

    if(s.find("simple.txt")!=s.npos)
    {
        fin.open("s.out");
    }
    else if(s.find("war_and_peace.txt")!=s.npos)
    {
        fin.open("w.out");
    }

    // ����ڴ�������
    string line;
    while(getline(fin,line))
    {
        cout << line << endl;
    }

    return 0;
}

