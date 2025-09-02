/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8476
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8476
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
void test(val<unsigned long long int> var_2, val<unsigned short> var_3, val<unsigned long long int> var_10, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<bool>) var_10);
    *var_14 = ((/* implicit */val<bool>) ((var_2) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3159223127506877038ULL;
unsigned short var_3 = (unsigned short)27629;
unsigned long long int var_10 = 4648605181356506499ULL;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
