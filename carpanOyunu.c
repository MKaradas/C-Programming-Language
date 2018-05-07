#include <stdio.h> //Gerekli giris cikis parametreli icin kutuphane dosyamiz.
#include <stdlib.h>//Degisken ve tanimlar icin kutuphane dosyamiz
int main()//Programimizin temel iskeleti.
{
	printf("Programimiza Hosgeldiniz\n");  //printf fonksiyonumuzla ekrana gerekli mesajlari yazdirdik.
	printf("********************************\n");	
	int baslangicDegeri,	//int veri tipi ile foksiyonlarda kullanilicak parametreleri tanimladik.
		bitisDegeri,
		carpanDegeri, 
		ksonuc, // Kullanicinin girdigi sonuc
        esonuc, // Esas sonuc
		hataSayaci=3; //kullanicinin yaptigi hata sayisini saymak ve gerekli kurali asmamak icin bir sayac tanimladik.
		system("Color C");
	printf("Lutfen bitis degerini baslangic degerinden buyuk olarak giriniz!\n");
	printf("Lutfen carpan degerini 2-10 arasinda giriniz!\n");
	printf("**********************************************************\n");
	printf("Sirasiyla baslangic, bitis, ve carpan degerlerini giriniz:\n");
	
	scanf("%d %d %d",&baslangicDegeri,&bitisDegeri,&carpanDegeri);//Fonksiyonumuzla kullanicidan deger aldik
	
	if(bitisDegeri>baslangicDegeri && carpanDegeri>=2 && carpanDegeri<=10)//Kurallarimizi kosul seklinde tanimladik
	{
		
	

	
	
	while (bitisDegeri>baslangicDegeri) { //Dongumuzde baslangic degerinin bitis degerinden buyuk olmasi icin gerekli sartlari belirttik.
		printf("%d x %d sonucu nedir ?\n",baslangicDegeri,carpanDegeri); 
	    scanf("%d",&ksonuc);//Kullanicidan girilen baslangic ve carpan degerinin,carpma islemine gore sonucunu aldik.
	    esonuc=baslangicDegeri*carpanDegeri;//Esas sonucu hesapladik.
		if(ksonuc==esonuc)//Kullanicinin girdigi degeri esas degerle karsilastirdik.
		{
		baslangicDegeri=esonuc;//Soru bilindigi icin cevabu baslangicDegerine atadik.
		}
		else { //Kullanici yanlis yaptiginda sayaci güncelledik.
			printf("Yanlis bildiniz.Kalan hakkiniz %d \n",hataSayaci-1);//Uyarirken kullanicinin kalan hakkinin dogru belirtmesi icin hataSayaci-1 seklinde tanimladik. 
			hataSayaci--; //Hata sayacimiz 3olarak tanimlamistik her hata yaptiginda 1 azalttik ve 0 olunca sonlandirilmasini sagladik.
		}
		if(hataSayaci== 0) 	{ //3 defa yanlis girmesi halinde uyari verdik.
		printf("Oyunu kaybettiniz \n");
		break;	//Oyun bittigi icin dönguyu sonlandirip programi bitirdik.
		}
		if(baslangicDegeri>bitisDegeri){ //Oyunun kazanilmasi halinde kullaniciya kazandigini bildirdik.
			printf("Oyunu Kazandiniz\n");
		}
		
		
	}
	}
		else //Gerekli uyarilari bildirdik
	{
	printf("Lutfen bitis degerini baslangic degerinden buyuk olarak giriniz!\n");
	printf("Lutfen carpan degerini 2-10 arasinda giriniz!\n");	
	} 
	return 0;// Geriye herhangi bir deger dondurmedik.
}
