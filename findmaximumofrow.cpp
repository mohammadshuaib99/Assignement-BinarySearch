#include <iostream>
#include <vector>
using namespace std;

int findRowWithMaxOnes(const vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int maxOnes = 0;
    int rowWithMaxOnes = 0;
    int col = cols - 1;

    for (int i = 0; i < rows; ++i)
    {
        while (col >= 0 && matrix[i][col] == 1)
        {
            --col;
            maxOnes++;
            rowWithMaxOnes = i;
        }
    }

    return rowWithMaxOnes;
}

int main()
{
    vector<vector<int>> matrix = {
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}

    };

    int rowWithMaxOnes = findRowWithMaxOnes(matrix);
    cout << "Row with the maximum number of 1's is: " << rowWithMaxOnes << endl;

    return 0;
}

/*output - Row with the maximum number of 1's is: 1*/