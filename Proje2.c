#include<stdio.h>//Gerekli giris cikis parametreleri icin kutuphanemiz.
#include<stdlib.h>//Degisken ve tanimlar icin kullandigimiz kutuphanemiz
#include<math.h>//Matematik ile ilgili formulleri,fonksiyonlari vs iceren kutuphanemiz.
#include <locale.h> //Türkçe Karakter Çiktisi Ýçin 



double aylikOdemeHesapla (double krediTutari, double faizOrani, double taksitSayisi)//Alt fonksiyonumuz.
{
		int 	taksitNo=1,//Taksit numarasi kusuratiý olmayacagi icin integer tanimlamayi tercih ettim.
				i=0;//Ayni sekilde sayacimizida.
					
		double 			a,				/*Dogru hesaplamalar yapmasi icin degiskenlerini double seklinde tanimladim.  */	
						toplamTaksit,
						aylikTaksit,
						toplamKrediOdemesi, 
						odenenFaiz,
						kalanBorc,
						odenenAnaParaTutari;
					
				 
				faizOrani=faizOrani*0.01;//Kullanici deger girerken virgülden kurtarmasi acisindan böyle bir hesap yaptim , ornegin 0,01 -1 _ 0,0112-1.12 seklinde.
				a=pow(1+faizOrani,taksitSayisi);//Formulun bu sekilde matematiksel fonksiyon yardimiyla yazilmasini daha dogru buldum.
				aylikTaksit=(krediTutari)*((faizOrani*a)/(a-1));//Formulumuz, bu sekilde ayliktaksitimizi yani taksit tutarimizi buldum.				
				odenenFaiz=((krediTutari)*(faizOrani));//Aylik ne kadar faiz odeniyor sorusunu bulmak icin bu formulden yola ciktim.				 
				kalanBorc=(krediTutari-(aylikTaksit-odenenFaiz));//Faiz borcdan düsmeyecegi icin bu sekilde yazdim.
				kalanBorc=krediTutari;//Dogru hesaplamayi yapmasi icin kreditutarini kalanborca atadim.
				
			printf("\nTaksit No  Taksit Tutarý  Ödenen Faiz Tutarý  Ödenen Ana Para Tutarý    Kalan Ana Para Borcu\n");//Sonuclari tablo sekilde yazmasi icin.
						for(taksitNo=1;taksitNo<taksitSayisi+1;) { //Dongumuzu taksit uzerinden dondurmeye karar verdim.
							odenenFaiz=(kalanBorc)*(faizOrani); //Odenen faizi kalan borc uzerinden hesapladim.
							odenenAnaParaTutari=aylikTaksit-odenenFaiz;//Aylik odenen parayi hesapladim.
							kalanBorc=kalanBorc-odenenAnaParaTutari;//Aylik odenen parayi kalan borcun uzerinden dustum.
							
						printf("%d  		%.2f		%.2f		       %.2f			%.2f\n",taksitNo,aylikTaksit,odenenFaiz,odenenAnaParaTutari,kalanBorc);//Degiskenleri yazdirmak icin gerekli düzenlemeleri yaptim.
								taksitNo++;//Dongumuz kac defa dondugunu,yeter kadar dondugunu anlamak icin sayacimiz.
						}
						
	
			toplamKrediOdemesi=(aylikTaksit*taksitSayisi);//Toplam kredi odememizi bulmak icin gerekli hesap.	
			printf("\nAylýk Ödemeniz=	 %.2f \nToplam Kredi Ödemesi=  %.2f \n",aylikTaksit,toplamKrediOdemesi);//Aylik odememizi ve toplam kredi odememiz gormek icin gerekli degiskenlerini ekrana yazdirdim.
	
		return 0;//Geriye deger dondurmesine gerek yok.
}

int main(void) //Ana fonksiyonumuz.
{	
			setlocale(LC_ALL,"Turkish");//Türkçe Karakter Çýktýsý Ýçin 



			int 	krediTutari, //Kredi tutarinin integer olmasinin daha avantajli olacagini düsündüm.
					taksitSayisi; //Taksit sayisi kusuratli olmayacagi icin integer olarak tanimlamayi mantikli buldum.
		
			double 	faizOrani;//Faiz oraninda genelde double,float tipi deger girildigi icin double olarak tanimlamak daha avantajli.
			
			
			printf("Toplam Kredi Miktari:");//Ekrana "arasindaki bilgiyi yazdirarak kullaniciyi dogru yönlendirdik.
			scanf("%d",&krediTutari);//Kullanicinin girdigi sayiyi degiskene atadik,integer olarak aldik,diger tiplerin gereksiz olacagini düsündüm.
			printf("Faiz Orani:");//Ekrana "arasindaki bilgiyi yazdirarak kullaniciyi dogru yönlendirdik.
			scanf("%lf",&faizOrani);//Kullanicinin girdigi sayiyi degiskene atadik , double olarak aldim formulu hesaplarken dogru hesaplamasi acisindan.
			printf("Taksit Sayisi:");//Ekrana "arasindaki bilgiyi yazdirarak kullaniciyi dogru yönlendirdik.
			scanf("%d",&taksitSayisi);//Kullanicinin girdigi sayiyi degiskene atadik,integer olarak aldik,diger tiplerin gereksiz olacagini düsündüm.
								
			aylikOdemeHesapla (krediTutari,faizOrani,taksitSayisi);//Alt fonksiyonumuzu cagirdik , kullanicinin girdigi degerler ile hesaplanmasini belirttik.
							
	return 0;//Geriye deger dondurmesine gerek yok , ana fonksiyon zaten.
}
