/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=733
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
void test(val<unsigned short> var_0, val<signed char> var_1, val<int> var_4, val<int> var_7, val<unsigned long long int> var_9, val<int> zero, val<short*> var_11, val<unsigned char*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<short>)-13866)), (1980452584)))) & (max((min((var_9), (((/* implicit */val<unsigned long long int>) -585127882)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)13856)) > (1415888752))))))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((2147483647) & (((/* implicit */val<int>) (val<unsigned char>)15)))))))) & (-585127878)));
    *var_13 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)13)) << (((var_7) - (620409051)))))) ? (min((var_4), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<short>)-13877)))))) : ((+(((/* implicit */val<int>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7510;
signed char var_1 = (signed char)-123;
int var_4 = 1247444111;
int var_7 = 620409061;
unsigned long long int var_9 = 13607169583655610844ULL;
int zero = 0;
short var_11 = (short)2912;
unsigned char var_12 = (unsigned char)118;
signed char var_13 = (signed char)54;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)18632;
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (signed char)4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
