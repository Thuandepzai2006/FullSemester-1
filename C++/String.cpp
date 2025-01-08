#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

//Bai 1
void reverseString(char str[]){
    int count = strlen(str);
    char temp;
    for(int i = 0; i < (count / 2); ++i){
        temp = str[i];
        str[i] = str[count - i - 1];
        str[count - i - 1] = temp;
    }
    cout << str << endl;
}

//Bai 2
int isPalindromeString(char str[]){
    string test = str;
    int count = strlen(str);
    char temp;
    for(int i = 0; i < (count / 2); ++i){
        temp = str[i];
        str[i] = str[count - i - 1];
        str[count - i - 1] = temp;
    }
    if(test == str) return true;
    else{
        return false;
    }
}

//Bai 3
int countOccurrencesChar(char str[], char c){
    int length = strlen(str);
    int count = 0;
    for(int i = 0; i < length; ++i){
        if(str[i] == c){
            count++;
        }
    }
    return count;
}

int main(){
//Bai 1
    char str[] = "Hello World";
    reverseString(str);

//Bai 2
    if(isPalindromeString(str)){
        cout << "IsPalindromeString" << endl;
    }
    else{
        cout << "No is not" << endl;
    }

//Bai 3
    char c = 'l';
    cout << "So luong ky tu trong char la: " << countOccurrencesChar(str, c) << endl;
    return 0;
}