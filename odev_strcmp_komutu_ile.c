#include<stdio.h>
#include<unistd.h>
#include<string.h>


int main ()
{
   int sayi_x, sayi_y, matematiksel_dogrulama=1;
   int hatali_giris;
   char exit, sabit_sifre[30]="Giris123",alinan_sifre[30]=" ";


   while (exit!='q')
   {
       matematiksel_dogrulama++;


       printf("\nProgramdan çıkış yapmak için ('q') tuşuna basınız devam etmek için herhangi bir tuşa basınız: ");
       scanf(" %c", &exit );


       if (exit != 'q' && matematiksel_dogrulama !=0)
       {
           printf("\nİlk sayıyı giriniz lütfen: ");
           scanf(" %d", &sayi_x);


           printf("\nİkinci sayıyı giriniz lütfen: ");
           scanf(" %d", &sayi_y);


           if ((sayi_x*sayi_y)>100 && (sayi_x+sayi_y<50))
           {
               printf("\nMatematiksel Doğrulama Başarılı! Şifre Kontrolüne Geçiliyor.\n");  
               sleep(1);


               for (hatali_giris=3; hatali_giris != 0; hatali_giris--)
               {
                   printf("\nLütfen Şifrenizi giriniz: ");
                   scanf(" %s", &alinan_sifre);

                   if (strcmp(sabit_sifre, alinan_sifre)==0)
                   {         
                        printf("\nGiriş Tamamlandı! Sisteme Hoş Geldiniz!\n");
                        printf("\n------------------------------ GÖREV TAMAMLANDI------------------------------  \n");
                        break;
                   }
                   else
                   {
                       int kalan = hatali_giris-1;
                       printf("\nHatalı şifre.\n Kalan deneme: %d \n", kalan);
                   }


                   /*
                   int flg = 0;
                   for (int i = 0; i < strlen(sabit_sifre); i++)
                   {
                       for (int j = 0; j < strlen(sabit_sifre); j++)
                       {
                           if (sabit_sifre[i] == alinan_sifre[j])
                           {
                               flg++;
                               break;
                           }
                       }
                   }


                   if (flg == 8)
                   {
                       printf("\nGiriş Tamamlandı! Sisteme Hoş Geldiniz!\n");
                       printf("\n------------------------------ GÖREV TAMAMLANDI------------------------------  \n");
                       break;
                   }
                   else
                   {
                       int kalan = hatali_giris-1;
                       printf("\nHatalı şifre.\n Kalan deneme: %d \n", kalan);
                   }
                       */
               }
                   
               if (hatali_giris==0)
               {
                   printf("\nÇok fazla hatalı giriş yaptınız.\n");
               }
           }
           else{
               printf("\nMatematiksel Doğrulama Hatalı. Ana menüye dönülüyor. \n ");
               sleep(1);
               matematiksel_dogrulama = 0;
           }
       }
   }
   printf("\n---------------------------------    ÇIKIŞ YAPILIYOR   GÖRÜŞMEK ÜZERE      ---------------------------------\n");
   return 0;  
}