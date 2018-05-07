#include "Global.h"

namespace ygz {
std::unique_ptr<ThreadPool> thread_pool = std::unique_ptr<ThreadPool>(new ThreadPool(2));
}
