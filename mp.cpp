#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>directory;
    directory["Amit"]=10;
    directory["Aman"]=20;
    directory["Ankit"]=30;
    for(auto i:directory){
        cout<<"name  "<<i.first<<"  "<<"number  "<<i.second<<"\n";
    }



}