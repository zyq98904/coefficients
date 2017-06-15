using namespace std;
class Polynomial{  
public:
	int calculate(int);
    Polynomial();//���캯�� 
    Polynomial(int _size);//������
    Polynomial(const Polynomial &poly);//�������캯�� 
    Polynomial(double* _coefficients,int _size);//�������ʽ 
    ~Polynomial();//�������� 
    void tellInfor();//�������ʽ���� 
    void setcoefficient(int num,double coefficient);//
    double getcoefficient(int num);//
  
      
    Polynomial& operator=(const Polynomial& poly);//
      
    //
    friend Polynomial operator+(const Polynomial& poly,double num);  
    friend Polynomial operator+(double num,const Polynomial& poly);  
    friend Polynomial operator-(const Polynomial& poly,double num);  
    friend Polynomial operator-(double num,const Polynomial& poly);  
    friend Polynomial operator*(const Polynomial& poly,double num);  
    friend Polynomial operator*(double num,const Polynomial& poly);  
  
    //
    friend Polynomial operator+(const Polynomial& p1,const Polynomial& p2);  
    friend Polynomial operator-(const Polynomial& p1,const Polynomial& p2);  
    friend Polynomial operator*(const Polynomial& p1,const Polynomial& p2);  
  
    static int n; //��¼����ʽ������ 
private:  
    double *coefficients;//
    int size;//
    
};  
