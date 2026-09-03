#include <iostream>
using namespace std;
int ReadPositiveNumber( string massage){
     int number ;
    do
    {
        cout << massage;
        cin >> number;
    } while (number <0);
        
    return number;
}

void PrintResult(int number){
    
    for (int i = number; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << char(64+i);   
        }cout << endl;
    }
    
}
int main (){
    PrintResult(ReadPositiveNumber("enter your number: "));
return 0;
}
