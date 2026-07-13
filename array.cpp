/*
//  Q1 Smallest number using loop in Array?
#include<iostream>
using namespace std;
int main(){
int nums[]={5, 10, 15 , -15, -33};
int size=5;

int smallest=INT_MAX;

for(int i =0; i<size; i++){
if(nums[i]<smallest){
    smallest =nums[i];
}
}
cout<<"smallest" <<smallest <<endl;
return 0;
}
*/

// Q2 second part of finding smallest and largest at same time?

#include<iostream>
using namespace std;
int main(){
    int nums[]={5, 10, 66, 33, -44, -88};
    int size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0; i<size; i++){
        smallest=min(nums[i], smallest);
        largest=max(nums[i], largest);

    }
    cout<<"smallest"<<smallest<<endl;
    cout<<"largest"<<largest<< endl;
    return 0;
}
