#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>

class Sensor : public QObject
{
    Q_OBJECT
public:
    explicit Sensor(QObject *parent = nullptr);
    void GenerateSignal();

signals:
    void CreateSignal(int value1, int value2);

};

#endif // SENSOR_H
