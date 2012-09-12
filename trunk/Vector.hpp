#ifndef VECTOR
#define VECTOR
#include "mat_math.hpp"
namespace mat
{
  // przewidywany jest jeden z paru typow: float, double, long double, epsilon_double, bignum, fraction, int
  template <class T>
    struct Vector
    {
      Vector(T a_x=0, T a_y=0):x(a_x), y(a_y) {}
      Vector<T> operator+(const Vector<T> &a) const
    {
      return Vector<T>(x+a.x, y+a.y);
    }
      Vector<T> operator-() const
    {
      return Vector<T>(-x, -y);
    }
      Vector<T> operator-(const Vector<T> &a) const
    {
      return Vector<T>(x-a.x, y-a.y);
    }
      Vector<T> operator*(const T &a) const     //mnozenie przez stala
    {
      return Vector<T>(x*a, y*a);
    }
      Vector<T> operator/(const T &a) const
		{
			return Vector<T>(x/a, y/a);
		}
      T operator*(const Vector<T> &a) const     //iloczyn skalarny
    {
      return x*a.x + y*a.y;
    }
      // przyda sie tez druga wersja iloczynu wektorowego co zwroci nam wektor, ale to nie w tej klasie, ale w NVector-ze
      T operator^(const Vector<T> &a) const {    //iloczyn wektorowy
      return x*a.y-a.x*y;
    }
      // do zaimplementowania: funkcja zwracajaca dlugosc (wymagany pierwiastek)
      T length() {
      return sqrt(x*x + y*y);
    }
      T x, y;
    };
}
#endif
