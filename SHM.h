#pragma once

#include<cmath>
#include <iomanip>
#include<iostream>
#include<numbers>
using namespace std;
# define pi           3.14159265358979323846 /* pi */
# define PI         3.141592653589793238462643383279502884L /* pi */

typedef class _SHM
{
private:
	double x;//displacement
    double a ; //acceleration
	double _omega;//angular frequency
	double v;//velocity
	double A;//Amplitude
	double k;//spring constant 
	float m;//mass
	double angle;//angle
	float t; //time
public:
	float n, f;
	inline double _Omega(double*, float*);
	template<typename T>
	inline T _Omega()const;

	template<typename T>
	inline T  PhseDiff() { return n * pi; };
	template<typename T>
	inline T Timeperiod() { return (2 * pi) / _Omega<double>(); }
	inline float Frequency() { f = 1 / Timeperiod<double>(); return f; }

	double Displacement(double *, float * );
	double Displacement(double *);
	double Displacement()const;
	double Velocity(double*, float*);
	double Velocity(double*);
	double Velocity() const;
	double _acceleration();
	double Force(double * );
	double Force(float *);
	double Force()const;
	double _energy(float*);
	double _energy( double*);

	
	friend void getValue(int* , int *);
	friend class _Damped;
	
}hm;
typedef class _Damped 
{
	double _x;//initial displacement
	double _u;//initial velocity
	double _u0;//amplitude of free undamped oscillation
	double z;//damping ratio
	double c, Cc;//damping  coefficient and  critical damping coefficient 
	double _wD;//damping angular frequency
public:
	double Amplitude(double*, double*);
	inline double Amplitude()const;
	double Displacement( float*);
	double Displacement(double*,float *);
	double Displacement()const;
	double Velocity(double*, float*);
	double Velocity(float *);
	double Velocity() const;
	double _acceleration(float *);
	double _Angle(hm &);
	double Zeta(double* , double* );
	double Zeta() const;
    double DmpFreq();
	void getvalue(int* options);

	 

}dm;

