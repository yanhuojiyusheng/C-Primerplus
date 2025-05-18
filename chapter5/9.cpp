#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string words;
    int wordNum=0;
    cout << "Enter words (to stop, type the word done): "<<endl;
    cin >> words;
    while(words!="done"){
        wordNum++;
        cin>>words;
    }
    cout << "You entered a total of " << wordNum << " words."<<endl;
    return 0;
}

