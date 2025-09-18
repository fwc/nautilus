/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3389
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3389
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
void test(val<long long int> var_4, val<unsigned long long int> var_16, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19, val<unsigned int*> var_20, val<short*> var_21) {
    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) var_16))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_20 = ((/* implicit */val<unsigned int>) (~(-1754059411)));
    *var_21 = ((/* implicit */val<short>) (~((+(((/* implicit */val<int>) (val<signed char>)38))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1264748008424429761LL;
unsigned long long int var_16 = 3285315998619380514ULL;
int zero = 0;
short var_18 = (short)-3863;
unsigned long long int var_19 = 15674532477192245609ULL;
unsigned int var_20 = 1483718950U;
short var_21 = (short)22702;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-3863;
    value_mismatch |= var_19 != 17181996065285121855ULL;
    value_mismatch |= var_20 != 1754059410U;
    value_mismatch |= var_21 != (short)-39;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
