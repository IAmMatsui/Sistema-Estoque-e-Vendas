#include "GerenciadorDB.h"

QSqlDatabase BDManager::db;

static bool GerenciadorBD::conectar(){
    //código pra conectar
    return true;
}

static bool GerenciadorBD::executarQuery(const QString& queryStr) {
    QSqlQuery query;
    if (!query.exec(queryStr)) {
        return false;
    }
    return true;
}

static bool GerenciadorBD::insert(const ObjetoDB& obj){
    return executarQuery(obj.getInsertQuery());
}

static bool GerenciadorBD::update(const ObjetoDB& obj){
    return executarQuery(obj.getUpdateQuery());
}

static bool GerenciadorBD::remove(const ObjetoDB& obj){
    return executarQuery(obj.getDeleteQuery());
}