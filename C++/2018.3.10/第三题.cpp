#include<iostream> 
using namespace std; 
void 
fmaxmin( 
double,double 
,double 
,double 
*,double * ); 
int main()
{ double a,b,c,max,min; 
cout << "a,b,c = "; 
cin >> a >> b >> c; 
fmaxmin( a,b,c,&max,&min ); 
cout << "max=" << max << endl; 
cout << "min=" <<min << endl; 
} 
void 
fmaxmin( double x,double y,double z,double *p1,double *p2 ) 
{ double u,v; 
 
if ( x>y ) { u = x; v = y; } 
else { u = y; v = x; }; 
if ( z>u ) u = z; 
if ( z<v ) v = z; 
*p1 = u; 
*p2 = v;
}


