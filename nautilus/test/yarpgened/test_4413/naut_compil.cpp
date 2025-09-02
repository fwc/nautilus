/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4413
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned long long int> var_0, val<bool> var_6, val<unsigned short> var_11, val<unsigned long long int> var_12, val<int> zero, val<long long int*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) ((var_6) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((val<signed char>) min((var_12), (var_0)))))));
    *var_16 = ((/* implicit */val<short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6098384347571234063ULL;
bool var_6 = (bool)1;
unsigned short var_11 = (unsigned short)12280;
unsigned long long int var_12 = 8642597333577314768ULL;
int zero = 0;
long long int var_15 = -2144880280577973229LL;
short var_16 = (short)11697;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 12280LL;
    value_mismatch |= var_16 != (short)12752;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_11, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
