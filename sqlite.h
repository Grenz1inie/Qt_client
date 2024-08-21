#ifndef SQLITE_H
#define SQLITE_H

#include <QObject>
#include<QDebug>
#include<QtSql>

class Sqlite : public QObject
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QSqlQuery query;
    explicit Sqlite(QObject *parent = nullptr);
signals:
};

#endif // SQLITE_H
