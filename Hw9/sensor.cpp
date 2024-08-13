#include "sensor.h"
#include <QRandomGenerator>
#include <QDebug>
#include<QVector>
#include <unistd.h>

Sensor::Sensor(QObject *parent)
    : QObject{parent}
{}

void Sensor::GenerateSignal(){
   int value1;
   int value2;
    for (auto i = 0; i <10; i++){
     value1 = QRandomGenerator::global()->bounded(INT_MAX);
     value2 = QRandomGenerator::global()->bounded(INT_MAX);
     emit CreateSignal(value1, value2);
     usleep(500000);
    }

}
