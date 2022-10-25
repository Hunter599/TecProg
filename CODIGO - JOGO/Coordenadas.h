#pragma once

#include <iostream>

//using namespace std;

namespace Matematica{

template <typename TC> //TC = tipo da coordenada
class Coord
{
public:
    TC x;
    TC y;

public:
    Coord(TC x, TC y);
    Coord();
    ~Coord(){}

    void operator=(Coord<TC> outra);
    void operator+=(Coord<TC> outra);
    void operator-=(Coord<TC> outra);
    void operator/=(Coord<TC> outra);
    void operator*=(Coord<TC> outra);
    void operator/=(double divisor);
    void operator*=(double multiplicador);

    Coord<TC> operator+(Coord<TC> outra);
    Coord<TC> operator-(Coord<TC> outra);
    Coord<TC> operator*(Coord<TC> outra);
    Coord<TC> operator/(Coord<TC> outra);
    Coord<TC> operator*(double multiplicador);
    Coord<TC> operator/(double divisor);
}

typedef Coord<double> CoordD;
typedef Coord<float> CoordF;
typedef Coord<int> CoordI;
typedef Coord<unsigned int> CoordUI;

}
