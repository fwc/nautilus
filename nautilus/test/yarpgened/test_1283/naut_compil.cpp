/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1283
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1283
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
void test(val<short> var_0, val<bool> var_3, val<short> var_5, val<unsigned long long int> var_9, val<short> var_10, val<int> zero, val<short*> var_11, val<unsigned short*> var_12, val<short*> var_13, val<bool*> var_14, val<signed char*> var_15) {
    *var_11 = ((val<short>) ((val<unsigned char>) max((var_10), (var_0))));
    *var_12 = ((/* implicit */val<unsigned short>) min((var_9), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((val<unsigned char>) 1265428942U))))));
    *var_13 = var_5;
    *var_14 = ((/* implicit */val<bool>) ((var_3) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)8184))) : (var_9)));
    *var_15 = ((/* implicit */val<signed char>) (val<unsigned char>)29);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31760;
bool var_3 = (bool)1;
short var_5 = (short)-25038;
unsigned long long int var_9 = 13597402787486089360ULL;
short var_10 = (short)-23416;
int zero = 0;
short var_11 = (short)11600;
unsigned short var_12 = (unsigned short)63190;
short var_13 = (short)-22998;
bool var_14 = (bool)1;
signed char var_15 = (signed char)-126;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)16;
    value_mismatch |= var_12 != (unsigned short)206;
    value_mismatch |= var_13 != (short)-25038;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (signed char)29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
