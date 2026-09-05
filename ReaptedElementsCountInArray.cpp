#include <iostream>
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
void ReadArray(int array[10], int number){
    
    for (int i = 0; i < number; i++){
        cout << "enter element [" << i+1 << "] : " << endl;
        cin >> array[i];   
    }
}
void Printarrays(int array[10],int number){
    for (int i = 0; i < number; i++){
        cout  << array[i] << " "; 
    }
}
int CheckNumber(int array[10], int number, int NumberToCheck){
    int counter =0;
    
        for(int j = 0; j < number; j++){
            if(array[j] == NumberToCheck){
                counter += 1;
            }
        }
    
    return counter;
} 

int main (){
    int array[10] , number;
    number= ReadPositiveNumber("enter your number: ");
    ReadArray(array, number);
    int NumberToCheck = ReadPositiveNumber("enter number you want to check: ");
    cout << " original array: ";
    Printarrays(array, number);
    cout << endl<<NumberToCheck << " is repeated " << CheckNumber(array, number, NumberToCheck) << " Times";
    
    return 0;
    
} 
