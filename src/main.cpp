#include <iostream>

#include "../include/wavelet.h"

int main(int argc, char const* argv[]) {
    int i = 0;
    float *vec;
	float vec3[4] = { 4, 2, 5, 5 };

	vec = haar1d(vec3, 4);

	std::cout << "The 1D Haar Transform: \n";
	for(i = 0; i < 4; i++)
		std::cout << vec[i] << " ";
	std::cout << "\n";
	
	std::cout << "\n\nThe 2D Haar Transform: \n";
	float **mat = new float*[4];
	for(int m = 0; m < 4; m++)
		mat[m] = new float[4];
		
	mat[0][0] = 5; mat[0][1] = 6; mat[0][2] = 1; mat[0][3] = 2;
	mat[1][0] = 4; mat[1][1] = 2; mat[1][2] = 5; mat[1][3] = 5;
	mat[2][0] = 3; mat[2][1] = 1; mat[2][2] = 7; mat[2][3] = 1;
	mat[3][0] = 6; mat[3][1] = 3; mat[3][2] = 5; mat[3][3] = 1;

	haar2d(mat, 4, 4);
	for(i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++)
			std::cout << mat[i][j] << " ";
		std::cout << "\n";
	}

	std::cout << "\n";
    
    return 0;
}

