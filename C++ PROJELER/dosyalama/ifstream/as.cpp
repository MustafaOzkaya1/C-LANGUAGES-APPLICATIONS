#include <iostream>
#include <ctime>

int main() {
  // Kullanýcýdan tarihi alýn
  std::string date_str;
  std::cout << "Lütfen tarihi girin (A/G/Y þeklinde): ";
  std::getline(std::cin, date_str);

  // Tarihi ay, gün ve yýl deðiþkenlerine ayýrýn
  int month, day, year;
  sscanf(date_str.c_str(), "%d/%d/%d", &month, &day, &year);

  // Tarihi tm nesnesine dönüþtürün
  tm date = {0};
  date.tm_year = year - 1900;
  date.tm_mon = month - 1;
  date.tm_mday = day;

  // Tarihin haftanýn hangi günü olduðunu bulun
  char weekday[20];
  strftime(weekday, sizeof weekday, "%A", &date);
  std::cout << "Girilen tarih, " << weekday << " günüdür." << std::endl;

  return 0;
}
