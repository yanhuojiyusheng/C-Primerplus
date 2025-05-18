#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char words[50];
    int wordNum=0;
    cout << "Enter words (to stop, type the word done): "<<endl;
    cin >> words;
    while(strcmp(words, "done")){
        wordNum++;
        cin>>words;
    }
    cout << "You entered a total of " << wordNum << " words."<<endl;
    return 0;
}

