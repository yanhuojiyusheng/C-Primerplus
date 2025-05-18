#include <iostream>
using namespace std;
int Fill_array(double* array, int size){
    cout << "请输入double值(按q退出): ";
    int n=0;
    for(int i=0;i<size && cin >> array[i];i++){
        n++;
    }
    return n;
}
void Show_array(double* array,int size){
    for(int i=0;i<size;i++){
        cout << array[i] << ' ';
    }
    cout<<endl;
}
void Reverse_array(double* array,int size){
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
int main()
{
    const int ARRAYSIZE = 50;
    double array[ARRAYSIZE];
    int n;
    n = Fill_array(array,ARRAYSIZE);
    Show_array(array, n);
    Reverse_array(array+1,n-2);
    Show_array(array,n);
    return 0;
}

