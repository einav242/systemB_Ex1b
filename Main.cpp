#include "mat.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main() {
	int r,c;
    char s1,s2;
    const int minSymbol=33;
    const int maxSymbol=126;
    cout << "please choose number of row";
    cin >> r;
    
	while(r%2==0 || r<0)
    {
        cout << "only odd positive number can be a row please choose diffrent numbr";
    	cin >> r;
    }
    cout << "please choose number of colum";
    cin >> c;
	while(c%2==0 || c<0)
    {
        cout << "only odd positive number can be a colum please choose diffrent numbr";
    	cin >> c;
    }
	cout << "please choose the first symbol";
    cin >> s1;
    while(s1<minSymbol || s1>maxSymbol)
    {
        cout << "try a diffrent symbol";
    	cin >> s1;
    }
	cout << "please choose the second symbol ";
    cin >> s2;;
    while(s2<minSymbol || s2>maxSymbol)
    {
        cout << "try a diffrent symbol";
    	cin >> s2;
    }
	cout << ariel::mat(c, r, s1, s2) << endl;
    return 0;
}