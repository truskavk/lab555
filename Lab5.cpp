#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <optional>
using namespace std;

int main() {
    Weather day1(5, "Chernivtsi", "Ukraine", 2, 60, 6, SUNNY);
    Weather day2(5, "Kharkiv", "Ukraine", 17, 140, 4, RAINY);
    Weather day3(5, "Kyiv", "Ukraine", 22, 70, 1, FOGGY);
    Weather day4(3, "Kyiv", "Ukraine", 41, 100, 3, RAINY);
    Weather day5(3, "Kharkiv", "Ukraine", 23, 50, 3, CLOUDY);
    Weather day6(3, "Lviv", "Ukraine", 5, 120, 9, SUNNY);
    Weather day7(1, "Kyiv", "Ukraine", 9, 30, 23, RAINY);
    Weather day8(1, "Lviv", "Ukraine", 3, 90, 1, RAINY);

    Calendar Calendar;
    Calendar.addWeatherItem(day1);
    Calendar.addWeatherItem(day6);
    Calendar.addWeatherItem(day4);
    Calendar.addWeatherItem(day8);
    Calendar.addWeatherItem(day3);
    Calendar.addWeatherItem(day7);
    Calendar.addWeatherItem(day2);
    Calendar.addWeatherItem(day5);
    day1.Print();
    day1.isLvivWeather();
    Calendar.bubbleSort();
    Calendar.PrintVector();
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(5) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(3) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(1) << endl;





}