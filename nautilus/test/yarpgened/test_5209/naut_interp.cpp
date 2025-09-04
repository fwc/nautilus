/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5209
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5209
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
void test(val<short> var_7, val<long long int> var_8, val<unsigned char> var_9, val<int> zero, val<int*> var_17, val<short*> var_18, val<short*> var_19, val<unsigned int*> var_20) {
    *var_17 |= max(((+(((/* implicit */val<int>) min(((val<short>)32764), (var_7)))))), (((/* implicit */val<int>) var_9)));
    *var_18 = ((/* implicit */val<short>) (~(((val<unsigned int>) (+(((/* implicit */val<int>) var_9)))))));
    *var_19 = min((((val<short>) min((((/* implicit */val<int>) (val<bool>)0)), (-1576060015)))), (((/* implicit */val<short>) (val<signed char>)-19)));
    *var_20 = ((/* implicit */val<unsigned int>) max((*var_20), (((/* implicit */val<unsigned int>) (-((~(var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-4829;
long long int var_8 = 5184775184586829719LL;
unsigned char var_9 = (unsigned char)102;
int zero = 0;
int var_17 = 800638351;
short var_18 = (short)735;
short var_19 = (short)23767;
unsigned int var_20 = 4056203456U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 800638447;
    value_mismatch |= var_18 != (short)-103;
    value_mismatch |= var_19 != (short)-19;
    value_mismatch |= var_20 != 4056203456U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
