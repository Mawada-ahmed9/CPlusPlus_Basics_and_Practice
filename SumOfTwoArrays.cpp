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
    return rand()% (to - from +1) + from;
}
void FillArrayWithRandomNumbers(int array[100],int number){
    
    for (int i = 0; i < number; i++){
        array[i] =RandomNumber(1, 100);   
    }
}
void PrintArray(int array[100],int number){
    
    for (int i = 0; i < number; i++){
        cout << array[i]<< " " ;   
    }cout << endl;
}
void SumTwoArrays(int array[100], int arr2[100], int sumarrays[100], int number){
    
    for (int i = 0; i <number; i++){
        
        sumarrays[i] = array[i] + arr2[i];
        
    }
}
int main (){
    srand((unsigned)time(NULL));
    int arr[100] , number, arr2[100], sumarrays[100];
    number= ReadPositiveNumber("enter your number: ");

    FillArrayWithRandomNumbers(arr, number);
    FillArrayWithRandomNumbers(arr2, number);

    cout << "Elements of Array One: "<< endl;
    PrintArray(arr, number);
    
    cout <<endl << "Elements of Array Two: "<< endl;
    PrintArray(arr2, number);

    SumTwoArrays(arr, arr2, sumarrays, number);
    cout <<endl << "Sum of two Arrays: "<< endl;
    PrintArray(sumarrays, number);

    
    
    return 0;
    
}
