#ifndef DATABASES_DBSTRUCTURES_H
#define DATABASES_DBSTRUCTURES_H

#define MAX_RECORDS_AMOUNT 20

#pragma pack(1)
#include <stdbool.h>

typedef struct shop {
  int id;
  char address[70];
  int employeeId;
  bool isActive;
} shop;

#pragma pack(1)
typedef struct employee {
  int id;
  char firstName[30];
  char lastName[30];
  int colleagueId;
  bool isActive;
} employee;

#pragma pack(1)
typedef struct keyIndex {
  int key;
  unsigned long address;
} keyIndex;

#pragma pack(1)
typedef struct trashKeys {
  int shopsAmount;
  int employeesAmount;
  bool trashShops[MAX_RECORDS_AMOUNT];
  bool trashEmployees[MAX_RECORDS_AMOUNT];
} trashZoneData;

#endif // DATABASES_DBSTRUCTURES_H