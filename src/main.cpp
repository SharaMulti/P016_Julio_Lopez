/* Amerike university
    Author: Julio López
    Practice #: 16
    Date: 25/03/25
    Description: This program shall ask the user for a high amount of numbers to fill in a Matrix, then, itll add up all numbers and show it to the user */
    #include <iostream>
    using namespace std;


    int main(){

        int Number = 3;
        int Matrix[3][3];
        int Sum = 0;

        for (int i = 0; i < Number; i++)
        {
            cout << "Lane " << i ;
            for (int j = 0; j < Number; j++)
            {
                cin >> Matrix[i][j];
            }
        }

        Sum = Matrix[0][0] + Matrix[0][1] + Matrix[0][2] + Matrix[1][0] + Matrix[1][1] + Matrix[1][2] + Matrix[2][0] + Matrix[2][1] + Matrix[2][2];

        cout << Sum;

        return 0;
    }