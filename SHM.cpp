
#include"SHM.h"


inline double _SHM::_Omega(double* springconst, float* mass) { return _omega = sqrt((*springconst / *mass)); }
template<typename T>
inline T _SHM::_Omega() const{	return abs(_omega);}

double _SHM::Displacement(double *Amplitude, float *t)
{
	A = *Amplitude;
     x = A * sin((_Omega<float>() * abs(*t))+PhseDiff<float>());
	 return x;
}
double _SHM::Displacement(double *angle) { x = A * sin((*angle + PhseDiff<float>())); return x; }
double _SHM::Displacement() const { return x; }

double _SHM::Force(double *springconst )
{
	k = - *springconst;
	auto F = (k * Displacement());
	return F;
}
 double _SHM::Force(float *mass )
 {
	 m = *mass;
	 auto F= -(m * pow(_Omega<float>(), 2) * Displacement());
	 return F;
 }
double _SHM::Force() const{return m * a; }

double _SHM::_energy( float *mass )
{
	auto E = (m * pow(_Omega<double>(), 2) * pow(A, 2));
	return E;
}
double _SHM::_energy(double* springconst) { return (k * pow(A, 2)); }

double _SHM::Velocity()const { return v; }
double _SHM::Velocity(double *angle)
{
	 v = (A *_Omega<float>()) * cos(*angle + PhseDiff<float>());
	return v;
}
double _SHM::Velocity(double *Amplitute, float *t )
{
	A = *Amplitute;
	auto angle = (_Omega<double>() *  *t) + PhseDiff<float>();
	v = (A * _Omega<double>()) * cos(angle);
	return v;
}
double _SHM::_acceleration()
{	a = -(pow(_Omega<double>(), 2)) * Displacement();
	return a;
}



