
#include <iostream>
using namespace std;

bool ab (string c){
     for(int i = 0; i<c.length(); i++){
        if(c[i]!='a'&& c[i]!='b'){
        return false;}
     } 
     return true;
       
}

bool FA(string c){
if(ab(c)){
    if(c.length()>=4){
        if(c[0]==c[c.length()-2] && c[1]==c[c.length()-1]){
          
            return true;
        }
        else {return false;}
    }
   else return false;
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
