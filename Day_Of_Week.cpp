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
    if (n == 1){
        return endays::sun;
    }else if (n == 2){
        return endays::mon;
    }else if (n == 3){
        return endays::tue;
    }else if (n == 4){
        return endays::wen;
    }else if (n == 5){
        return endays::thr;
    }else if (n == 6){
        return endays::fri;
    }else{
        return endays::str;
    }
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
