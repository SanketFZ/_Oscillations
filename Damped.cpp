
#include"SHM.h"

hm f;
double _Damped::Amplitude(double *_x, double *_u)
{
	
	int u = pow((*_u / f._Omega<float>()), 2);
	int x = pow(*_x, 2);
	_u0 = sqrt(x + u);
	return _u0;
}
inline double _Damped::Amplitude() const { return _u0; }

double _Damped::Displacement( float* t)
{
	auto angle = (f._Omega<float>() * abs(*t)) - _Angle(f);
	_x = _u0 * sin(angle);
	return _x;
}
double _Damped::Displacement(double* angle, float *t) 
{
	_x = _u0 * sin((f._Omega<float>() * abs(*t)) - *angle); 
	return _x; 
}
double _Damped::Displacement() const { return _x; }

double _Damped::Velocity(double* angle,float *t)
{
	f.v = (Amplitude() * f._Omega<float>()) * cos((f._Omega<float>() * abs(*t))- *angle);
	return f.v;
}
double _Damped::Velocity( float* t)
{
	auto angle = (f._Omega<double>() * *t) - _Angle(f);
	f.v = (_u0 * f._Omega<double>()) * cos(angle);
	return f.v;
}
double _Damped::Velocity()const { return f.v; }

double _Damped ::_acceleration(float *t)
{
	auto angle = (f._Omega<float>() * abs(*t)) - _Angle(f);
	f.a = -(pow(f._Omega<double>(), 2))*Amplitude()*sin(angle);
	return f.a;
}

double _Damped::_Angle(hm& h)
{
	auto ratio =(_u / f._Omega<float>());
	h.angle = atan(- _x / ratio);
	return h.angle;
}
double _Damped::Zeta(double* c, double* Cc) { z = (*c / *Cc);return z; }
double _Damped::Zeta()const { return z; }

double _Damped::DmpFreq()
{
	_wD = f._Omega<float>() * (sqrt(1 - pow(Zeta(), 2)));
	return _wD;
}
void _Damped::getvalue(int *options) 
{
	switch (*options)
	{
	case 1:
		cout << "Enter the value Omega(rad/s) \n" << endl;
		cin >>f._omega;
		cout << "Enter damping coefficient \n" << endl;
		cin >> c;
		cout << "Enter  critical damping coefficient" << endl;
		cin >> c;
		cout << "The Value Of Zeta Is ";
		cout << Zeta();
		cout << " Damping frequency (Wd) = ";
		cout << DmpFreq();
		break;

	case 2:
		cout << "Enter the value Omega(rad/s) \n" << endl;
		cin >> f._omega;
		cout << "Enter the Displacement(_x)in m \n" << endl;
		cin >> _x;
		cout << "Enter the initial velocity (_u) in m/s \n" << endl;
		cin >> _u;
		cout << "The value of Angle(radian) = " << endl;
		cout << _Angle(f) << " rad";
		break;
	case 3:
		cout << "Enter the value Omega(rad/s) \n" << endl;
		cin >> f._omega;
		cout << "Enter the Displacement(_x)in m \n" << endl;
		cin >> _x;
		cout << "Enter the initial velocity (_u) in m/s \n" << endl;
		cin >> _u;
		cout << "The value of Amplitude(_u0) = " << endl;
		cout << Amplitude() << " m";

	}
 }

dm t;
