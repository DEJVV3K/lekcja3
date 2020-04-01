#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string aa[100];

    ifstream plik;
    string bb;
    int x=0;
    
	plik.open( "C:\\a.txt" , ios::in);

    if(plik.good()==false)
    {
    	cout<<"Plik nie istnieje ";
    	exit(0);
    }
	if(plik.good())
	while(!plik.eof())
	{
		getline(plik, bb);
    	plik>>aa[x];
		x++;
	}
    plik.close();

    for(int j=0; j<x; j++)
    cout<<aa[j]<<endl;

    return 0;
}
