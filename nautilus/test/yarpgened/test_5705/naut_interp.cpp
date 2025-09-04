/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5705
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5705
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
void test(val<long long int> var_4, val<short> var_7, val<signed char> var_11, val<unsigned char> var_12, val<short> var_13, val<long long int> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) (((+(((/* implicit */val<int>) max((((/* implicit */val<short>) var_12)), (var_7)))))) != (((/* implicit */val<int>) var_11))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_13);
    *var_17 = ((/* implicit */val<unsigned char>) ((var_4) << (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))) - (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) | (var_14))))) - (1LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1821136004006094083LL;
short var_7 = (short)-2363;
signed char var_11 = (signed char)-48;
unsigned char var_12 = (unsigned char)68;
short var_13 = (short)19140;
long long int var_14 = -251648537079909780LL;
int zero = 0;
unsigned char var_15 = (unsigned char)245;
unsigned long long int var_16 = 261872148691217910ULL;
unsigned char var_17 = (unsigned char)210;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != 19140ULL;
    value_mismatch |= var_17 != (unsigned char)24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
