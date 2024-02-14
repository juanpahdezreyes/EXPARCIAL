#include <iostream>
using namespace std;

class Rectangulo
{
   private:
       int ancho;
       int altura;

   public:
    int esquinax;
    int esquinay;

    Rectangulo()
    {
        ancho = 0;
        altura = 0;
        esquinax = 0;
        esquinay = 0;
    }

    Rectangulo(int x, int y)
    {
        ancho = 0;
        altura = 0;
        esquinax = x;
        esquinay = y;
    }

    Rectangulo(int x, int y, int w, int h)
    {
        if (w > 0)
        {
             ancho = w;
        }

        if (w < 0)
        {
            ancho = 0.0;
        }


        if (h > 0)
        {
           altura = h;
        }

        if (h < 0)
        {
            altura = 0.0;
        }

        esquinax = x;
        esquinay = y;


    }

    int getAncho()
    {
        return ancho;
    }

    void setAncho(int w)
    {
        if (w > 0)
        {
            ancho = w;
        }

        if (w < 0)
        {
            ancho = 0.0;
        }
    }

    int getAltura()
    {
        return altura;
    }

    void setAltura(int h)
    {
        if (h > 0)
        {
           altura = h;
        }

        if (h < 0)
        {
            altura = 0.0;
        }
    }

    int getArea()
    {
         return ancho * altura;
    }

    void intersecta(Rectangulo rect)
    {
        bool interx = esquinax < rect.esquinax + rect.ancho && esquinax + ancho > rect.esquinax;


        bool intery = esquinay < rect.esquinay + rect.altura && esquinay + altura > rect.esquinay;

        if (interx && intery)
        {
            cout << "los rectangulos intersectan" << endl;
        }
        else
        {
            cout << "los rectangulos no intersectan" << endl;
        }





    }

};

int main()
{
    Rectangulo r1;
    r1.setAncho(5);
    r1.setAltura(7);
    r1.esquinax = 3;
    r1.esquinay = 9;

    Rectangulo r2(6,3,9,7);
    Rectangulo r3(7,4,2,3);


   cout << "El area del primer rectangulo es de " << r1.getArea() << endl;
   cout << "El area del segundo rectangulo es de " << r2.getArea() << endl;
   cout << "El area del tercer rectangulo es de " << r3.getArea() << endl;

   r1.intersecta(r2);
   r1.intersecta(r3);
   r2.intersecta(r3);


}
