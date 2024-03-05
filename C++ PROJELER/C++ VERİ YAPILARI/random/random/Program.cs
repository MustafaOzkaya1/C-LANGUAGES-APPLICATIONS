using System;

class Program
{
    static void Main()
    {
        // Kullanıcıdan kaç tane rasgele sayı istendiğini sor
        Console.Write("Kaç tane rasgele sayı istiyorsunuz? ");

        // Kullanıcının girdisi alınır
        if (int.TryParse(Console.ReadLine(), out int kacTane))
        {
            // Rasgele sayıları üret ve ekrana yazdır
            Random random = new Random();
            Console.WriteLine($"{kacTane} adet rasgele sayılar:");

            for (int i = 0; i < kacTane; i++)
            {
                int rasgeleSayi = random.Next(1,100);
                Console.WriteLine(rasgeleSayi);
            }
        }
        else
        {
            Console.WriteLine("Geçersiz giriş. Lütfen bir sayı girin.");
        }
    }
}


