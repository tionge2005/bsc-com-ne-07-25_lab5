# include <iostream>
# include <limits>
using namespace std;
// function to calculate the area of a square
double squareArea(double side){
    return side * side;
}
// function to calculate the area of a rectangle
double rectangleArea(double length,double width){
    return length * width;
}
// function to calculate area of a triangle
double triangleArea(double base ,double hieght){
    return 0.5 * base * hieght;
} 
int main(){
    int choice ;
    while(true){
        cout<<"\nplease select a shape to calculate"<<"\nsqure"<<"\n 2.rectangle"<<"\n 3.triangle"<<"\n 4.quit program"<<"Enter selection:";
    }
    if(cin.fail()){
        cout<<"invalid input! please enter a number \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        continue;
    

    }
    switch(choice){
        case 1:{
            double side;
        cout<<"Enter the size of the square:";
        cin>>side;
        cout<<"Area of square ="<<squareArea(side)<<endl;
        break;
    }
        case 2:
        {
        double length,width;
        cout<<"Enter the length of the rectangle:";
        cin>>length;
        cout<<"Enter the width:";
        cin>>width;
        cout<<"Area of rectangle ="<<rectangleArea(length,width)<<endl;
        break;
        
    }
    case 3:{
        double base,hieght;
        cout<<"Enter the base:";
        cin>>base;
        cout<<"Enter the hieght:";
        cin>>hieght;
        cout<<"Area of triangle ="<<triangleArea(base,hieght)<<endl;
        break;
    }
    case 4:{
        cout<<"program terminated.\n";
        return 0;
        default :
        cout<<"your input was:"<<choice<<"which is an invalid input.\n";
        cout<<"please enter an valid input!!\n";
    }
}
    return 0;




}