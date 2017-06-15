#include <iostream>
#include"Polynomial.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double *a1,*a2;
	int j,k,l,m,b,h;
	cout<<"Please input the number of num:"<<endl;
	cin>>j;
	a1=new double[j];
	cout<<"Please input coefficient:"<<endl;
	for(k=0;k<j;k++)
	cin>>*(a1+k);
	Polynomial p1(a1,j);
	cout<<"output:"<<endl;
	p1.tellInfor();
	cout<<"Please intput the value of the X:"<<endl;
	cin>>l;
	p1.calculate(l);
	cout<<"Plsease input another num:"<<endl;
	cin>>h;
	a2=new double[h];
	cout<<"Please input the coefficient:"<<endl;
	for(m=0;m<h;m++)
	cin>>*(a2+m);
	Polynomial p2(a2,m);
	cout<<"output"<<endl;
	p2.tellInfor();
	cout<<"Please intput the value of the X:"<<endl;
	cin>>h;
	p2.calculate(h);
	cout<<"Please choose your operator:1.Plus 2.Minus 3.Mutiply 4.Assignment"<<endl;
	cin>>b;
	Polynomial p3=p1+p2;
	Polynomial p4=p1-p2;
	cout<<"Input:"<<endl;
	p1.tellInfor();
	cout<<endl;
	p2.tellInfor();
	cout<<endl;
	Polynomial p5=p1*p2;
	switch(b){
		case 1:cout<<"The Plus result is:"<<endl;
		p3.tellInfor();
		cout<<endl;
		break;
		case 2:cout<<"The minus result is:"<<endl;
		p4.tellInfor();
		cout<<endl;
		break;
		case 3:cout<<"The Mutiply result is:"<<endl;
		p5.tellInfor();
		cout<<endl;
		break;
		case 4:cout<<"The assignment result is:"<<endl;
		p1=p2;
		p1.tellInfor();
		cout<<endl;
	}
	return 0;
}
