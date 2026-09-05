#include <iostream>
using namespace std;
enum endays{sun = 1, mon, tue, wen, thr, fri, str};
int ReadNumber(){
    int n;
    do {
    cout <<"enter n please: ";
    cin>> n;
    }while(n <=0 || n > 7);
    return n;
}
endays check(int n){
    return endays(n);
}
void PrintDays(endays myday){
    switch (myday)
    {
    case endays::sun:
        cout << "It is sunday. ";
        break;
    case endays::mon:
        cout << "It is monday. ";
        break;
    case endays::tue:
        cout << "It is tuesday. ";
        break;
    case endays::wen:
        cout << "It is wendsday. ";
        break;
    case endays::thr:
        cout << "It is thrasday. ";
        break;
    case endays::fri:
        cout << "It is friday. ";
        break;
    case endays::str:
        cout << "It is strday. ";
        break;
    default:
        cout << "wrong day";
        break;
    }
}
int main (){
    PrintDays(check(ReadNumber()));
return 0;
    
} 
