#include <iostream>
#include <cstdlib>
#include <string>
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
    return rand()% (to - from +1) + from;
}
void FillArrayWithRandomNumbers(int array[100],int number){
    
    for (int i = 0; i < number; i++){
        array[i] =RandomNumber(1, 100);   
    }
}
void Printarrays(int array[100],int number){
    for (int i = 0; i < number; i++){
     cout << array[i] << " ";        
    }
}
int main (){
    srand((unsigned)time(NULL));
    int array[100] , number;
    number= ReadPositiveNumber("enter your number: ");
    FillArrayWithRandomNumbers(array, number);
    Printarrays(array, number);
    
    return 0;
    
} 
