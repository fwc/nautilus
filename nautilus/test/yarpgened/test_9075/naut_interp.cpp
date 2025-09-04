/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9075
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9075
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
void test(val<signed char> var_0, val<short> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<short> var_14, val<unsigned short> var_17, val<int> zero, val<unsigned short*> var_18, val<short*> var_19, val<unsigned short*> var_20, val<int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (var_2) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) / (max((((/* implicit */val<unsigned long long int>) (val<signed char>)79)), (var_2)))))));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (var_14)));
    *var_20 ^= var_17;
    *var_21 = ((/* implicit */val<int>) ((val<long long int>) var_1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
short var_1 = (short)9016;
unsigned long long int var_2 = 10917185331242048209ULL;
unsigned short var_3 = (unsigned short)31565;
short var_14 = (short)14366;
unsigned short var_17 = (unsigned short)60286;
int zero = 0;
unsigned short var_18 = (unsigned short)51779;
short var_19 = (short)9118;
unsigned short var_20 = (unsigned short)49363;
int var_21 = 201245053;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)39633;
    value_mismatch |= var_19 != (short)14366;
    value_mismatch |= var_20 != (unsigned short)11181;
    value_mismatch |= var_21 != 9016;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_14, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
