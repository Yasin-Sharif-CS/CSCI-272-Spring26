#include <iostream> 
#include <cmath> 
#include <cstdlib>  // For system("pause")
using namespace std; 

int main() {
  
    int numAge; 
    cout<<"Enter your age "; 
    cin>>numAge; 
    if(numAge >= 18){
        cout<<"You can enter the movies theater"; 

    

    }
    else {
        cout<<"You can't enter the movies theater"; 
    }
    system("pause");
    return 0; 
}