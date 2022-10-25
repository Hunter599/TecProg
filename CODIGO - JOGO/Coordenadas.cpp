#pragma once

#include "Coordenadas.h"

template <typename TC> //TC = tipo da coordenada

Coord<TC>::Coord(TC x, TC y): x(x), y(y)
{}

template <typename TC>
Coord<TC>::Coord()
{
    this->x = 0;
    this->y = 0;
}


template <typename TC>
void Coord<TC>::operator=(Coord<TC> outra)
{
    this->x=outra.x;
    this->y=outra.y;
}


template <typename TC>
void Coord<TC>::operator+=(Coord<TC> outra)
{
    this->x+=outra.x;
    this->y+=outra.y;
}

template <typename TC>
void Coord<TC>::operator-=(Coord<TC> outra)
{
    this->x-=outra.x;
    this->y-=outra.y;
}

template <typename TC>
void Coord<TC>::operator/=(Coord<TC> outra)
{
    this->x/=outra.x;
    this->y/=outra.y;
}

template <typename TC>
void Coord<TC>::operator*=(Coord<TC> outra)
{
    this->x*=outra.x;
    this->y*=outra.y;
}

template <typename TC>
void Coord<TC>::operator/=(double divisor)
{
    if (divisor == 0.0f)
    {
        std::cout << "ERRO: Nao se pode dividir por 0!" << std::endl;
        exit(1);
    }
    this->x/=divisor;
    this->y/=divisor;
}

template <typename TC>
void Coord<TC>::operator*=(double multiplicador)
{
    this->x*=multiplicador;
    this->y*=multiplicador;
}


template <typename TC>
Coord<TC> Coord<TC>::operator+(Coord<TC> outra)
{
    Coord<TC> resultado;

    resultado.x = this->x + outra.x;
    resultado.y = this->y + outra.y;

    return resultado;
}

template <typename TC>
Coord<TC> Coord<TC>::operator-(Coord<TC> outra)
{
    Coord<TC> resultado;

    resultado.x = this->x - outra.x;
    resultado.y = this->y - outra.y;

    return resultado;
}

template <typename TC>
Coord<TC> Coord<TC>::operator*(Coord<TC> outra)
{
    Coord<TC> resultado;

    resultado.x = this->x * outra.x;
    resultado.y = this->y * outra.y;

    return resultado;
}

template <typename TC>
Coord<TC> Coord<TC>::operator/(Coord<TC> outra);
{
    Coord<TC> resultado;

    resultado.x = this->x / outra.x;
    resultado.y = this->y / outra.y;

    return resultado;
}


template <typename TC>
Coord<TC> Coord<TC>::operator*(double multiplicador)
{
    Coord<TC> resultado;

    resultado.x = this->x * multiplicador;
    resultado.y = this->y * multiplicador;

    return resultado;
}

template <typename TC>
Coord<TC> Coord<TC>::operator/(double divisor)
{
    Coord<TC> resultado;

    resultado.x = this->x / divisor;
    resultado.y = this->y / divisor;

    return resultado;
}


