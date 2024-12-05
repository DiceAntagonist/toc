#include<iostream>
#include<string>
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
           
          if (c[0]=='a' && c[c.length()-1]=='b') {
            return true;
        }
        else 
        {
            return false;
        }
            
        }
        else {return false;}
    
    
}





int main(){
    
    cout<<"enter string";
    string c;
    cin>>c;
   if(FA(c)){ cout<<"string accepted";}
   else{cout<<"string rejected";}
   
    return 0;
}
