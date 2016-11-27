double fn(int n) {
	int i;
	double j = 1;
	for (i = 1; i <= n; i++)
		j *= i;
	return j;
}
double cnr(int n, int r) {
	double k, l;
	k = fn(n);
	l = fn(n - r)*fn(r);
	return k / l;
}