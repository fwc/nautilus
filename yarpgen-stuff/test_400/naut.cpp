/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 400
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=400
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
void test(val<bool> var_0, val<int> var_2, val<short> var_3, val<int> var_5, val<signed char> var_7, val<int> zero, val<unsigned short*> var_11, val<short*> var_12, val<unsigned short*> var_13) {
    *var_11 &= ((/* implicit */val<unsigned short>) var_5);
    *var_12 = ((/* implicit */val<short>) max((*var_12), (((/* implicit */val<short>) var_7))));
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_7)) ? (var_5) : ((+(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_2 = -980329361;
short var_3 = (short)1679;
int var_5 = 215943717;
signed char var_7 = (signed char)-116;
int zero = 0;
unsigned short var_11 = (unsigned short)45598;
short var_12 = (short)-32058;
unsigned short var_13 = (unsigned short)374;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)516;
    value_mismatch |= var_12 != (short)-116;
    value_mismatch |= var_13 != (unsigned short)2597;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
