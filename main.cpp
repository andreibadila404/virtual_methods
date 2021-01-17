#include <iostream>
#include <math.h>

using namespace std;

class Shape{
public:
 virtual float arie()=0;
 virtual float perimetru()=0;
 virtual void deseneaza()=0;

    Shape(){
        cout<<endl<<"Shape ctor";
    }
};

class Cerc:public Shape{
public:

int raza;

    Cerc(int Raza){
    this->raza=Raza;
    cout<<endl<<"Cerc ctor";
    }

    float arie(){
    float a;
        a= M_PI*pow(raza,2);
        return a;
    }

    float perimetru(){
    int b;
    b=2*M_PI*raza;
    return b;
    }

    void deseneaza(){

    cout<<endl<<"/\\";
    cout<<endl<<"\\/";

    };
};

class Patrat: public Shape{
public:

int latura;

    Patrat(int Latura){
    this->latura=Latura;
    cout<<endl<<"Patrat ctor";
    }

    float arie(){
    int a;
    a= latura*latura;
    return a;
    }

    float perimetru(){
    int b;
    b= 4*latura;
    return b;
    }

    void deseneaza(){
    cout<<endl<<"deseneaza un patrat";
    }
};

class A{
public:

    virtual void metoda1(){
        cout<<endl<<"Asta este metoda 1";
    }


};

class B:public A{
public:

    void metoda2(){
        cout<<endl<<"Asta este metoda 2";
    }

    void metoda1(){
        cout<<endl<<"Asta este metoda 1 din B";
    }
};

int main(){
/*
Patrat p(20);
cout<<endl<<p.perimetru();
cout<<endl<<p.arie();

Cerc c(10);
cout<<endl<<c.perimetru();
cout<<endl<<c.arie();

Shape *sp;
Patrat *pp=new Patrat(10);
Cerc *cp=new Cerc(5);

sp = pp;
cout<<endl<<sp->arie();
*/
B *pb=new B();
A *pa=new A();

pa->metoda1();
pb->metoda1();
pb->metoda2();

((B*)pa)->metoda2();

int c = 100;
cout << (float)c << endl;

/*
Shape *V[2];

Cerc *c=new Cerc(10);
V[0]=c;

Patrat *p= new Patrat(15);
V[1]= p;

V[0]->deseneaza();
V[1]->deseneaza();
*/
}
