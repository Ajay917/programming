#include<bits/stdc++.h>

using namespace std;

class car{
    public:
        int weight;
        string color;

        int method(int weight){
            return weight;
        }
        
};
int main(){
    car ford;                     // creating an object
    ford.color = "red";
    ford.weight = 1000;

    car volvo;
    volvo.color = "white";
    volvo.weight = 1200;
    cout<<volvo.method(volvo.weight);
    cout<<ford.color<<endl;
    cout<<volvo.weight<<endl;
    return 0;
}