using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SinifUygulamasi
{
    class Program
    {
        class karakter
        {
            private int savunma;
            private int saldiri;
            Random rnd = new Random();
            public karakter()
            {
                savunma = rnd.Next(100);
                saldiri = rnd.Next(100);
            }

            public int Savunma
            {
                get
                {
                    return savunma;
                }
                set
                {
                    savunma = value;
                }
            }

            public int Saldiri
            {
                get
                {
                    return saldiri;
                }
                set
                {
                    saldiri = value;
                }
            }
        }
        static void Main(string[] args)
        {
            Random rasgele = new Random();
            int sira = 0;
            int scoreMavi = 0, scoreKirmizi = 0;

            karakter maviTakim = new karakter();
            karakter kirmiziTakim = new karakter();

            while (true)
            {
                maviTakim.Saldiri = rasgele.Next(100);
                maviTakim.Savunma = rasgele.Next(100);
                kirmiziTakim.Saldiri = rasgele.Next(100);
                kirmiziTakim.Savunma = rasgele.Next(100);

                if (sira == 0)
                {
                    if (maviTakim.Saldiri > kirmiziTakim.Savunma)
                    {
                        scoreMavi++;
                        Console.WriteLine("Mavi Kazandı!" + maviTakim.Saldiri + "-" + kirmiziTakim.Savunma);
                    }
                    else
                    {
                        scoreKirmizi++;
                        Console.WriteLine("Kirmizi Kazandı" + maviTakim.Saldiri + "-" + kirmiziTakim.Savunma);
                    }
                }
                if (sira == 1)
                {
                    if (kirmiziTakim.Saldiri > maviTakim.Savunma)
                    {
                        scoreKirmizi++;
                        Console.WriteLine("Kirmizi Kazandı!" + kirmiziTakim.Saldiri + "-" + maviTakim.Savunma);
                    }
                    else
                    {
                        scoreMavi++;
                        Console.WriteLine("Mavi Kazandı" + kirmiziTakim.Saldiri + "-" + maviTakim.Savunma);
                    }
                }

                if (sira == 0) { sira = 1; } else { sira = 0; }
                if (scoreMavi + scoreKirmizi > 9) break;
            }

            Console.WriteLine("Mavi Takım : " + scoreMavi + " Kırmızı Takım : " + scoreKirmizi);
            Console.Read();
        }
    }
}
