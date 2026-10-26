# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int main(){

srand(time(0));
int dayuntilexpiration = rand() % 12;
cout<<dayuntilexpiration<<endl;

if(dayuntilexpiration == 0){
    cout<<"your subscrition has expired"<<endl;
}
else if(dayuntilexpiration == 1){
    cout<<"your subscription expires within a day"<<endl;
    cout<<"Renew now and save 20%";
}
else if(dayuntilexpiration <= 5){
    cout<<"your subscription expires in"<<dayuntilexpiration<<"days"<<endl;
    cout<<"Renew one and save 10% ";
    }
    else if(dayuntilexpiration <= 10){
        cout<<"your subscription will expire soon.Renew now!"<<endl;
    }
    else{
        cout<<"your have an active subscription"<<endl; 
    }
    return 0;
    }