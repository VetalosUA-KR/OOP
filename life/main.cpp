#include <iostream>
#include <time.h>

#define SIZE 7

using namespace std;

/// Переписываем данные из одного массива в другой
void copyArray(int generalArray[][SIZE], int helpArray[][SIZE], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            generalArray[i][j] = helpArray[i][j];
        }
    }
}

/// Создание двумерного массива
void createArray(int arr[][SIZE], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }
}
/// Вывод на экран
void printArr(int arr[][SIZE], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout<<arr[i][j];
            if(j < size-1) cout<<" ";
        }
        cout<<endl;
    }
}
/// В рандомные ячейки записываем 1
void randGreed(int arr[][SIZE], int size)
{
    for(int i = 0; i < size*size; i++)
    {
        arr[rand()%size][rand()%size] = 1;
    }
}
/// Следующее поколение
void nextGeneration(int arr[][SIZE], int size)
{
    int helpArr[SIZE][SIZE];
    createArray(helpArr, size);
    for(int i = 1; i < size-1; i++)
    {
        for(int j = 1; j < size-1; j++)
        {
            int toAlive = 0;
            int toDie = 0;
            //Проверяем соседей
            for(int k = i-1; k < i+2; k++)
            {
                for(int n = j-1; n < j+2; n++)
                {
                    toAlive = toAlive+arr[k][n];
                }
            }
            toAlive = toAlive - arr[i][j];
            if(toAlive == 3 && arr[i][j] == 0)
            {
                helpArr[i][j] = 1;
            }
            if((toAlive < 2 || toAlive > 3) && arr[i][j] == 1)
            {
                helpArr[i][j] = 0;
            }
            /*if(arr[i][j] == 0)
            {
                if(i-1 >= 0 && i < size && j-1 >= 0 && j < size && arr[i-1][j-1] == 1) toAlive++;
                if(i-1 >= 0 && i < size && j >= 0 && j <   size && arr[i-1][j]   == 1) toAlive++;
                if(i-1 >= 0 && i < size && j >= 0 && j+1 < size && arr[i-1][j+1] == 1) toAlive++;
                if(i >= 0 && i <   size && j-1 >= 0 && j < size && arr[i][j-1]   == 1) toAlive++;
                if(i >= 0 && i <   size && j >= 0 && j+1 < size && arr[i][j+1]   == 1) toAlive++;
                if(i >= 0 && i+1 < size && j-1 >= 0 && j < size && arr[i+1][j-1] == 1) toAlive++;
                if(i >= 0 && i+1 < size && j >= 0 && j <   size && arr[i+1][j]   == 1) toAlive++;
                if(i >= 0 && i+1 < size && j >= 0 && j+1 < size && arr[i+1][j+1] == 1) toAlive++;
                if(toAlive == 3)
                {
                    helpArr[i][j] = 1;
                }
            }
            else if(arr[i][j] == 1)
            {
                if(i-1 >= 0 && i < size && j-1 >= 0 && j < size && arr[i-1][j-1] == 1) toDie++;
                if(i-1 >= 0 && i < size && j >= 0 && j <   size && arr[i-1][j]   == 1) toDie++;
                if(i-1 >= 0 && i < size && j >= 0 && j+1 < size && arr[i-1][j+1] == 1) toDie++;
                if(i >= 0 && i <   size && j-1 >= 0 && j < size && arr[i][j-1]   == 1) toDie++;
                if(i >= 0 && i <   size && j >= 0 && j+1 < size && arr[i][j+1]   == 1) toDie++;
                if(i >= 0 && i+1 < size && j-1 >= 0 && j < size && arr[i+1][j-1] == 1) toDie++;
                if(i >= 0 && i+1 < size && j >= 0 && j <   size && arr[i+1][j]   == 1) toDie++;
                if(i >= 0 && i+1 < size && j >= 0 && j+1 < size && arr[i+1][j+1] == 1) toDie++;
                if(toDie == 2 || toDie == 3)
                {
                    helpArr[i][j] = 1;
                }
            }*/
        }
    }
    cout<<"next generation"<<endl;
    copyArray(arr,helpArr,size);
    printArr(arr, size);
}

int main()
{
    srand(time(0));

    //int size = 10;
    int arr[SIZE][SIZE];

    createArray(arr, SIZE);


    arr[1][2] = 1;
    arr[2][4] = 1;
    arr[3][2] = 1;
    arr[3][4] = 1;
    arr[3][5] = 1;
    arr[4][2] = 1;
    arr[4][3] = 1;
    arr[4][4] = 1;
    arr[5][1] = 1;
    arr[5][3] = 1;

    //randGreed(arr, SIZE);
    printArr(arr, SIZE);
    nextGeneration(arr, SIZE);
    /*for(int i = 0; i < 20; i++)
    {
        cout<<"generation "<<i+1<<endl;
        nextGeneration(arr, SIZE);
    }*/



    return 0;
}
