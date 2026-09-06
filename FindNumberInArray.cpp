#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string massage){
    int number;
    do
    {
        cout << massage;
        cin >> number;
    } while (number <= 0);
    return number;   
}
int RandomNumber(int from, int to){
    return rand()% (to - from +1) +from;
}
void FillArray(int array[100],int number){
    
    for (int i = 0; i < number; i++){
       array[i] = RandomNumber(1,100);
    }

}

void PrintArray(int array[100], int number){
    
    for (int i = 0; i < number; i++){
       cout << array[i] << " ";
    }cout << endl;
}
bool CheckIfTheNumberIsFound(int array[100], int number, int NumberWantsToCheck){
    for (int i = 0; i < number; i++){
        if(array[i] == NumberWantsToCheck){
            return true;
        }
    }return false;
}

int main (){
    srand((unsigned)time(NULL));
    int array[100] , number;
    number= ReadPositiveNumber("enter your number: ");
    
    FillArray(array, number);

    cout <<endl << "Elements Of Array : "<< endl;
    PrintArray(array, number);

    int NumberWantsToCheck = ReadPositiveNumber("enter the number you want to check: ");
    cout <<"Number you are looking for: "<< NumberWantsToCheck<< endl;

    if(CheckIfTheNumberIsFound(array, number, NumberWantsToCheck)){
            cout <<"Yes, the number is found :-) ";
       }else{
            cout <<"no, The number is not found :-(" << endl;
       }
    
    
    return 0;
    
} 
