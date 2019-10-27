#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

  setlocale(LC_ALL, "spanish");

  int h=0, a=0;

  cout<<"Ingrese la altura del rectángulo: "<<endl;
  cin>>h;
  cout<<"Ingrese el ancho del rectángulo: "<<endl;
  cin>>a;

  for(int i=1; i<=h; i++) {
    for(int j=1; j<=a; j++) {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;

}
