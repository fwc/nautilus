/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1115
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1115
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
void test(val<int> var_0, val<int> var_3, val<unsigned char> var_4, val<unsigned short> var_6, val<int> zero, val<short*> var_10, val<unsigned short*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<short>) max((*var_10), (((/* implicit */val<short>) ((((/* implicit */val<int>) ((val<unsigned short>) max((var_0), (var_3))))) * (min((((/* implicit */val<int>) var_6)), (min((((/* implicit */val<int>) var_4)), (var_0))))))))));
    *var_11 -= ((/* implicit */val<unsigned short>) var_3);
    *var_12 = ((/* implicit */val<short>) ((val<unsigned char>) var_4));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 424642760;
int var_3 = 2079783867;
unsigned char var_4 = (unsigned char)148;
unsigned short var_6 = (unsigned short)12304;
int zero = 0;
short var_10 = (short)-14374;
unsigned short var_11 = (unsigned short)30458;
short var_12 = (short)-12222;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-14374;
    value_mismatch |= var_11 != (unsigned short)31551;
    value_mismatch |= var_12 != (short)148;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
