using System;
namespace deneme
{
    class oyuncu
    {
        private string ad;
        private string mevki;
        private int savunma;
        private int atak;
        private int topSurme;
        private double deger;
        public void setAd(string adi)
        {
            ad = adi;
        }
        public void setMevki(string mevkisi)
        {
            mevki = mevkisi;
        }
        public void setYetenek(int sav, int atk, int ts)
        {
            savunma = sav;
            atak = atk;
            topSurme = ts;
            degerBelirle(sav,atk,ts);
        }
        public void calis(string konu)
        {
            if (konu == "savunma") savunma += 1;
            if (konu == "atak") atak += 1;
            if (konu == "topSurme") topSurme += 1;
            degerBelirle(savunma,atak,topSurme);
        }
        public void degerBelirle(int x,int y,int z)
        {
            deger = x * 0.3 + y * 0.4 + z * 0.5;
        }
        public double getDeger()
        {
            return deger;
        }
    }
    class Futbol
    {
        static void Main(string[] args)
        {
            int x, y, z;
            oyuncu oyuncu1 = new oyuncu(); //1. nesne üretiliyor
            oyuncu oyuncu2 = new oyuncu(); //2. nesne üretiliyor
            Console.Write("Oyuncunun  Adını giriniz: ");
            oyuncu1.setAd (Console.ReadLine());
            Console.Write("Oyuncunun  mevkisini giriniz: ");
            oyuncu1.setMevki(Console.ReadLine());
            Console.Write("Oyuncunun  yeteneklerini giriniz SAVUNMA: ");
            x = Convert.ToInt16(Console.ReadLine());
            Console.Write("Oyuncunun  yeteneklerini giriniz ATAK: ");
            y = Convert.ToInt16(Console.ReadLine());
            Console.Write("Oyuncunun  yeteneklerini giriniz TOP SÜRME: ");
            z = Convert.ToInt16(Console.ReadLine());

            oyuncu1.setYetenek(x,y,z);
        
            oyuncu2.calis("atak");
            Console.WriteLine("Oyuncu degeri:" + oyuncu1.getDeger() +
           " M$");
            Console.ReadKey();
        }
    }
}