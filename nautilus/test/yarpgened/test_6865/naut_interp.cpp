/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6865
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_0, val<long long int> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<int> zero, val<long long int*> var_11, val<signed char*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) max(((~(min((((/* implicit */val<unsigned long long int>) var_0)), (9667613137770706954ULL))))), (((/* implicit */val<unsigned long long int>) (+(((66718156U) + (4228249139U))))))));
    *var_12 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) ((val<bool>) (!(var_10))))), (var_8)));
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) ((val<int>) min((var_9), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) 4228249112U)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2826539842U;
long long int var_8 = 5697701809165745637LL;
unsigned long long int var_9 = 1341812707813126867ULL;
bool var_10 = (bool)0;
int zero = 0;
long long int var_11 = -4729372288362694795LL;
signed char var_12 = (signed char)16;
signed char var_13 = (signed char)-108;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -2826539843LL;
    value_mismatch |= var_12 != (signed char)-27;
    value_mismatch |= var_13 != (signed char)-108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
