#include<iostream> 
#include<cmath> 
using namespace std; 
double f1( double x ) 
{  return 4 / ( 1 + x*x );  
} 
double f2( double x ) 
{  return sqrt( 1 + x*x );  
} 
double f3( double x ) 
{  return sin( x );  
} 
double 
trap( double( *fun )( double 
x ), 
double a,double b,long n ) 
{ double t,h;  int i; 
  t = ( ( *fun )(a) + ( *fun )( b ) ) 
/ 2.0; 
  h = ( b - a ) / n; 
  for( i=1; i<=n-1; i++ ) t += 
( *fun )( a + i * h ); 
  t *= h; 
  return t; 
} 
int main() 
{ double t1,t2,t3; 
  t1 = trap( f1,0,1,10000 ); 
  cout << "t1=" << t1 << endl;  
  t2 = trap( f2,1,2,10000 ); 
  cout << "t2=" << t2 << endl; 
  t3 
= 
trap( sin,0,3.14159265/2,10000 ); 
  cout << "t3=" << t3 << endl; 
}


