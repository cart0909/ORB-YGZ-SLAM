#ifndef GLOBAL_H
#define GLOBAL_H
#include "ThreadPool.h"
#include <memory>

namespace ygz {
extern std::unique_ptr<ThreadPool> thread_pool;
}
#endif
