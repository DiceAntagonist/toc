#include<iostream>
using namespace std;

bool ab (string c){
    for (int i = 0; i<c.length(); i++ ){
        if(c[i]!='a' && c[i]!='b'){
            return false;
        }
    }
    return true;
}

bool FA (string c){
    if(ab(c)){
        int counta = 0;
        int countb = 0;
        
        for (int i = 0; i<c.length(); i++){
            if(c[i]=='a'){
                counta++;
            }
            else if(c[i]=='b'){
                countb++;
            }
        }
        if (counta%2==0 && countb%2==0){
            return true;
        }
    }
    return false;
}

int main() {
    
 cout<<"enter string";
    string c;
    cin>>c;
   if(FA(c)){ cout<<"string accepted";}
   else{cout<<"string rejected";}
   
    
    return 0;
}
