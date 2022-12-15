#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;

enum type {
    SUNNY,
    CLOUDY,
    RAINY,
    FOGGY,
    NONE
};

class Weather {

public:
    int day;
    string city;
    string country;
    float temp;
    int humidity;
    float windspeed;
    type weatherType;

    Weather() {
        day = 0;
        city = "0";
        country = "0";
        temp = 0;
        humidity = 0;
        windspeed = 0;
        weatherType = NONE;
    }

    Weather(int day, string city, string country, float temp, int humidity, float windspeed, type a) {
        this->day = day;
        this->city = city;
        this->country = country;
        this->temp = temp;
        this->humidity = humidity;
        this->windspeed = windspeed;
        this->weatherType = a;
    }

    ~Weather() {

    }
    void Print() {
        cout << "Day: " << day << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Temperature: " << temp << endl;
        cout << "Humidity: " << humidity << endl;
        cout << "Windspeed: " << windspeed << endl;
        cout << "Type: " << weatherType << endl;
    }

    void isLvivWeather() {
        if (humidity >= 80 && weatherType == RAINY) {
            cout << "Typical weather in Lviv" << endl;
        }
        else {
            cout << "You are lucky, man" << endl;
        }
    }
};

class Calendar {
public:
    Weather WeatherItem;

    vector <Weather> allDaysOfWeather;

    vector <Weather> addWeatherItem(Weather WeatherItem) {
        allDaysOfWeather.push_back(WeatherItem);
        return allDaysOfWeather;
    }


    float findMaxTemprature(int randomDay) {
        float maxTemp = 0;
        int daysFound = 0;

        for (int i = 0; i < allDaysOfWeather.size(); i++) {

            if (allDaysOfWeather[i].day == randomDay) {
                daysFound = 1;
                if (allDaysOfWeather[i].temp > maxTemp) {
                    maxTemp = allDaysOfWeather[i].temp;
                }
            }

        }
        if (daysFound == 0) {
            cout << "NOT ENOUGH DATA";
        }

        return maxTemp;

    }

    void bubbleSort()
    {
        int i, j;
        for (i = 0; i < allDaysOfWeather.size() - 1; i++) {

            for (j = 0; j < allDaysOfWeather.size() - i - 1; j++) {
                if (allDaysOfWeather[j].day > allDaysOfWeather[j + 1].day) {
                    swap(allDaysOfWeather[j], allDaysOfWeather[j + 1]);
                }
            }
        }
    }
    void PrintVector() {
        for (int i = 0; i < allDaysOfWeather.size(); i++) {
            cout << allDaysOfWeather[i].day << endl;
        }
    }


};