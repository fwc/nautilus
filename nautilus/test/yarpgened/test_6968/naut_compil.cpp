/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6968
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6968
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
void test(val<int> var_0, val<signed char> var_6, val<int> var_8, val<short> var_10, val<unsigned long long int> var_11, val<unsigned short> var_12, val<bool> var_13, val<int> zero, val<int*> var_14, val<signed char*> var_15, val<long long int*> var_16) {
    *var_14 |= ((val<int>) var_6);
    *var_15 = ((/* implicit */val<signed char>) ((val<short>) ((((/* implicit */val<bool>) ((var_13) ? (((/* implicit */val<unsigned long long int>) 296152625)) : (var_11)))) ? (var_0) : (((/* implicit */val<int>) var_10)))));
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (var_8) : (((/* implicit */val<int>) ((val<signed char>) var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2047329269;
signed char var_6 = (signed char)-117;
int var_8 = -554905878;
short var_10 = (short)12318;
unsigned long long int var_11 = 1195989674559100108ULL;
unsigned short var_12 = (unsigned short)9509;
bool var_13 = (bool)1;
int zero = 0;
int var_14 = -443079328;
signed char var_15 = (signed char)114;
long long int var_16 = -598783723243621842LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -21;
    value_mismatch |= var_15 != (signed char)-11;
    value_mismatch |= var_16 != -554905878LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
