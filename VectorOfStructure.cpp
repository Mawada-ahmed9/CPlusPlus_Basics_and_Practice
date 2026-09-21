#include <iostream>
#include <vector>
using namespace std;

struct stEmployee{
    string Fname, Lname;
    int salary;
};
void Readvector(vector <stEmployee> & vEmployees)
{
    int number;
    string Again;
    do
    {
        stEmployee temp;
        cout <<"enter the frist name";
        cin>>temp.Fname;
        cout <<"enter the second name";
        cin>>temp.Lname;
        cout <<"enter the salary: ";
        cin>>temp.salary;
        vEmployees.push_back(temp);
        cout << "Enter onther employee? y or n: ";
        cin >> Again;
    } while (Again == "y" || Again == "Y");
    
}
void Printvector(vector <stEmployee> &vEmployees)
{
    for(stEmployee &employee: vEmployees)
    {
        cout << "Frist name: "<< employee.Fname << endl;
        cout << "Last name : "<< employee.Lname << endl;
        cout << "Salary    : "<< employee.salary << endl << endl;
    }
}

int main(){
    vector <stEmployee> vEmployees;
    Readvector(vEmployees);
    Printvector(vEmployees);

return 0;
}
