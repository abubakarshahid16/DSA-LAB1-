#include<iostream>
using namespace std;

const int maxsize = 10;

// Function to take input in the matrix
void inputmatrix(int array[maxsize][maxsize], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }
}

// Function to print the matrix
void printmatrix(int array[maxsize][maxsize], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    int rows = 0;
    int cols = 0;
    int array[maxsize][maxsize];

    cout << "Please enter the number of rows: ";
    cin >> rows;
    cout << "Please enter the number of columns: ";
    cin >> cols;

    cout << "Please enter the menu option: ";
    cin >> n;

    while (n > 0)
    {
        switch (n)
        {
        case 1:
            cout << "Enter elements in the matrix:" << endl;
            inputmatrix(array, rows, cols);
            break;
        case 2:
            cout << "Displaying the elements in the matrix:" << endl;
            printmatrix(array, rows, cols);
            break;
            // Add cases for other menu options (3 to 6)
            // ...
        case -1:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }

        cout << "Please enter the menu option: ";
        cin >> n;
    }

    return 0;
}
