using System;

namespace cs_ilkel_yılan_oyunu
    {

    using System;
    namespace ConsoleApp1
    {
        class Program
        {
            static void Main(string[] args)
            {
                int satir = 50, sutun = 20;
                Console.SetWindowSize(100, 30);
                Console.SetCursorPosition(satir, sutun);
                char kr = (char)5;
                Console.Write(kr);
                while (true)
                {
                    ConsoleKey K;
                    K = (Console.ReadKey().Key);
                    if (K == ConsoleKey.UpArrow)
                    {
                        sutun--;

                        Console.WriteLine("^");
                        
                    }
                    if (K == ConsoleKey.DownArrow)
                    {
                        sutun++;
                        Console.WriteLine("v");

                    }
                    if (K == ConsoleKey.LeftArrow)
                    {
                        satir--;
                        Console.WriteLine("<");

                    }
                    if (K == ConsoleKey.RightArrow)
                    {
                        satir++;
                        Console.WriteLine(">");

                    }
                    Console.SetCursorPosition(satir, sutun);
                    Console.Write(kr);
                    if (K == ConsoleKey.Escape) Environment.Exit(0);
                }
            }
        }
    }
}

