#include "pch.h"
#include "VectorMath.h"
#include <cmath> 

float Vec2fMath::Magnitud(Vec2f A)
{
    return float(std::sqrtf(std::powf(A.x, 2) + std::powf(A.y, 2)));
}

float Vec2fMath::ProductoPunto(Vec2f A, Vec2f B)
{
    return float(A.x * A.y + B.x * B.y);
}

float Vec2fMath::ProductoCruz(Vec2f A, Vec2f B)
{
    return float(A.x * B.y- A.y * B.x);
}

Vec2f Vec2fMath::Suma(Vec2f A, Vec2f B)
{
    return Vec2f(A.x + B.x, A.y + B.y);
}

Vec2f Vec2fMath::Resta(Vec2f A, Vec2f B)
{
    return Vec2f(A.x - B.x, A.y - B.y);
}

Vec2f Vec2fMath::Multiplicacion(Vec2f A, float n)
{
    return Vec2f(A.x * n, A.y * n);
}

Vec2f Vec2fMath::Divicion(Vec2f A, float n)
{
    return Vec2f(A.x / n, A.y / n);
}

Vec2f Vec2fMath::Normalize(Vec2f A)
{
    // Si haces sacas la magnitud del vector que regresaste te debe dar uno
    return Vec2f(A.x / Magnitud(A), A.y / Magnitud(A));
}

bool Vec2fMath::AreVectorsOrthogonal(Vec2f A, Vec2f B)
{
    //si da 0 significa que son 90 gardos entre vectores 
    if (ProductoCruz(A, B) == 0)
        return true;
    else
        return false;
}


