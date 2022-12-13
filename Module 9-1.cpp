/*Задание 1. Время в пути
Что нужно сделать
Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC часов DD минут. Сколько часов и минут он находится в пути?

Напишите программу, которая принимает от пользователя две строки — время отправления и время прибытия поезда. Время задаётся строкой из пяти символов в формате HH:MM.
Обеспечьте контроль ввода, проверьте также, что время корректно.

Программа должна ответить, сколько часов и минут поезд находится в пути. Если время отправления больше времени прибытия, считайте, что поезд прибывает в пункт назначения на следующий день.

Пример выполнения

            Введите время отправления (HH:MM): 09:20
            Введите время прибытия (HH:MM): 10:20
            Поездка составила 1 ч. 0 мин.
            Введите время отправления (HH:MM): 09:20
            Введите время прибытия (HH:MM): 08:40
            Поездка составила 23 ч. 20 мин.

Что оценивается
Программа корректно считает и время внутри одного дня, и время поездки с прибытием на следующий день.
Обеспечен контроль ввода и по длине строк, и по вводимым символам.*/

#include <iostream>

int main() {

    std::string departureTime;
    std::cout << "Input the departure time in the format (HH:MM): ";
    std::cin >> departureTime;

    bool incorrectTime = true, incorrectFormat = true;
    int departureHours = 0, departureMinutes = 0;

    do 
    {
        if (departureTime.length() != 5 || departureTime[2] != ':') {
            std::cout << "Incorrect time format, input again: ";
            std::cin >> departureTime;
        }
        else {
            incorrectFormat = false;
        }

        departureHours = 10 * (departureTime[0] - '0') + (departureTime[1] - '0');
        departureMinutes = 10 * (departureTime[3] - '0') + (departureTime[4] - '0');

        if (departureHours > 24 || departureMinutes > 59) {
            std::cout << "Incorrect time, input again: ";
            std::cin >> departureTime;
        }
        else {
            incorrectTime = false;
        }
    } while (incorrectTime || incorrectFormat);

    std::string arrivalTime;
    std::cout << "Input the arrival time in the format (HH:MM): ";
    std::cin >> arrivalTime;

    incorrectTime = true, incorrectFormat = true;
    int arrivalHours = 0, arrivalMinutes = 0;

    do
    {
        if (arrivalTime.length() != 5 || arrivalTime[2] != ':') {
            std::cout << "Incorrect time format, input again: ";
            std::cin >> arrivalTime;
        }
        else {
            incorrectFormat = false;
        }

        arrivalHours = 10 * (arrivalTime[0] - '0') + (arrivalTime[1] - '0');
        arrivalMinutes = 10 * (arrivalTime[3] - '0') + (arrivalTime[4] - '0');

        if (arrivalHours > 24 || arrivalMinutes > 59) {
            std::cout << "Incorrect time, input again: ";
            std::cin >> arrivalTime;
        }
        else {
            incorrectTime = false;
        }
    } while (incorrectTime || incorrectFormat);





}