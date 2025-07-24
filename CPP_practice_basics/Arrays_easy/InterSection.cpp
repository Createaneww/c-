#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;
    vector<int> visited(n2, 0); // fix for standard C++
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && visited[j] == 0) {
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr2[j]>arr1[i]){
                break;
            }
        }
    }
    return ans;
}


vector<int> optimalIntersection(vector<int>&arr1 , vector<int>&arr2){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
    
}

int main(){
    int n1;
    cout << "Enter size arr1"<<endl;
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of arr1" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter size arr2"<<endl;
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of arr2"<<endl;;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // vector<int> result = Intersection(arr1, arr2);
    vector<int> result = optimalIntersection(arr1 , arr2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]<<" ";
    }
    
}