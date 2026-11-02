# include <iostream>
using namespace std;
int main(){
    int rows , column;
    // ask the user to enter the dimension.
    cout<<"enter number of row(maximum 3):";
    cin>>rows;
    cout<<"enter number of columns(maximum 3):";
    cin>>column;
    
    // enforce the maximum dimension.
    while(rows<1 || rows>3 || column <1 || column>3 ){
        cout<<"invalid dimension ! dimension must be between 1 and 3."<<endl;
        cout<<"enter number number of rows(maximum 3).";
        cin>>rows;
        cout<<"enter number of columns(maximum 3).";
        cin>>column;
    }
    // dynamically allocate a 2D array of doubles
    double **array = new double*[rows];
    for(int i = 0; i<rows;i++){
        array[i] = new double[column];
             }

    // assign values usimg nested loops
    cout<<"\n enter the element of the array"<<endl;
    for(int i=0; i<rows;i++){
        for(int j = 0; j< column;j++){
            cout<<"enter element ["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    // display the array using nested loops
    cout<<"\n the element of the array are"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0; j<column;j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;

    }
    // deallocate dynamically allocated memeory
    for (int i = 0; i <rows;i++){
        delete[]array[i];
    }
    delete[]array;
    return 0;
    
}