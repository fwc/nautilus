/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 588
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=588
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
void test(val<short> var_2, val<int> var_5, val<unsigned char> var_6, val<unsigned short> var_7, val<int> zero, val<unsigned short*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) (~(((((/* implicit */val<int>) ((var_5) >= (((/* implicit */val<int>) var_6))))) % (((((/* implicit */val<bool>) (val<unsigned char>)73)) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (((/* implicit */val<int>) var_2)))))))))));
    *var_13 = ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13627;
int var_5 = 1407575532;
unsigned char var_6 = (unsigned char)0;
unsigned short var_7 = (unsigned short)9038;
int zero = 0;
unsigned short var_12 = (unsigned short)32838;
short var_13 = (short)4374;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)32838;
    value_mismatch |= var_13 != (short)9038;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, zero, &var_12, &var_13);
  checksum();
}
