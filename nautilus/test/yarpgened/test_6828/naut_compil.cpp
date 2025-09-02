/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6828
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
void test(val<long long int> var_12, val<unsigned short> var_19, val<int> zero, val<short*> var_20, val<long long int*> var_21, val<unsigned long long int*> var_22, val<signed char*> var_23) {
    *var_20 = ((/* implicit */val<short>) (val<signed char>)127);
    *var_21 = 2487420930228378166LL;
    *var_22 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)44);
    *var_23 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) var_19)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned int>) (val<short>)8352))))))) : (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 1867066057778643681LL;
unsigned short var_19 = (unsigned short)51079;
int zero = 0;
short var_20 = (short)11734;
long long int var_21 = -8555566454336841915LL;
unsigned long long int var_22 = 5614472448660555207ULL;
signed char var_23 = (signed char)58;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)127;
    value_mismatch |= var_21 != 2487420930228378166LL;
    value_mismatch |= var_22 != 44ULL;
    value_mismatch |= var_23 != (signed char)-31;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
