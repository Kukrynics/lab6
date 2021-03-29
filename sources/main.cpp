// Copyright 2021 vlad <Kukrynics@yandex.ru>
#include "hash_calc.hpp"

int main(int, char*[]) {
  hash_calc A("/home/ivan/lab-06-multithreads/map.json");
  A.initLogs();
  A.initThreads();
  return 0;
}
