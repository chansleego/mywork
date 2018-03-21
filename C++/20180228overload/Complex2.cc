 ///
 /// @file    Complex2.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-20 09:40:12
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Complex
{
	public:
		Complex(double dreal, double dimag)
		: _dreal(dreal)
		, _dimag(dimag)
	    {
             cout << "Complex(double dreal, double dimag)" << endl;
	    }

        void display() const
		{
			if(_dreal != 0)
			{
                cout << _dreal ;
				if(_dimag > 0)
				{
				    cout << " + " << _dimag << "i" << endl;
				}else if(_dimag < 0)
				{
				    cout << " - " << _dimag * (-1) << "i" << endl;
				}
			}
			else
			{
			    if(_dimag > 0)
					cout << _dimag << "i" << endl;
				else if(_dimag < 0)
					cout << " - " << _dimag * (-1) << "i" << endl;
				else
					cout << "0" << endl;
			}
		}

        double getReal() const
		{
		    return _dreal;
		}
		
		double getImage() const
		{
		    return _dimag;
		}

    private:
		double _dreal;
		double _dimag;
};

Complex operator+(const Complex & lhs, const Complex & rhs)
{
    return Complex(lhs.getReal() + rhs.getReal(),
			       lhs.getImage() + rhs.getImage());
}


int main(void)
{
    Complex c1(-1, 2);
    Complex c2(2, -1);
	Complex c3(0, 1);
	Complex c4(1, 0);

    c4 = c1 + c2;

    c1.display();
	c2.display();
    c3.display();
    c4.display();


	cout << endl;
	return 0;

}
