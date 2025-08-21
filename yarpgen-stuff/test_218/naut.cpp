/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 218
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=218
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
void test(val<long long int> var_8, val<signed char> var_11, val<int> zero, val<int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<int>) max((*var_15), (((/* implicit */val<int>) ((val<long long int>) ((val<unsigned char>) max(((val<signed char>)-101), (((/* implicit */val<signed char>) (val<bool>)0)))))))));
    *var_16 = ((/* implicit */val<unsigned short>) (((~(var_8))) / (((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) var_11)) ? (2063044354) : (((/* implicit */val<int>) (val<unsigned short>)28)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1057319998925051157LL;
signed char var_11 = (signed char)6;
int zero = 0;
int var_15 = -1467815951;
unsigned short var_16 = (unsigned short)25977;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != (unsigned short)52322;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
