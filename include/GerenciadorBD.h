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

    static bool insert(const ObjetoDB& obj);

    static bool update(const ObjetoDB& obj);

    static bool remove(const ObjetoDB& obj);
};

#endif