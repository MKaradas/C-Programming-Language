#include<stdio.h>//Gerekli giri� c�k�� parametreli i�in k�t�phane dosyam�z.
#include<stdlib.h>//De�i�ken ve tan�mlar i�in k�t�phane dosyam�z.
#include<time.h>//S�re ile ilgili k�t�phanemiz.
#include<conio.h>//Giri� ��k�� icin k�t�phanemiz.
#include<locale.h> //T�rk�e karakter �iktisi ��in gerekli k�t�phanemiz
int main()//Ana fonksiyonumuz.
{ git:
	setlocale(LC_ALL,"Turkish");//T�rk�e Karakter ��kt�s� ��in 
	int i=0,j=0,x=0,y=1,v,z,kalanHak=3,yilan[x][y],yem[v][z];//Gerekli tan�mlamalar ve �ift boyutlu dizilerimiz
	
	char hareketTusu;//Hareket ederken w,a,s,d tu�lar�ndan birine basaca��m�z i�in char karakter de�i�keni olarak tan�mlad�m.
	
	time_t start,end;//S�re ba�lang�c� ve bitis icin gerekli tan�m.
	time (&start);//S�remizi ba�latt�k.
		srand(time(NULL));//Yemimizin yerinin de�i�ken olmas� i�in sistem saati ile rastgele �retilen sayi,
		v=rand()%10;
		z=rand()%10;
		
	while(1){//Oyunun s�rekli oynanabilmesi i�in sonsuz d�ng�m�z� ba�lat�yoruz.
		if(difftime(end,start)<120)//E�er s�remiz 120 (2dakika) saniyeden 
		{
		printf("Y�lan Oyununa Ho�geldiniz ,hareket i�in w-a-s-d tu�lar�n� kullan�n�z.\n");//Ho�geldiniz mesaj�
					
	//A�a��da 12 x 12 boyutlu tahtam�z� �izdiriyoruz.
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
		
		scanf("%c",&hareketTusu);//Y�lan�n nas�l hareket edece�i bilgisini kullan�c�dan al�yoruz.
		
		if(hareketTusu=='q' || hareketTusu=='Q') //E�er kullan�c� oyundan ��kmak isterse q tu�una bast��� zaman if ko�ulumuz ile anl�yoruz.
		{
			goto bit;//Tekrar olmas� i�in gereken parametre.
		}
		
	if(hareketTusu=='w' || hareketTusu=='W'){//E�er hareket tu�umuz W veya w ise if ko�uluna girer.
		x=x-1;
		if(x<0){//Gerekli �artlar
			kalanHak=kalanHak-1;//E�er duvara �arparsak ,kalan hak say�m�z� azalt�yoruz.
			printf("Duvara �arpt�n�z!,Kalan Hak= %d\n",kalanHak);//Uyar� mesaj�.
			x=0,y=1;
			if(kalanHak==0){//Hi� hakk�m�z kalmazsa oyunu kesiyoruz.
				printf("Ba�ar�s�z �� hakk�n�z� tamamlad�n�z!\n");//Hakk�m�z kalmazsa uyar� mesaj� veriyoruz.
				break;//E�er 3 defa duvara �arparsak oyunu kesiyoruz.
			}
		}
		if(x==v && y==z) {//E�er y�lan ile yemimizin konumu ayn� ise oyun kazan�l�r.
			printf("Tebrikler Kazand�n�z!Oyun ba�ar�l� bir �ekilde tamamland�\n");//Kazan�rsak tebrik mesaj�.
			break;//Oyunu kazan�rsak kesiyoruz.
			}
			
	}
	if(hareketTusu=='s' || hareketTusu=='S'){//E�er hareket tu�umuz S veya s ise if ko�uluna girer.
		x=x+1;
		if(x>9){//Gerekli �artlar
			kalanHak=kalanHak-1;//E�er duvara �arparsak ,kalan hak say�m�z� azalt�yoruz.
			printf("Duvara �arpt�n�z,Kalan Hak = %d\n",kalanHak);//Uyar� mesaj�.
			x=0,y=1;
			if(kalanHak==0){//Hi� hakk�m�z kalmazsa oyunu kesiyoruz.
				printf("Ba�ar�s�z �� hakk�n�z� tamamlad�n�z!\n");//Hakk�m�z kalmazsa uyar� mesaj� veriyoruz.
				break;//E�er 3 defa duvara �arparsak oyunu kesiyoruz.
			}
		}
		if(x==v && y==z) {//E�er y�lan ile yemimizin konumu ayn� ise oyun kazan�l�r.
			printf("Tebrikler Kazand�n�z!Oyun ba�ar�l� bir �ekilde tamamland�\n");//Kazan�rsak tebrik mesaj�.
			break;//Oyunu kazan�rsak kesiyoruz.
			}
	}
	if(hareketTusu=='d' || hareketTusu=='D'){//E�er hareket tu�umuz D veya d ise if ko�uluna girer.
		y=y+1;
		if(y>9){//Gerekli �artlar
			kalanHak=kalanHak-1;//E�er duvara �arparsak ,kalan hak say�m�z� azalt�yoruz.
			printf("Duvara �arpt�n�z!,Kalan Hak = %d\n",kalanHak);//Uyar� mesaj�.
			x=0,y=1;
			if(kalanHak==0){//Hi� hakk�m�z kalmazsa oyunu kesiyoruz.
				printf("Ba�ar�s�z �� hakk�n�z� tamamlad�n�z!\n");//Hakk�m�z kalmazsa uyar� mesaj� veriyoruz.
				break;//E�er 3 defa duvara �arparsak oyunu kesiyoruz.
			}
		}
			if(x==v && y==z) {//E�er y�lan ile yemimizin konumu ayn� ise oyun kazan�l�r.
			printf("Tebrikler Kazand�n�z!Oyun ba�ar�l� bir �ekilde tamamland�\n\a");//Kazan�rsak tebrik mesaj�.
			break;//Oyunu kazan�rsak kesiyoruz.
			}
		system("cls");//Ekran�m�z� temizlemeye yarar, daha g�zel bir g�r�nt� i�in kulland�m.	
	}
	if(hareketTusu=='a' || hareketTusu=='A'){//E�er hareket tu�umuz A veya a ise if ko�uluna girer.
		y=y-1;
		if(y<0){//Gerekli �artlar
			kalanHak=kalanHak-1;//E�er duvara �arparsak ,kalan hak say�m�z� azalt�yoruz.
			printf("Duvara �arpt�n�z!,Kalan Hak = %d\n",kalanHak);//Uyar� mesaj�.
			x=0,y=1;
			if(kalanHak==0){//Hi� hakk�m�z kalmazsa oyunu kesiyoruz.
				printf("Ba�ar�s�z �� hakk�n�z� tamamlad�n�z!\n");//Hakk�m�z kalmazsa uyar� mesaj� veriyoruz.
				break;//E�er 3 defa duvara �arparsak oyunu kesiyoruz.
			}
		}
				if(x==v && y==z) { //E�er y�lan ile yemimizin konumu ayn� ise oyun kazan�l�r.
				printf("Tebrikler Kazand�n�z!Oyun ba�ar�l� bir �ekilde tamamland�\n");//Kazan�rsak tebrik mesaj�.
				break;//Oyunu kazan�rsak kesiyoruz.
				}
	}
	
 
	
	
	}
	time(&end);//S�remizi durduruyoruz.
	if(difftime(end,start)>120)//S�re i�in gerekli �artlar
	{
		printf("\nSize verilen s�rede oyunu tamamlayamad�n�z!\n");//E�er s�re a��m� olursa gerekli uyar� mesaj� ekrana yazd�r�yoruz.
		break;//S�re a��m� olursa oyunu durduruyoruz.
	}
	system("cls");////Ekran�m�z� temizlemeye yarar, daha g�zel bir g�r�nt� i�in kulland�m.
	}
	getch();//Tekrar olmas� i�in gereken parametre.
	goto git;//Tekrar olmas� i�in gereken parametre.
	
	bit://Tekrar olmas� i�in gereken parametre.
	return 0;//Geriye de�er d�nd�rmeyece�imiz i�in 0 de�erini yaz�yoruz.
}
