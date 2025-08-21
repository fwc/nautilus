/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=200
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
void test(val<long long int> var_3, val<int> var_4, val<int> zero, val<short*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<short>) ((((((/* implicit */val<int>) (val<short>)-5)) + (2147483647))) >> (((2314944132114026563ULL) - (2314944132114026539ULL)))));
    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<signed char>)-5), ((val<signed char>)-21))))) : (var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7727296505123808209LL;
int var_4 = 544257108;
int zero = 0;
short var_19 = (short)17893;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)127;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
