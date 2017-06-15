#include"Polynomial.h"  
#include<iostream> 

int Polynomial::n=0;
Polynomial::Polynomial(){ 
    size = 10;  
    coefficients = new double[size];  
}  
  
Polynomial::Polynomial(int _size){  
    size = _size;  
    coefficients = new double[size];  
}  
  
Polynomial::Polynomial(const Polynomial &poly){  
    size = poly.size;  
    coefficients = new double[size];  
    for(int i=0;i<size;i++){  
        coefficients[i] = poly.coefficients[i];
    }  
}  
      
Polynomial::Polynomial(double*_coefficients,int _size){  
    size = _size;  
    coefficients = new double[size];  
    for(int i=0;i<size;i++){  
        coefficients[i] = _coefficients[i];  
    } 
    Polynomial::n++; 
}  
  
  
Polynomial::~Polynomial(){  
    delete []coefficients;  
}  
  
void Polynomial::tellInfor(){  
    int temp = 0;  
    //
    for(int t =0;t<size;t++){  
        if(coefficients[t]!=0){  
            temp = t;  
            break;  
        }  
    }  
    for(int i=size-1;i>=0;i--){  
        if(coefficients[i]!=0){  
            if(coefficients[i]!=1||i==0)  
                cout<<coefficients[i];  
            for(int j=0;j<i;j++){  
                if(j==0){  
                    cout<<"x";  
                }  
                else{  
                    cout<<"*x";  
                }  
            }  
            if(i>temp){  
                cout<<" + ";        
            }         
        }  
    }  
    cout<<endl;
    
}  
  

void Polynomial::setcoefficient(int num,double coefficient){  
    coefficients[num] = coefficient;  
  
}  

double Polynomial::getcoefficient(int num){  
    return coefficients[num];  
}  
  
Polynomial& Polynomial::operator=(const Polynomial& poly2){   
    size = poly2.size;  
    coefficients = new double[size];  
    for(int i=0;i<size;i++){  
        coefficients[i] = poly2.coefficients[i];  
    }  
    return *this;  
}  
  
//
Polynomial operator+(const Polynomial& poly,double num){  
/* 
    Polynomial *p = new Polynomial(poly); 
    p->coefficients[0] += num; 
    return *p; 
*/        
    Polynomial p(poly);  
    p.coefficients[0] += num;  
    return p;  
  
}  
//
Polynomial operator-(const Polynomial& poly,double num){  
/* 
    Polynomial *p = new Polynomial(poly); 
    p->coefficients[0] -= num; 
    return *p; 
*/  
    Polynomial p(poly);  
    p.coefficients[0] -= num;  
    return p;  
  
}  
//
Polynomial operator*(const Polynomial& poly,double num){  
/* 
    Polynomial *p = new Polynomial(poly); 
    for(int i=0;i<p->size;i++){ 
        p->coefficients[i] *= num;    
    } 
    return *p; 
*/  
    Polynomial p(poly);  
    for(int i=0;i<p.size;i++){  
        p.coefficients[i] *= num;     
    }  
    return p;  
  
}  
  
Polynomial operator+(double num,const Polynomial& poly){  
/* 
    Polynomial *p = new Polynomial(poly); 
    p->coefficients[0] += num; 
    return *p; 
*/        
    Polynomial p(poly);  
    p.coefficients[0] += num;  
    return p;  
  
}  
//
Polynomial operator-(double num,const Polynomial& poly){  
/* 
    Polynomial *p = new Polynomial(poly); 
    p->coefficients[0] -= num; 
    return *p; 
*/  
    Polynomial p(poly);  
    for(int i=0;i<p.size;i++){  
        p.coefficients[i] *= -1;      
    }  
        p.coefficients[0] += num;  
    return p;  
  
}  
//
Polynomial operator*(double num,const Polynomial& poly){  
/* 
    Polynomial *p = new Polynomial(poly); 
    for(int i=0;i<p->size;i++){ 
        p->coefficients[i] *= num;    
    } 
    return *p; 
*/  
    Polynomial p(poly);  
    for(int i=0;i<p.size;i++){  
        p.coefficients[i] *= num;     
    }  
    return p;  
}  
  
  
Polynomial operator+(const Polynomial& p1,const Polynomial& p2){  
    if(p1.size>=p2.size){  
        Polynomial p3(p1);  
        for(int i=0;i<p2.size;i++){  
            p3.coefficients[i] = p1.coefficients[i]+p2.coefficients[i];  
        }  
        return p3;  
    }  
    else{  
        Polynomial p3(p2);  
        for(int i=0;i<p1.size;i++){  
            p3.coefficients[i] = p1.coefficients[i]+p2.coefficients[i];  
        }  
        return p3;  
    }  
}  
Polynomial operator-(const Polynomial& p1,const Polynomial& p2){  
    if(p1.size>=p2.size){  
        Polynomial p3(p1);  
        for(int i=0;i<p2.size;i++){  
            p3.coefficients[i] = p1.coefficients[i]-p2.coefficients[i];  
        }  
        return p3;  
    }  
    else{  
        Polynomial p3(p2);  
        for(int i=0;i<p1.size;i++){  
            p3.coefficients[i] = p1.coefficients[i]-p2.coefficients[i];  
        }  
        for(int i=0;i<p2.size;i++){  
            p3.coefficients[i] *= -1;  
        }  
        return p3;  
    }  
}  
  
  
Polynomial operator*(const Polynomial& p1,const Polynomial& p2){  
    Polynomial p3(p1.size+p2.size-1); 
    for(int m=0;m<p3.size;m++){  
        p3.coefficients[m] = 0;  
    }  
    for(int i=0;i<p1.size;i++){  
        for(int j=0;j<p2.size;j++){  
            p3.coefficients[i+j] += p1.coefficients[i]*p2.coefficients[j];  
        }  
    }  
    return p3;  
}  
int  Polynomial::calculate(int x){
	int j,p;
	double sum=0;
	for(j=0;j<size;j++){
		if(j!=0)
		p=p*x;
		sum=sum+coefficients[j]*p;
	}
	cout<<"The result of thr array is :"<<sum<<endl;
	Polynomial::n++;
    cout<<endl;
    cout<<"The "<<Polynomial::n/2<<" Polynomial"<<"\n"; 
	return 0;

}
