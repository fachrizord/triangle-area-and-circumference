

#include<iostream>

using namespace std;
int main()
{	

cout<<"----------------------------------"<<endl;
cout<<"Luas dan Keliling Segitiga"<<endl;
cout<<"----------------------------------"<<endl <<endl;
	
	float a, b, c, s, y, keliling, luas;
	
cout<<" nilai sisi pertama = ";cin>>a;
cout<<" nilai sisi kedua   = ";cin>>b;
cout<<" nilai sisi ketiga  = ";cin>>c;
	
	s = (a+b+c)*0.5;
	y = s*(s-a)*(s-b)*(s-c);
	keliling = 2*s;
	luas = sqrt(y);
	
	if (a <= 0 or b <=0 or c <= 0 or y<=0 ) cout<<" Ini bukan segitiga" << endl;
	
	else cout<<" Keliling = "<< keliling << endl && cout<<" Luas = "<< luas << endl;
	
	return 0;
	
}