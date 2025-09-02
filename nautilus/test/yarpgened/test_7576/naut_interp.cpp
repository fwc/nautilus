/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7576
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7576
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_3, val<unsigned int> var_7, val<unsigned short> var_8, val<signed char> var_9, val<int> zero, val<long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) >= (min((((/* implicit */val<unsigned long long int>) var_3)), (var_0))))))) / (var_7)));
    *var_13 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1841697577035659442ULL;
unsigned int var_3 = 2256998052U;
unsigned int var_7 = 186969383U;
unsigned short var_8 = (unsigned short)61210;
signed char var_9 = (signed char)-15;
int zero = 0;
long long int var_12 = 471553262747814880LL;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_8, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
