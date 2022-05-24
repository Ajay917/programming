#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v(10);
    v[0] = 1;
    v[1] = 2;
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
    return 0;
}