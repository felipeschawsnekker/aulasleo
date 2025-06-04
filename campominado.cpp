

using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int a=20;
    string bomba="#";
    int matriz[a][a];
    
    srand(time(0));
    
    
    for(int i=0; i<a; i++){
        cout<<"[ ";
        for (int j=0; j<a;j++){
            
            int x=(rand() % 20 + 1);
            if (x==1){
            cout<<bomba;
            }
            cout<<" - ";
        }
        cout<<" ]";
        cout<<endl;
    }
     
    
    
   
   
    }
    
