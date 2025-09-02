/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7462
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7462
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
void test(val<bool> var_0, val<unsigned long long int> var_5, val<short> var_6, val<long long int> var_7, val<unsigned int> var_9, val<int> zero, val<bool*> var_10, val<short*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 |= ((/* implicit */val<bool>) var_6);
    *var_11 = ((/* implicit */val<short>) var_9);
    *var_12 |= ((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) == ((-(var_7)))));
    *var_13 = ((val<unsigned long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_5 = 14119704012485823845ULL;
short var_6 = (short)30426;
long long int var_7 = 6644433395864501876LL;
unsigned int var_9 = 2251952650U;
int zero = 0;
bool var_10 = (bool)1;
short var_11 = (short)-25015;
long long int var_12 = -3396986931949805808LL;
unsigned long long int var_13 = 4495901900546591929ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (short)4618;
    value_mismatch |= var_12 != -3396986931949805808LL;
    value_mismatch |= var_13 != 14119704012485823845ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
