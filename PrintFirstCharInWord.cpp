#include <iostream>
#include <string>
using namespace std;
string str(string expr)
{
    cout << "enter your string: ";
    getline(cin, expr);
    return expr;
}
void print(string str)
{
    bool isFirst = true;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ' && isFirst)
        {
            cout << str[i] <<endl ;
        }
        isFirst = (str[i] == ' '? true: false);
    }
}
int main(){
    //fib(10);
    string expr;
    print(str(expr));
return 0;
}
