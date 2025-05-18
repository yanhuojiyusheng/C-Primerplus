#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter one of the following choices: "<<endl
    <<"c) carnivore"<<"\tp) pianist"<<endl
    <<"t) tree" << " \tg) game"<<endl;
    char input;
    cin >> input;
    bool flag=true;
    while(flag){
        switch(input){
        case 'c':cout<<"carnivore get"<<endl;break;
        case 'p':cout<<"pianist get"<<endl;break;
        case 't':cout<<"A maple is a tree"<<endl;break;
        case 'g':cout<<"game get"<<endl;break;
        default:cout<<"Please enter a c, p, t, or g: ";
                cin>>input;
                continue;
        }
        flag=false;
    }
    return 0;
}

