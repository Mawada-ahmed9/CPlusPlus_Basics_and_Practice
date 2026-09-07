#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;
float Number(){
    float number;
    cout << "enter number: ";
    cin >> number;
    return number;
}
float myabs(float number){
    if(number >0){
        return number;
    }else{
        return number * -1;
    }
}
float myround(float number){
    float floatnumber = myabs(number) - (int)myabs(number);
    if(floatnumber >= 0.5){
        return (int)myabs(number) +1;
    }else{
        return (int)myabs(number);
    }
}
int main (){
    float number = Number();
    float Realnumber = number;
    if(Realnumber > 0){
        cout << "my round: " << myround(number) << endl;
    }else{
        cout << "my round: " << myround(number)* -1 << endl;
    }
    
    cout << "C++ round: " << round(number); 

    return 0;
    
} 
