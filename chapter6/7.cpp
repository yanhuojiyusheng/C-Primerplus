#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    int Vowel=0;
    int Consonant=0;
    int other=0;
    string word;
    cout << "Enter words (q to quit): "<<endl;
    while(cin>>word && word!="q"){
        char letter=word[0];
        if(isalpha(letter)){
            letter = tolower(letter);
            if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||
               letter=='u'){
                Vowel++;
            }
            else{
                Consonant++;
            }
        }
        else{
            other++;
        }
    }  
    cout << Vowel << " words begining with vowels\n"
        << Consonant << " words begining with consonants\n"
        << other << " others\n"<<endl;
    return 0;
}

