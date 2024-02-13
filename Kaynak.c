#include <stdio.h>

int main() {

	char islem;
	double sayi1;
	double sayi2;
	double sonuc;
	
	printf("\nYapmak istediginiz iþlemi secin (+ - * /): ");
	scanf("%c", &islem);

	printf("Ilk sayiyi girin: ");
	scanf("%lf", &sayi1);

	printf("Ikinci sayiyi girin: ");
	scanf("%lf", &sayi2);

	switch (islem){
	case '+':
		sonuc = sayi1 + sayi2;
		printf("\n Sonuc: %.0lf", sonuc);
		break;

	case '-':
		sonuc = sayi1 - sayi2;
		printf("\n Sonuc: %.0lf", sonuc);
		break;
	
	case '*':
		sonuc = sayi1 * sayi2;
		printf("\n Sonuc: %.0lf", sonuc);
		break;
	
	case '/':
		sonuc = sayi1 / sayi2;
		printf("\n Sonuc: %.0lf", sonuc);
		break;

	default:
		printf("%c gecersiz bir islem!", islem);
		return 1;
	}
	return 0;
}