/*Given an array of n integers where each value represents the number of chocolates in a packet. 
Each packet can have a variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that: 
       1. Each student gets one packet.
       2.The difference between the number of chocolates in the packet with 
            maximum chocolates and packet with minimum chocolates given to the students is minimum.*/
#include<bits/stdc++.h>

using namespace std;

int distribution(vector<int> &v,int m) {
    sort(v.begin(),v.end());
    int min1 = INT_MAX;
    for(int i=0; i+m-1 < v.size(); i++) {
        if(abs(v[i] - v[i+m-1]) < min1) min1 = abs(v[i] - v[i+m-1]);
    }
    return min1;
}
int main() {
    vector<int> v1{3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
    int min1 = distribution(v1,m);
    cout<<"min difference: "<<min1<<endl;
    //copy(v1.begin(),v1.end(),ostream_iterator<int>(cout, " "));
    return 0;
}