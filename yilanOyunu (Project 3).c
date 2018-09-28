#include<stdio.h>//Gerekli giriþ cýkýþ parametreli için kütüphane dosyamýz.
#include<stdlib.h>//Deðiþken ve tanýmlar için kütüphane dosyamýz.
#include<time.h>//Süre ile ilgili kütüphanemiz.
#include<conio.h>//Giriþ çýkýþ icin kütüphanemiz.
#include<locale.h> //Türkçe karakter çiktisi Ýçin gerekli kütüphanemiz
int main()//Ana fonksiyonumuz.
{ git:
	setlocale(LC_ALL,"Turkish");//Türkçe Karakter Çýktýsý Ýçin 
	int i=0,j=0,x=0,y=1,v,z,kalanHak=3,yilan[x][y],yem[v][z];//Gerekli tanýmlamalar ve çift boyutlu dizilerimiz
	
	char hareketTusu;//Hareket ederken w,a,s,d tuþlarýndan birine basacaðýmýz için char karakter deðiþkeni olarak tanýmladým.
	
	time_t start,end;//Süre baþlangýcý ve bitis icin gerekli taným.
	time (&start);//Süremizi baþlattýk.
		srand(time(NULL));//Yemimizin yerinin deðiþken olmasý için sistem saati ile rastgele üretilen sayi,
		v=rand()%10;
		z=rand()%10;
		
	while(1){//Oyunun sürekli oynanabilmesi için sonsuz döngümüzü baþlatýyoruz.
		if(difftime(end,start)<120)//Eðer süremiz 120 (2dakika) saniyeden 
		{
		printf("Yýlan Oyununa Hoþgeldiniz ,hareket için w-a-s-d tuþlarýný kullanýnýz.\n");//Hoþgeldiniz mesajý
					
	//Aþaðýda 12 x 12 boyutlu tahtamýzý çizdiriyoruz.
	printf(" ");
	for(i=0;i<10;i++)
	{
			printf("_");
	}
	printf("\n");
	
	for(i=0;i<11;i++)
	{
		printf("|");
				
		if(i<10)
		{
			for(j=0;j<10;j++) {
					if(i==x && j==y) {
					printf("X");	
					}
					else if(i==v && j==z)
					printf("*");
					else			
					printf(".");	
			}
		}
		else
		{
			for(j=0;j<10;j++)
			{
				printf("_");
		
			}
		}
		printf("|\n");
	}
		
		scanf("%c",&hareketTusu);//Yýlanýn nasýl hareket edeceði bilgisini kullanýcýdan alýyoruz.
		
		if(hareketTusu=='q' || hareketTusu=='Q') //Eðer kullanýcý oyundan çýkmak isterse q tuþuna bastýðý zaman if koþulumuz ile anlýyoruz.
		{
			goto bit;//Tekrar olmasý için gereken parametre.
		}
		
	if(hareketTusu=='w' || hareketTusu=='W'){//Eðer hareket tuþumuz W veya w ise if koþuluna girer.
		x=x-1;
		if(x<0){//Gerekli þartlar
			kalanHak=kalanHak-1;//Eðer duvara çarparsak ,kalan hak sayýmýzý azaltýyoruz.
			printf("Duvara Çarptýnýz!,Kalan Hak= %d\n",kalanHak);//Uyarý mesajý.
			x=0,y=1;
			if(kalanHak==0){//Hiç hakkýmýz kalmazsa oyunu kesiyoruz.
				printf("Baþarýsýz üç hakkýnýzý tamamladýnýz!\n");//Hakkýmýz kalmazsa uyarý mesajý veriyoruz.
				break;//Eðer 3 defa duvara çarparsak oyunu kesiyoruz.
			}
		}
		if(x==v && y==z) {//Eðer yýlan ile yemimizin konumu ayný ise oyun kazanýlýr.
			printf("Tebrikler Kazandýnýz!Oyun baþarýlý bir þekilde tamamlandý\n");//Kazanýrsak tebrik mesajý.
			break;//Oyunu kazanýrsak kesiyoruz.
			}
			
	}
	if(hareketTusu=='s' || hareketTusu=='S'){//Eðer hareket tuþumuz S veya s ise if koþuluna girer.
		x=x+1;
		if(x>9){//Gerekli þartlar
			kalanHak=kalanHak-1;//Eðer duvara çarparsak ,kalan hak sayýmýzý azaltýyoruz.
			printf("Duvara Çarptýnýz,Kalan Hak = %d\n",kalanHak);//Uyarý mesajý.
			x=0,y=1;
			if(kalanHak==0){//Hiç hakkýmýz kalmazsa oyunu kesiyoruz.
				printf("Baþarýsýz üç hakkýnýzý tamamladýnýz!\n");//Hakkýmýz kalmazsa uyarý mesajý veriyoruz.
				break;//Eðer 3 defa duvara çarparsak oyunu kesiyoruz.
			}
		}
		if(x==v && y==z) {//Eðer yýlan ile yemimizin konumu ayný ise oyun kazanýlýr.
			printf("Tebrikler Kazandýnýz!Oyun baþarýlý bir þekilde tamamlandý\n");//Kazanýrsak tebrik mesajý.
			break;//Oyunu kazanýrsak kesiyoruz.
			}
	}
	if(hareketTusu=='d' || hareketTusu=='D'){//Eðer hareket tuþumuz D veya d ise if koþuluna girer.
		y=y+1;
		if(y>9){//Gerekli þartlar
			kalanHak=kalanHak-1;//Eðer duvara çarparsak ,kalan hak sayýmýzý azaltýyoruz.
			printf("Duvara Çarptýnýz!,Kalan Hak = %d\n",kalanHak);//Uyarý mesajý.
			x=0,y=1;
			if(kalanHak==0){//Hiç hakkýmýz kalmazsa oyunu kesiyoruz.
				printf("Baþarýsýz üç hakkýnýzý tamamladýnýz!\n");//Hakkýmýz kalmazsa uyarý mesajý veriyoruz.
				break;//Eðer 3 defa duvara çarparsak oyunu kesiyoruz.
			}
		}
			if(x==v && y==z) {//Eðer yýlan ile yemimizin konumu ayný ise oyun kazanýlýr.
			printf("Tebrikler Kazandýnýz!Oyun baþarýlý bir þekilde tamamlandý\n\a");//Kazanýrsak tebrik mesajý.
			break;//Oyunu kazanýrsak kesiyoruz.
			}
		system("cls");//Ekranýmýzý temizlemeye yarar, daha güzel bir görüntü için kullandým.	
	}
	if(hareketTusu=='a' || hareketTusu=='A'){//Eðer hareket tuþumuz A veya a ise if koþuluna girer.
		y=y-1;
		if(y<0){//Gerekli þartlar
			kalanHak=kalanHak-1;//Eðer duvara çarparsak ,kalan hak sayýmýzý azaltýyoruz.
			printf("Duvara Çarptýnýz!,Kalan Hak = %d\n",kalanHak);//Uyarý mesajý.
			x=0,y=1;
			if(kalanHak==0){//Hiç hakkýmýz kalmazsa oyunu kesiyoruz.
				printf("Baþarýsýz üç hakkýnýzý tamamladýnýz!\n");//Hakkýmýz kalmazsa uyarý mesajý veriyoruz.
				break;//Eðer 3 defa duvara çarparsak oyunu kesiyoruz.
			}
		}
				if(x==v && y==z) { //Eðer yýlan ile yemimizin konumu ayný ise oyun kazanýlýr.
				printf("Tebrikler Kazandýnýz!Oyun baþarýlý bir þekilde tamamlandý\n");//Kazanýrsak tebrik mesajý.
				break;//Oyunu kazanýrsak kesiyoruz.
				}
	}
	
 
	
	
	}
	time(&end);//Süremizi durduruyoruz.
	if(difftime(end,start)>120)//Süre için gerekli þartlar
	{
		printf("\nSize verilen sürede oyunu tamamlayamadýnýz!\n");//Eðer süre aþýmý olursa gerekli uyarý mesajý ekrana yazdýrýyoruz.
		break;//Süre aþýmý olursa oyunu durduruyoruz.
	}
	system("cls");////Ekranýmýzý temizlemeye yarar, daha güzel bir görüntü için kullandým.
	}
	getch();//Tekrar olmasý için gereken parametre.
	goto git;//Tekrar olmasý için gereken parametre.
	
	bit://Tekrar olmasý için gereken parametre.
	return 0;//Geriye deðer döndürmeyeceðimiz için 0 deðerini yazýyoruz.
}
