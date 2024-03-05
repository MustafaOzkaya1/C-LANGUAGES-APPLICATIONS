class Dikdortgen
{
    private int Alan(int a, int b)
    {
        return a * b;
    }

    static void Main()
    {
        Dikdortgen d1 = new Dikdortgen();
        int en = 5;
        int boy = 6;
        int sonuc = d1.Alan(en, boy);
        Console.WriteLine(sonuc);

        Console.ReadKey();
    }
}