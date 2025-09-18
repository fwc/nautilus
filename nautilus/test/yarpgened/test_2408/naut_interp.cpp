/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2408
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
void test(val<short> var_0, val<int> var_2, val<long long int> var_4, val<long long int> var_7, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_0)), (var_7)));
    *var_12 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)0);
    *var_13 = ((/* implicit */val<int>) ((var_4) / (((/* implicit */val<long long int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6556;
int var_2 = 1380740041;
long long int var_4 = 8184119061684289286LL;
long long int var_7 = -3038617227575346767LL;
int zero = 0;
signed char var_11 = (signed char)-28;
unsigned long long int var_12 = 15486783306856521790ULL;
int var_13 = 630297281;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-79;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 1632375157;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, zero, &var_11, &var_12, &var_13);
  checksum();
}
