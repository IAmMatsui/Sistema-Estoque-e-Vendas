#ifndef GERENCIADORBD_H
#define GERENCIADORBD_H

#include "ObjetoBD.h"
#include <QtSql>

class GerenciadorBD {
private:
    static QSqlDatabase db;

    static bool executarQuery(const QString& queryStr);

public:
    static bool conectar();

    static bool insert(const ObjetoBD& obj);

    static bool update(const ObjetoBD& obj);

    static bool remove(const ObjetoBD& obj);
};

#endif