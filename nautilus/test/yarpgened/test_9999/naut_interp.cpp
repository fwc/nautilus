/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9999
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9999
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
void test(val<unsigned char> var_10, val<long long int> var_11, val<unsigned short> var_13, val<signed char> var_15, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 = min((max((((((/* implicit */val<bool>) var_15)) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-9264))))), (((/* implicit */val<long long int>) 1688125396)))), (((/* implicit */val<long long int>) (val<bool>)1)));
    *var_20 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_13)))))));
    *var_21 += ((/* implicit */val<signed char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)245;
long long int var_11 = -3468062587573032179LL;
unsigned short var_13 = (unsigned short)1585;
signed char var_15 = (signed char)-13;
int zero = 0;
long long int var_19 = -7002311648287431655LL;
signed char var_20 = (signed char)-84;
signed char var_21 = (signed char)48;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (signed char)37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, var_13, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
