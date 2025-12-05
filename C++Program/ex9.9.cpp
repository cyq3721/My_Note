#include <iostream>
#include <fstream>
using namespace std;

int main(){
  char ch[15];
  char a[] = "abcdefg";
  char *p = a;
  ofstream myFile;   //建立输出流文件;
  myFile.open("myText.txt");
  myFile<<p;
  myFile<<"Goodbye!";
  myFile.close();

  ifstream getText;
  getText.open("myText.txt");
  int i;
  for( i =0; i<strlen(p); i++){
    getText >> ch[i];
  }
  ch[i]='\0';
  getText.close();
  cout << ch;
  return 0;
  
}
