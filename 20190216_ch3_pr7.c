#include <stdio.h>
#include <math.h>
void main(void) {
	int N; 
	float data;
	float M2 = 0, E2 = 0; 
	float std_dev;
	printf("�������� ������ �Է��Ͻÿ�: ");
	scanf("%d", &N);
	printf("�����͸� %d�� �Է��Ͻÿ�: ", N);
	int i;
	for (i = 0; i < N; i++) {
		scanf("%f", &data);
		M2 += data * data;
		E2 += data;
	}
	M2 = M2 / N;
	E2 = (E2 / N)*(E2 / N);
	std_dev = sqrt(M2 - E2);
	printf("ǥ������ = %f\n", std_dev);
}