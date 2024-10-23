#define MAX_ITER 1024

#define SQ(X) ((X)*(X))

int inSet(double c_r, double c_i) {
	double z_r = 0, z_i = 0;

	for (int i = 1; i <= MAX_ITER; i++) {
		double next_r = SQ(z_r) - SQ(z_i) + c_r;
		double next_i = 2 * z_r * z_i + c_i;
		z_r = next_r;
		z_i = next_i;
		if (SQ(z_r) + SQ(z_i) > 10000) return i;
	}
	return 0;
}