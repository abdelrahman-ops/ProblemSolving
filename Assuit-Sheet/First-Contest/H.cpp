#include <iostream>

using namespace std;

int main()
{
   double a , k , n ;
   cin >> n >> k >> a ;
   long long X = (k * n) / a ;
   double q = (k*n)/a , test = q - X ;
   /* if(test > 0)
   {
      cout <<"double"<< endl ;
   }
   else      if (q > 2147483647)
      cout <<"long long" << endl ;
   else
      cout<<"int"<<endl; */

   cout << X << endl ;
   cout << q << endl ;
   cout << test << endl ;
   
   return 0;
}