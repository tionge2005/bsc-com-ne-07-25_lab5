# include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter an integer between 5 and 10"<<endl;
    cin>>number;
    while(cin.fail()|| number <5 || number >10){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"sorry you entered an invalid number.please try again"<<endl;
        cin>>number;

    }
    if(number <5 || number >10){
        cout<<"you entered a wrong number.Enter a number between 5 and 10";
        cin>>number;

    }
    else{
        cout<<"your input value("<<number<<") has been excepted.";
    }
    return 0;
    


}