#include <iostream>
#include <locale.h>
using namespace std;

void line(), message();

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "Hello, this program starts in main().\n";
    line();
    message();
    line();
    cout << "At the end of main.\n";
    
    return 0;

}

void line (){
    cout << "--------------------------\n";
}

void message(){
    cout <<" In function message\n";
}
