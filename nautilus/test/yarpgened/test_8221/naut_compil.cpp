/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8221
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<int> var_6, val<unsigned short> var_9, val<signed char> var_12, val<int> zero, val<unsigned char*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) var_9);
    *var_16 -= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_0)))) ? (((/* implicit */val<int>) var_12)) : (max((((/* implicit */val<int>) (val<short>)-22673)), (var_6)))))), (min((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<signed char>)-102))))), (var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10911;
unsigned long long int var_2 = 15427585807266499617ULL;
int var_6 = -1102306983;
unsigned short var_9 = (unsigned short)38254;
signed char var_12 = (signed char)71;
int zero = 0;
unsigned char var_15 = (unsigned char)170;
unsigned short var_16 = (unsigned short)1571;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)110;
    value_mismatch |= var_16 != (unsigned short)1500;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
