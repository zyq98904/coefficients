using namespace std;
class Polynomial{  
public:
	int calculate(int);
    Polynomial();//构造函数 
    Polynomial(int _size);//最大次幂
    Polynomial(const Polynomial &poly);//拷贝构造函数 
    Polynomial(double* _coefficients,int _size);//构造多项式 
    ~Polynomial();//析构函数 
    void tellInfor();//输出多项式函数 
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
  
    static int n; //记录多项式的数量 
private:  
    double *coefficients;//
    int size;//
    
};  
