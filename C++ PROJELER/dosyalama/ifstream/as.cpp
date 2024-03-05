#include <iostream>
#include <ctime>

int main() {
  // Kullan�c�dan tarihi al�n
  std::string date_str;
  std::cout << "L�tfen tarihi girin (A/G/Y �eklinde): ";
  std::getline(std::cin, date_str);

  // Tarihi ay, g�n ve y�l de�i�kenlerine ay�r�n
  int month, day, year;
  sscanf(date_str.c_str(), "%d/%d/%d", &month, &day, &year);

  // Tarihi tm nesnesine d�n��t�r�n
  tm date = {0};
  date.tm_year = year - 1900;
  date.tm_mon = month - 1;
  date.tm_mday = day;

  // Tarihin haftan�n hangi g�n� oldu�unu bulun
  char weekday[20];
  strftime(weekday, sizeof weekday, "%A", &date);
  std::cout << "Girilen tarih, " << weekday << " g�n�d�r." << std::endl;

  return 0;
}
