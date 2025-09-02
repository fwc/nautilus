/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3200
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
void test(val<signed char> var_3, val<int> var_4, val<bool> var_5, val<unsigned long long int> var_7, val<unsigned int> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<int> zero, val<signed char*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) var_5);
    *var_12 += ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (var_4) : (((var_9) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_3))))))) ? (var_10) : (((/* implicit */val<unsigned long long int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-34;
int var_4 = 1147639789;
bool var_5 = (bool)1;
unsigned long long int var_7 = 15952299850079133963ULL;
unsigned int var_8 = 2538887537U;
bool var_9 = (bool)1;
unsigned long long int var_10 = 12680117340127893554ULL;
int zero = 0;
signed char var_11 = (signed char)-59;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_8, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
