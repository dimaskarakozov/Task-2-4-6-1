﻿// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float q, w;
    int e;
    int a, s, d, z, x, c;
    /*
    //прога #2
    printf("\n\n\n\n(1) Даны числа x, y. Проверить истинность высказывания: «Точка с координатами (x, y) лежит в заштрихованной области».(Квадрат минус  ромб, квадрат минус круг и I четверть)");
    printf("\nВведите координаты точки(x:y)(дробную часть выделять запятыми): ");
    scanf_s("%f:%f", &q, &w);



    if (
        (q > 2 - abs(w)) && (q < -2 + abs(w)) && (abs(q) < 2) && (abs(w) < 2)
        //находим формулу функций по значению их графиков
        )
    {
        printf("Точка входит в первый рисунок\n");//определяем принадлежность
    }
    else {
        printf("Точка не входит в первый рисунок\n");
    };
    if (
        ((q * q + w * w >= 4) && !(q >= 0 && w >= 0)) && (abs(q) < 2) && (abs(w) < 2)
        )
    {
        printf("Точка  входит во второй рисунок\n");
    }
    else {
        printf("Точка не входит во второй рисунок\n");
    };

    */


    //прога #4
    printf("\n\n\n\n(1) Даны длины сторон двух треугольников. Определить подобны ли эти треугольники.");
    printf("\nВведите длину всех трех сторон первого треугольника (через пробел) ");
    scanf_s("%d", &a);
    scanf_s("%d", &s);
    scanf_s("%d", &d);


    if (a > s && a > d) //первое число наибольшее
    {
        if (d > s) // 1>3>2
        {
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3
        }
        // если 1>2>3 , ничего менять не нужно

    }
    else if (s > a && s > d) //второе число наибольшее
    {
        if (a > d) //2>1>3
        {
            e = s;
            s = a;
            a = e;  //меняю местами 2 и 1

        }
        else {      //2>3>1
            e = s;
            s = a;
            a = e; //меняю местами 2 и 1
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3

        }


    }
    else { //третье число наибольшее

        if (a > s) //3>1>2
        {
            e = d;
            d = a;
            a = e;  //меняю местами 3 и 1
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3
        }
        else {//3>2>1
            e = d;
            d = a;
            a = e;  //меняю местами 3 и 1

        }

    }
    z = a; x = s; c = d;
     printf("\n %d %d %d",z,x,c);  //проверочка, УБРАТЬ В ГОТОВОМ КОДЕ!!!
    printf("\nВведите длину всех трех сторон второго треугольника (через пробел) ");
    scanf_s("%d", &a);
    scanf_s("%d", &s);
    scanf_s("%d", &d);
    if (a > s && a > d) //первое число наибольшее
    {
        if (d > s) // 1>3>2
        {
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3
        }
        // если 1>2>3 , ничего менять не нужно

    }
    else if (s > a && s > d) //второе число наибольшее
    {
        if (a > d) //2>1>3
        {
            e = s;
            s = a;
            a = e;  //меняю местами 2 и 1

        }
        else {      //2>3>1
            e = s;
            s = a;
            a = e; //меняю местами 2 и 1
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3

        }


    }
    else { //третье число наибольшее

        if (a > s) //3>1>2
        {
            e = d;
            d = a;
            a = e;  //меняю местами 3 и 1
            e = d;
            d = s;
            s = e; // меняю местами 2 и 3
        }
        else {//3>2>1
            e = d;
            d = a;
            a = e;  //меняю местами 3 и 1

        }

    }

    printf("\n %d %d %d\n", a, s, d);  //проверочка, УБРАТЬ В ГОТОВОМ КОДЕ!!!
    if ( float(a) / float(z) == float(s) / float(x) && float(s) / float(x) == float(d) / float(c))
    {
        printf("Подобны");
    }
    else {
        printf("Не подобны");
    }


    //прога #6-1
    printf("\n\n\n\n(1) Дано целое число в диапазоне 20–69, определяющее возраст (в годах). Вывести строку-описание указанного возраста, обеспечив правильное согласование числа со словом «год», например: 20 — «двадцать лет», 32 —«тридцать два года», 41 — «сорок один год».");
    printf("Введите число c 20-69 ");
    scanf_s("%d", &e);
    switch (e / 10)
    {
    case 2: printf("двадцать ");
        break;
    case 3: printf("тридцать ");
        break;
    case 4: printf("сорок ");
        break;
    case 5: printf("пятьдесят ");
        break;
    case 6: printf("шестьдесят ");
        break;
    }
    switch (e % 10)
    {
    case 1: printf("один год");
        break;
    case 2: printf("два");
        break;
    case 3: printf("три");
        break;
    case 4: printf("четыре");
        break;
    case 5: printf("пять");
        break;
    case 6: printf("шесть");
        break;
    case 7: printf("семь");
        break;
    case 8: printf("восемь");
        break;
    case 9: printf("девять");
        break;
    case 0: printf("девять");
        break;
    }
    switch (e % 10)
    {
    case 1: printf(" год"); break;	
    case 2:
    case 3:
    case 4: printf(" года"); break;
    defoult:printf(" лет");
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
