#include <iostream>

int main()
{
    using namespace std;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i=0;i<rows;i++){
        for(int j=rows-i-1;j>0;j--){
            cout<<'.';
        }
        for(int j=i+1;j>0;j--){
            cout<<'*';
        }
        cout <<endl;
    }
    return 0;
}

