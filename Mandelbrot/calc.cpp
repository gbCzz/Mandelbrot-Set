#define MAX_ITER 1024

#define SQ(X) ((X)*(X))

int inSet(double c_r, double c_i) {
	double z_r = 0, z_i = 0;

	for (int i = 1; i <= MAX_ITER; i++) {
		z_r = SQ(z_r) - SQ(z_i) + c_r;
		z_i = 2 * z_r * z_i + c_i;
		if (SQ(z_r) + SQ(z_i) > 4) return i;
	}
	return 0;
}