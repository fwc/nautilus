/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3777
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3777
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
void test(val<long long int> var_0, val<unsigned char> var_4, val<int> zero, val<short*> var_16, val<int*> var_17, val<unsigned int*> var_18) {
    *var_16 *= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_4))));
    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) ((val<long long int>) (+(max((var_0), (((/* implicit */val<long long int>) (val<short>)-18542))))))))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1135938080)) ? (13529597487192472968ULL) : (((/* implicit */val<unsigned long long int>) 7U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2792819560777076536LL;
unsigned char var_4 = (unsigned char)189;
int zero = 0;
short var_16 = (short)-17409;
int var_17 = 133894345;
unsigned int var_18 = 285738453U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != 133894345;
    value_mismatch |= var_18 != 1377828232U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
