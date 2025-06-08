#ifndef OBJETODB_H
#define OBJETODB_H

class ObjetoDB{
public:
    virtual void getInsertQuery() = 0;
    virtual void getUpdateQuery() = 0;
    virtual void getDeleteQuery() = 0;
};

#endif