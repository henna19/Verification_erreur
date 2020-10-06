#include <iostream>
#include <string>
using namespace std;


void convertToASCII(string letter)
{
    int sum = 0 ;
    int sum1 = 0 ;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i) ;

	sum += int(x) ;
	sum1 += sum ;
    }
    cout << "Checksum1 = " << sum << endl ;
    cout << "Checksum2 = " << sum1 << endl ;
}

int main()
{
    string plainText ;
    cout << "Entrez un message: " ;
    std::getline(cin,plainText) ;
    convertToASCII(plainText) ;
    return 0;
}
