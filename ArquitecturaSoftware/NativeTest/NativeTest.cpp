#include "pch.h"
#include "CppUnitTest.h"
#include "../ArquitecturaSoftware/VectorMath.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeTest
{
	TEST_CLASS(NativeTest)
	{
	public:
		Vec2f* myVec = new Vec2f(8, 4);
		Vec2f* myVec2 = new Vec2f(2, 6);
		Vec2f* myVec3;
		TEST_METHOD(UnitTestMethod)
		{
			// Hacer 15 prubas con mi dll 
			Assert::IsNotNull(myVec);
			Assert::IsNotNull(myVec2);
			Assert::IsNull(myVec3);

			Assert::AreEqual(Vec2fMath::ProductoPunto(*myVec, *myVec2), 44.0f);
			Assert::AreEqual(Vec2fMath::ProductoCruz(*myVec, *myVec2), 40.0f);

			Assert::AreEqual(Vec2fMath::Suma(*myVec, *myVec2).x, 10.0f);
			Assert::AreEqual(Vec2fMath::Suma(*myVec, *myVec2).y, 10.0f);

			Assert::AreEqual(Vec2fMath::Resta(*myVec, *myVec2).x, 6.0f);
			Assert::AreEqual(Vec2fMath::Resta(*myVec, *myVec2).y, -2.0f);

			Assert::AreEqual(Vec2fMath::Multiplicacion(*myVec, 7).x, 56.0f);
			Assert::AreEqual(Vec2fMath::Multiplicacion(*myVec, 7).y, 28.0f);

			Assert::AreEqual(Vec2fMath::Multiplicacion(*myVec2, 6.5).x, 13.0f);
			Assert::AreEqual(Vec2fMath::Multiplicacion(*myVec2, 6.5).y, 39.0f);

			Assert::AreEqual(Vec2fMath::Divicion(*myVec, 3).x, 8.0f / 3.0f);
			Assert::AreEqual(Vec2fMath::Divicion(*myVec, 3).y, 4.0f / 3.0f);

			Assert::AreEqual(Vec2fMath::Divicion(*myVec2, 2).x, 1.0f);
			Assert::AreEqual(Vec2fMath::Divicion(*myVec2, 2).y, 3.0f);

			//Assert::AreEqual(Vec2fMath::Magnitud(Vec2fMath::Normalize(*myVec2)), 1.0f);

			Assert::IsFalse(Vec2fMath::AreVectorsOrthogonal(*myVec, *myVec2));
		}
	};
}
