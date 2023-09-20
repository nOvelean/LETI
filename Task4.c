#include <stdio.h>
#include <math.h>
struct pt {
	double x, y;
} res = {-9999999, -9999999};
 
struct line {
	double a, b, c;
}m, n;
//Уравнение прямой Ax + Bx + C
const double EPS = 1e-9;
 
double det (double a, double b, double c, double d) {
	return a * d - b * c;
}
 
struct pt intersect (struct line m, struct line n, struct pt res) {
	double zn = det (m.a, m.b, n.a, n.b);
	if (fabs (zn) < EPS)
		return res;
	res.x = - det(m.c, m.b, n.c, n.b) / zn;
	res.y = - det(m.a, m.c, n.a, n.c) / zn;
	return res;
}
 
int parallel (struct line m, struct line n) {
	return fabs (det (m.a, m.b, n.a, n.b)) < EPS;
}
 
int equivalent (struct line m, struct line n) {
	return fabs (det(m.a, m.b, n.a, n.b)) < EPS
		&& fabs (det(m.a, m.c, n.a, n.c)) < EPS
		&& fabs (det(m.b, m.c, n.b, n.c)) < EPS;
}
int main(){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%lf, %lf, %lf, %lf, %lf, %lf ", &x1, &y1);
	m.a = 1/(x2-x1);
	m.b = 1/(y2 - y1);
	m.c = -x1/(x2-x1) + y1/(y2 - y1);
	n.a = 1/(x4-x3);
	n.b = 1/(y4 - y3);
	n.c = -x3/(x4-x3) + y3/(y4 - y3);
	struct pt res = intersect(m, n, res);
	return 0;
}