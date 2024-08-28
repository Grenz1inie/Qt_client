#include "sqlite.h"


Sqlite::Sqlite(QObject *parent)
    : QObject{parent},query(db)
{
    /*初始化本地数据库*/
    db = QSqlDatabase::addDatabase("QSQLITE","default_connection");
    db.setDatabaseName("local.db");

    /*打开本地数据库*/
    if (!db.open())
    {
        qDebug() << "Failed to open database:" << db.lastError().text();
    }
    else
    {
        qDebug() << "Database opened successfully!";
    }

    /*链接请求队列的数据库*/
    query = QSqlQuery(QSqlDatabase::database("default_connection"));

    /*创建表*/
    if (!query.exec("CREATE TABLE IF NOT EXISTS client (name TEXT PRIMARY KEY)"))
    {
        qDebug() << "Failed to create table:" << query.lastError().text();
    }
    else
    {
        qDebug() << "Table created successfully!";
    }
}
