#include<bits/stdc++.h>
using namespace std;


//Better solution - Tc = o(NlogN)+o(N);
int LongestConsequetive(vector<int>&arr , int n){
    int cnt = 0;
    int lastSmaller = INT_MIN;
    int longest = 1;
    sort(arr.begin() , arr.end());

    for(int i = 0 ; i<n ; i++){
        if(arr[i]-1 == lastSmaller){
            cnt += 1;
            lastSmaller = arr[i];
        }
        else if(arr[i] != lastSmaller){
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest , cnt);
    }
    return longest;
}


int OptimalLongestconsequetive(vector<int>&arr , int n){
    int longest = 1;
    
    unordered_set<int> st;
    for (int i = 0;  i < n;  i++)
    {
        st.insert(arr[i]);
    }

    //now iterate in set
    for(auto it : st){
        //check for the previous one if we dont have previous that will be the starting
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while (st.find(x+1) != st.end())
            {
                x += 1;
                cnt += 1;
            }
            longest = max(longest , cnt);
            
        }
    }
    return longest;  
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // cout<<LongestConsequetive(arr , n);
    cout<<OptimalLongestconsequetive(arr , n);
    
}