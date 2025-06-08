#ifndef OBJETOBD_H
#define OBJETOBD_H

#include <QtSql>

class ObjetoBD{
public:
    virtual QString& getInsertQuery() = 0;
    virtual QString& getUpdateQuery() = 0;
    virtual QString& getDeleteQuery() = 0;
};

#endif