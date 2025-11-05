#include<stdio.h>
#include<unistd.h>

int bakiye = 25850;

int main (){

    int sifre, islem, islem_ucreti,kart=1, hatali_giris = 0, tutar,dongu;
    
    
    while (kart == 1 && hatali_giris <= 3)
    {
        

        printf("MERHABA ŞİFRENİZİ GİRİNİZ  (Çıkış yapmak için yalnızca '0️⃣' giriniz.):  ");
        scanf("%d", &sifre);

        if (sifre == 3458)
        {
            dongu = 1;   
            while (dongu==1)
            {

                if (sifre == 3458)
                {
                    printf("HOŞGELDİNİZ MEHMET BEY\n");
                    
                    printf("Yapmayı istediğiniz işlem nedir lütfen seçiniz\n");
                    printf("Para Çekme    = 1\n");
                    printf("Para Yatırma  = 2\n");
                    printf("Para Gönderme = 3\n");
                    printf("Borç Ödeme    = 4\n");
                    printf("Çıkış yapmak için = 0\n");

                    scanf("%d", &islem);

                    if (4 >= islem && islem >=1 )
                    {

                        switch (islem)
                        {
                        case 1:
                            printf("Çekmek istediğiniz tutarı giriniz: ");
                            scanf("%d", &tutar);
                            printf("İşleminiz gerçekleştiriliyor.\n");
                            sleep(2);
                            printf("İşleminiz gerçekleşti✅ \n ----------   Yeni hesap bakiyeniz %dTL    ----------\n\n\n", (bakiye-tutar));
                            kart=0;
                            break;
                        case 2:
                            printf("Yatırmak istediğiniz tutarı giriniz: ");
                            scanf("%d", &tutar);
                            printf("Parayı açılan alana bırakınız\n");
                            sleep(2);
                            printf("İşleminiz gerçekleşti✅ \n ----------   Yeni hesap bakiyeniz %dTL    ----------\n\n\n", (bakiye+tutar));
                            kart=0;
                            break;
                        case 3:
                            printf("Göndermek istediğiniz tutarı giriniz: ");
                            scanf("%d",&tutar);
                            sleep(1);
                            printf("İşleminiz gerçekleşti✅ \n ----------   Yeni hesap bakiyeniz %dTL    ----------\n\n\n",(bakiye-tutar));
                            kart=0;
                            break;
                        case 4:
                            printf("Ödemek istediğiniz borç miktarını giriniz: ");
                            scanf("%d", &tutar);
                            sleep(1);
                            printf("Tamamlandı ✅ \n ----------   Yeni hesap bakiyeniz %dTL    ----------\n\n\n", (bakiye-tutar));
                            kart=0;
                            break;
                        }

                    }
                    
                    else if(islem==0)
                    {
                        dongu = 0;
                    }

                    else{
                        printf("Hatalı seçim yaptınız tekrar deneyiniz.");
                    }

                }


            }
            
        }
        
        else if (sifre == 0)
            {
                kart--;
            }
        else
            hatali_giris++;
    
    
    }

    if (hatali_giris > 3)
    {
        printf("ÇOK FAZLA HATALI GİRİŞ YAPTINIZ KARTINIZ BLOKE EDİLDİ BANKANIZ İLE İLETİŞME GEÇİNİZ ❌\n");        
    }

    printf("---------------------------------       GÖRÜŞMEK ÜZERE👋      ---------------------------------");

    return 0;
    
}