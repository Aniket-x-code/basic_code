#include <iostream> 
using namespace std; 

int main()
 {
     int a =3;
     int* b =&a;
     cout << "ADDRESS OF A " << b << endl;
     cout << " VALUE AT ADRESS B :  "<< *b<< endl;
 return 0;
}