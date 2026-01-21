#include <iostream>
class Complex
{
    int real, img;
    public:
        void getData(int,int);
        Complex addComplex(Complex);
        void display();
};
int main()
{
    Complex c1,c2,c3;
    int i,r;
    std ::cout << "Enter real and imaginary part of first complex number: ";
    std::cin >> r >> i;
    c1.getData(r,i);
    std ::cout << "Enter real and imaginary part of second complex number: ";
    std::cin >> r >> i;
    c2.getData(r,i);
    c3=c1.addComplex(c2);
    c3.display();
    return 0;
}
inline void Complex :: getData(int real, int img)
{
    Complex :: real = real;
    Complex :: img = img;
}
inline void Complex :: display()
{
    std :: cout << real << " + i" << img << std :: endl;
}
Complex Complex :: addComplex (Complex c)
{
    Complex t;
    t.real = real + c.real;
    t.img = img + c.img;
    return t;
}