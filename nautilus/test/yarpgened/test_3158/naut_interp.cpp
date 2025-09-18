/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3158
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
void test(val<short> var_2, val<unsigned short> var_4, val<unsigned short> var_6, val<unsigned char> var_7, val<int> zero, val<long long int*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) ((val<unsigned int>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_2)), (var_4)))) * (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned short>)20125)))))));
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) 13731039431009596220ULL)) ? (1206576971756266640ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)93)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11493;
unsigned short var_4 = (unsigned short)51230;
unsigned short var_6 = (unsigned short)17948;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
long long int var_15 = 5906279280447449212LL;
int var_16 = 1742341953;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7457934LL;
    value_mismatch |= var_16 != -206379888;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, zero, &var_15, &var_16);
  checksum();
}
