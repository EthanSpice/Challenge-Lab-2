#include <iostream>
#include <string>
#include <fstream>
using namespace std;
char Translate(string current);
int main(){
  ifstream text;
    text.open("morse.txt");

string morse;

string current;
//text >> noskipws;
while ( text >>  current){
    
    morse.push_back(Translate(current));
   // morse.push_back(' ');
}

    cout << morse << endl;
    text.close();
    return 0;
}

char Translate(string current){
 if (current == ".-"){
     return 'a';  
 }
  else if (current == "-..."){
     return 'b';  
 }
 else if (current == "-.-."){
     return 'c';  
 }
 else if (current == "-.."){
     return 'd';  
 }
 else if (current == "."){
     return 'e';  
 }
 else if (current == "..-."){
     return 'f';  
 }
 else if (current == "--."){
     return 'g';  
 }
 else if (current == "...."){
     return 'h';  
 }
 else if (current == ".."){
     return 'i';  
 }
 else if (current == ".---"){
     return 'j';  
 }
 else if (current == "-.-"){
     return 'k';  
 }
 else if (current == ".-.."){
     return 'l';  
 }
 else if (current == "--"){
     return 'm';  
 }
 else if (current == "-."){
     return 'n';  
 }
 else if (current == "---"){
     return 'o';  
 }
 else if (current == ".--."){
     return 'p';  
 }
 else if (current == "--.-"){
     return 'q';  
 }
 else if (current == ".-."){
     return 'r';  
 }
 else if (current == "..."){
     return 's';  
 }
 else if (current == "-"){
     return 't';  
 }
 else if (current == "..-"){
     return 'u';  
 }
 else if (current == "...-"){
     return 'v';  
 }
 else if (current == ".--"){
     return 'w';  
 }
 else if (current == "-..-"){
     return 'x';  
 }
 else if (current == "-.--"){
     return 'y';  
 }
 else if (current == "--.."){
     return 'z';  
 }


 else{
     return ' ';
 }
}
