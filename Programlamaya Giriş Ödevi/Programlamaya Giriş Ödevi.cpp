/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 1
**				ÖĞRENCİ ADI......: Yavuzhan ALBAYRAK
**				ÖĞRENCİ NUMARASI.: G201210008
**				DERS GRUBU.......: A
****************************************************************************/

#include <iostream>
using namespace std;
struct zaman {
	int saat;
	int dakika;			 // Zaman Structer'ı oluşturuldu.
	int saniye;
	long toplam_saniye;		
};
int main()
{
	
	zaman z1;
	string cevap;	// Gerekli değişkenler atandı.
	char ifade;		
	
	
	do {
		cout << "saat:dakika:saniye: ";  cin >> z1.saat >> ifade >> z1.dakika >> ifade >> z1.saniye;	//Zaman saat:dakika:saniye cinsinde kullanıcıdan istendi.
		
		
		
		if(z1.saat > 0 && z1.saat < 12 && z1.dakika < 60 && z1.saniye < 60 && z1.dakika > 0 && z1.saniye > 0)	//Girilen değerlerin doğruluğu kontrol edildi.
		{
			z1.toplam_saniye = z1.saat * 3600 + z1.dakika * 60 + z1.saniye * 1;		//Girilen değerler doğruysa toplam saniye hesaplaması yapıldı ve ekrana yazıldı.
			cout << "Girilen toplam saniye: " << z1.toplam_saniye << endl;

		}
		
		if (z1.saat < 0 || z1.saat > 12)
		{
			cout << "Girilen saat degeri " << z1.saat << " yanlis girilmistir." << endl;
		}
		if (z1.dakika < 0 || z1.dakika > 60)
		{
			cout << "Girilen dakika degeri " << z1.dakika << " yanlis girilmistir." << endl;		//Girilen değerlerde hata varsa hata ekrana yazdırıldı.
		}
		if (z1.saniye < 0 || z1.saniye > 60)
		{
			cout << "Girilen saniye degeri " << z1.saniye << " yanlis girilmistir." << endl;
		}
		


		cout << "Baska bir zaman girmek ister misiniz?" << endl;	//Programın devam edip etmeyeceği soruldu.
		cin >> cevap;
	
	} while (cevap!="hayir");	// Program devam ettirilmek istenirse program yeniden başlatıldı. 																				  
	
		
	






}

