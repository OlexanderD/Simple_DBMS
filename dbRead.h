#ifndef DATABASES_DBREAD_H
#define DATABASES_DBREAD_H

#include "dbStructures.h"
#include "dbFilesHandler.h"

shop getM();

void getS();

void getAll();

int getKeyFromUser(dbFiles fileType);

bool readIndices(keyIndex *indices, int size);

shop getShopByKey(keyIndex indices[], int arrSize, int userKey);

#endif //DATABASES_DBREAD_H