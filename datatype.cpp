#include "common.h"
using namespace std;

class NUMERIC
{
private:
	int64_t x;
public:
	NUMERIC(int64_t x):x(x){}
	int64_t get() const {return x;}
	void update(int64_t y) {x = y;}
	~NUMERIC(){}
};

class REAL
{
private:
	double x;
public:
	REAL(double x):x(x){}
	double get() const {return x;}
	void update(double y) {x = y;}
	~REAL(){}
};

class CHAR
{
private:
	char x;
public:
	CHAR(char x):x(x){}
	char get() const {return x;}
	void update(char y) {x = y;}
	~CHAR(){}
};

class STRING
{
private:
	char* x;
public:
	STRING(string s, int size) {x = new char[size]; strcpy(x, s.c_str());}
	char* get() const {return x;}
	void update(int index, char c) {x[index] = c;}
	~STRING(){delete[] x;}
};