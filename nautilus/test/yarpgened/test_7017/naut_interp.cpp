/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7017
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7017
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
void test(val<bool> var_0, val<int> var_4, val<signed char> var_8, val<short> var_10, val<int> zero, val<unsigned long long int*> var_13, val<signed char*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    *var_13 &= ((/* implicit */val<unsigned long long int>) ((-4506575024166337584LL) - (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)11))) & (4074789622681149342LL)))));
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), ((val<signed char>)97)));
    *var_15 = ((/* implicit */val<long long int>) max((var_4), (((/* implicit */val<int>) var_0))));
    *var_16 &= ((/* implicit */val<long long int>) var_8);
    *var_17 = ((/* implicit */val<long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_4 = -280221071;
signed char var_8 = (signed char)-108;
short var_10 = (short)-13085;
int zero = 0;
unsigned long long int var_13 = 10328206447094179417ULL;
signed char var_14 = (signed char)-103;
long long int var_15 = -5757248741860243152LL;
long long int var_16 = 7626485388041137711LL;
long long int var_17 = -8157336020085463617LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 9319400085246837312ULL;
    value_mismatch |= var_14 != (signed char)97;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 7626485388041137668LL;
    value_mismatch |= var_17 != -13085LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
