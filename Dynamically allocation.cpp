# include <iostream>
# include <string>
using namespace std;
int main(){
    int* number = new int;
    string* name = new string;
     cout<<"enter a number:"<<endl;
     cin>>*number;
     cout<<"type a string:"<<endl;
     cin>>*name;

     return 0;

}