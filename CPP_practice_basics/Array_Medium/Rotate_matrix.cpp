#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Rotatematrix(vector<vector<int>>&matrix , int n , int m ){
    vector<vector<int>>rotated(m , vector<int>(n));//new dimensions
    int index = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rotated[j][index] = matrix[i][j];
        }
        if(index>0){
            index--;
        }
    }
    
    return rotated;

}

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12} ,{13,14,15,16}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = Rotatematrix(matrix, n, m);

    cout << "The Final matrix is: " << endl;
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }

        cout << endl;
    }
    return 0;
}