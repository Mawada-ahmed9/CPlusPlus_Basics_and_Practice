#include <iostream>
using namespace std;

int RandomNumbers(int from, int to)
{
    return rand()% (to - from + 1) + from;
}
void FillMatrix(int array[3][3], int row, int col)
{
    int k =1;
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            array[i][j] = RandomNumbers(1,10);   
        }
    }
}

void PrintNumbers(string massage, int array[3][3], int row, int col)
{
    
    cout << massage;
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            printf("%0*d  ", 2, array[i][j]);
        }cout << endl;
    }
}
bool IsNumberInMatrix(int array[3][3], int num, int row, int col)
{
    for(int i =0; i < row; i ++)
    {
        for(int j = 0; j < col; j++){
            if(array[i][j] == num){
                return true;
            }
        }
    }return false;   
}
void Intersected(int array[3][3], int array2[3][3], int row, int col)
{
    for(int i =0; i < row; i ++)
    {
        for(int j = 0; j < col; j++){
            if(IsNumberInMatrix(array2, array[i][j], 3, 3))
            {
                cout << array[i][j] << "   ";
            }
        }
    }cout << endl;
}
int main(){
    srand(time(0));

    int array[3][3], array2[3][3], num;

    FillMatrix(array, 3, 3);
    PrintNumbers("The following is the first 3*3 matrix: \n", array, 3, 3);

    FillMatrix(array2, 3, 3);
    PrintNumbers("The following is the second 3*3 matrix: \n", array2, 3, 3);

    Intersected(array, array2, 3, 3);
return 0;
}
