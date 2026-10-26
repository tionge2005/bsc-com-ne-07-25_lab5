# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int dayuntilexpiration = rand() % 12;
    cout<<"Dayuntilexpiration:"<<dayuntilexpiration<<endl;

    switch(dayuntilexpiration){
case 0:
cout<<"your subscription has expired"<<endl;
break;
case 1:
cout<<"your subscription expires within:"<<dayuntilexpiration<<"days"<<endl;
cout<<"Renew now and save 20%";
break;

case 2:
case 3:
case 4:
case 5:
cout<<"your subcription expires in"<<dayuntilexpiration<<"days"<<endl;
cout<<"Renew now and save 10%";
break;

case 6:
case 7:
case 8:
case 9:
case 10:
cout<<"your subscription will expire soon"<<endl;
cout<<"Renew now";
break;
default:
cout<<"you have an active subscription"<<endl;
break;
    }
    return 0;
    
}