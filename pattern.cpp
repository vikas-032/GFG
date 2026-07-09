/* 
#include<iostream>
using namespace std;
int main(){
   int n=4;
for(int i=0; i<n ; i++){
    for (int j=1; j<=i+1 ; j++){
        cout << j;
    }
    cout << endl;
    
}
return 0 ;

}
//1
//12
//123
//1234
*/

/*
#include<iostream>
using namespace std;
int main(){
   int n=4;
for(int i=n; i>0 ; i--){
    for (int j=i+1; j>0 ; j--){
        cout << j << " ";
    }
    cout << endl;
    
}
return 0 ;
}

output :
54321
4321
321
21
*/

/*
Reverse triangle pattern

#include<iostream>
using namespace std;
int main(){
   int n=4;
for(int i=0; i<n ; i++){
    for (int j=i+1; j>0 ; j--){
        cout << j << " ";
    }
    cout << endl;
    
}
return 0 ;
}
1
21
321
4321
54321
*/

/*
floid pattern
#include<iostream>
using namespace std;
int main(){
    int n =4;
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

1 
2 3 
4 5 6 
7 8 9 10 

*/