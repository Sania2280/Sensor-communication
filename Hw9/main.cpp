#include <QCoreApplication>
#include "sensor.h"
#include "sensormetric.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Sensor * sens = new Sensor();
    SensorMetric * metric = new SensorMetric();


    QObject::connect(sens, &Sensor::CreateSignal, metric, &SensorMetric::Target);


    sens -> GenerateSignal();


    return a.exec();
}
