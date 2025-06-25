#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int const SIZE = 5;
    int matr[SIZE][SIZE], bufer;
    int matrsr[SIZE][SIZE];
    int lim = 100;
    int mov = -50;

    cout<<"Заполнение матрицы";
    cout<<endl;
    for (int i =0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matr[i][j] = rand()%lim + mov;
            matrsr[i][j] = matr[i][j];
            cout << matr[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }


    cout<<"Замена строк"<<endl;
    {
    int k,m;
    cout<<"Ввести номер строки k и номер строки m"<<endl;
    cin>>k>>m;
    k--;m--;
    for (int i=0; i<SIZE; i++) {
        bufer = matr[k][i];
        matr[k][i] = matr[m][i];
        matr[m][i] = bufer;
    }
    cout<<"  Строки "<<++k<<" и "<<++m<<" поменялись местами\t  Изначальная матрица"<<endl;
    cout<<endl;

    for (int i =0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matr[i][j]<<"\t";
        }
        cout<<"|  ";
        for (int j = 0; j < SIZE; j++) {
            cout << matrsr[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
    cout<<endl;
    }

    for (int i =0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrsr[i][j] = matr[i][j];
        }
    }



    cout<<"  Транспонирование матрицы\t\t  Матрица с изменёнными строками"<<endl;
    int num =0;
    for (int i = 0; i<SIZE; i++) {

        for (int j = num; j< SIZE; j++) {
            bufer = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = bufer;

        }
                    num++;
    }
    for (int i =0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matr[i][j]<<"\t";
        }
        cout<<"|  ";
        for (int j = 0; j < SIZE; j++) {
            cout << matrsr[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
    cout<<endl;



    cout << "Hello world!" << endl;
    return 0;
}
