#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void Readfile(string name)
{
    fstream Myfile;
    Myfile.open(name, ios::out);
    if(Myfile.is_open())
    {
        Myfile << "ali\n";
        Myfile << "i love programming!\n"; 
        Myfile << "ali\n";
        Myfile << "mawada\n";
        Myfile.close();
    }
}
void LoadDataFromFileTovector(string name, vector <string> &vFilecontent)
{
    fstream Myfile;
    Readfile("Myfile.txt");
    Myfile.open(name, ios::in);
    if(Myfile.is_open())
    {
        
        string line;
        while(getline(Myfile, line))
        {
            vFilecontent.push_back(line);
        }
         
        Myfile.close();
    }
}
void SaveVectorTofile(string name, vector <string> vFilecontent)
{
    fstream Myfile;
    Myfile.open(name, ios::out);
    if(Myfile.is_open())
    {
        
        for(string &line: vFilecontent)
        {
            if(line != "")
            {
                Myfile << line << endl;
            }
        }
        Myfile.close();
    }
}
void DeleteRecord(string name, string record)
{
    vector <string> vFilecontent;
    
    LoadDataFromFileTovector(name, vFilecontent);
    for(string &line : vFilecontent)
    {
        if(line == record)
        {
            line = "";
        }
    }
    SaveVectorTofile(name, vFilecontent);   
}

void PrintFile(string name)
{
    fstream Myfile;
    Myfile.open(name, ios::in);
    if(Myfile.is_open())
    {
        
        string line;
        while(getline(Myfile, line))
        {
            cout << line << endl;
        }
         
        Myfile.close();
    }
}

int main()
{
  
    vector <string> vFilecontent;
    DeleteRecord("Myfile.txt", "ali");
    PrintFile("Myfile.txt");
    
    
    return 0;
}

