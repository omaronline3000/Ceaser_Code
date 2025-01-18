#include<iostream>
#include<string>
#include<vector>
using namespace std;


void ceaser(string &str , int k) {

    for (char &i: str) {
        if (i <= 90 && i >= 65){
                int result = i + k; 
                if(result > 90){
                    int rem = result - 90;
                    i = 65 + rem - 1;
                }
                else i = result;
        }

        else if( i <= 122 && i >= 97){
             int result = i + k; 
                if(result > 122){  
                    int rem = result - 122;
                    i = 97 + rem - 1;
                }
                else i = result;
        }
    }

}

int main(){
    cout<<"Enter the word : ";

    string word;getline(cin , word);
    cout<<"\nEnter the key : ";

    int key;cin>>key;

    cout<<endl;
    ceaser(word , key);
    cout<<word;
}
