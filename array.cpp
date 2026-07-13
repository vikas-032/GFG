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