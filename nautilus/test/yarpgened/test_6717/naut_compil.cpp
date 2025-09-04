/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6717
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6717
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
void test(val<unsigned long long int> var_10, val<unsigned char> var_14, val<signed char> var_18, val<int> zero, val<long long int*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) % (var_10))))) ? (((val<unsigned int>) -1730369817)) : (((/* implicit */val<unsigned int>) (-((+(((/* implicit */val<int>) var_18)))))))));
    *var_21 = ((/* implicit */val<short>) (((-(1618079252))) < (min(((~(-3))), (((/* implicit */val<int>) var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 4474527235281952132ULL;
unsigned char var_14 = (unsigned char)77;
signed char var_18 = (signed char)52;
int zero = 0;
long long int var_20 = 6430279525809980718LL;
short var_21 = (short)12414;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2564597479LL;
    value_mismatch |= var_21 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_14, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
