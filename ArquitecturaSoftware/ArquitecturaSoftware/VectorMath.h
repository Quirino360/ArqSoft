#pragma once
#ifdef ARQUITECTURASOFTWARE_EXPORTS
#define VETOR_API __declspec (dllexport)
#else 
#define VETOR_API __declspec (dllimport)
#endif


struct VETOR_API Vec2f
{
	Vec2f(float _x = 0, float _y = 0) {
		x = _x;
		y = _y;
	}
	float x = 0;
	float y = 0;
};

struct VETOR_API Vec3f
{
	float x = 0;
	float y = 0;
	float z = 0;
};

class VETOR_API Vec2fMath
{
public:
	Vec2fMath() = default;
	~Vec2fMath() = default;

	static float Magnitud(Vec2f A);
	static float ProductoPunto(Vec2f A, Vec2f B);
	static float ProductoCruz(Vec2f A, Vec2f B);
	static Vec2f Suma(Vec2f A, Vec2f B);
	static Vec2f Resta(Vec2f A, Vec2f B);
	static Vec2f Multiplicacion(Vec2f A, float n);
	static Vec2f Divicion(Vec2f A, float n);
	static Vec2f Normalize(Vec2f A);	
	static bool AreVectorsOrthogonal(Vec2f A, Vec2f B);

};

