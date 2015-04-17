#ifndef SEMAPHORETHREADTEST_H
#define SEMAPHORETHREADTEST_H

#include <gtest/gtest.h>
#include <thread>
#include <pthread.h>
#include <vector>
#include "semaphore.h"
#include "runnable.h"
#include "test_task.h"

struct SemaphoreThreadTest : public ::testing::Test {
protected:
  SemaphoreThreadTest() : task(new Test_task) { }

  ~SemaphoreThreadTest() {
    delete task;
  }

  Test_task* task;
  std::vector<pthread_t> threads;
};

#endif // SEMAPHORETHREADTEST_H
