#include<iostream>
using namespace std;
/*class base class
{
	protected:
	int i;
	public:
	base class(int x)
	{
		i=x;
		cout<<"base class conductor and i="<<i<<endl;
	}
};
class derived class : public base class
{
	int j;
	public c:
		derived class(int x,int y): base class (y)
		{
			j=x:
				cout<<"derive class constructor & j="<<j;
		}
}
int mean()
{
	derived class ob(10,15)
	return 0;
}*/
/*class A
{
	public:
		int a;
		A()
		{
			a=10;
			cout<<"class A";
		}
};
class B:public virtual A
{
	public:
		int b;
		B()
		{
			b=10;
			cout<<"class B";
		}
};
int c;
C()
{
	c=30;
	cout<<"class C";
}
class D: public B,public C
{
	public:
		D()
		{
			cout<<"class D"<<endl;
		}
};
int main()
{
	D object;
	cout<<"a="<<object a<<endl;
	cout<<"b="<<object b<<endl;
	cout<<"c="<<object c<<endl;
	return o;
	
}*/
/*#include<iostream>
using namespace std;
class base
{
	public :
	int i;
	base(int x)
	{
		i=x;
		cout<<"Base class constructor (i : "<<i<<")\n";
	}
};
class derived : public base
{
	public : 
	int j;
		derived(int x,int y): base(y)
		{
			j = x;
				cout<<"Derive class constructor (j : "<<j<<")";
		}
};
int main()
{
	derived ob(10,15);
	return 0;
}*/
/*class base
{
	int x;
	public:
		virtual void fun()=0;
		int get x()
		{
			cout<<"get x() function called"<<endl;
		}
}
class derived: public base
{
	int y;
	public:
		void fun()
		class c: public virtual A
		{
			public c:
				{
					cout<<"fun() function  called "<<endl;
					
				}
		}
}
int main()
{
	derived d;
	d get x();
	d fun();
	return 0;
}*/
/*#include <iostream> 
using namespace std; 
  
class A { 
public: 
    int a; 
    A() 
    { 
        a = 10; 
    } 
}; 
  
class B : public virtual A { 
}; 
  
class C : public virtual A { 
}; 
  
class D : public B, public C { 
}; 
  
int main() 
{ 
    D object;
    cout << "a = " << object.a << endl; 
  
    return 0; 
}*/
#include<iostream> 
using namespace std; 
  
class Base 
{ 
   int x; 
public: 
    virtual void fun() = 0; 
    int getX(){
	 	return x;
	} 
}; 
   
class Derived: public Base 
{ 
    int y; 
public: 
    void fun(){
		cout << "fun() function called";
	} 
}; 
  
int main() 
{ 
    Derived d; 
    d.fun(); 
    return 0; 
}
