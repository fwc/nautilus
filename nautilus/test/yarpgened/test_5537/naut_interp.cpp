/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5537
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5537
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
void test(val<unsigned int> var_1, val<signed char> var_3, val<int> zero, val<signed char*> var_15, val<short*> var_16) {
    *var_15 |= ((/* implicit */val<signed char>) max((max((((val<unsigned long long int>) var_1)), (((/* implicit */val<unsigned long long int>) (val<signed char>)4)))), (((/* implicit */val<unsigned long long int>) var_3))));
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) ((val<bool>) (val<signed char>)103))), ((val<unsigned short>)65524)))) & (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1606110714U;
signed char var_3 = (signed char)116;
int zero = 0;
signed char var_15 = (signed char)117;
short var_16 = (short)32103;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-1;
    value_mismatch |= var_16 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_15, &var_16);
  checksum();
}
