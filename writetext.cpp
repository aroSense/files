#include <fstream>
#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
					
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
   
	ofstream output{"abc.txt"};
		if (output)	// opened for writing
			{
				output << a << endl << b << endl << c << endl;
			}
					else 
					cout << "Error openeing abc.txt";
 
   return 0;
}
