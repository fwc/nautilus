/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9924
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9924
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
void test(val<short> var_5, val<unsigned int> var_6, val<unsigned char> var_12, val<int> zero, val<long long int*> var_15, val<long long int*> var_16, val<long long int*> var_17, val<short*> var_18, val<signed char*> var_19) {
    *var_15 = ((/* implicit */val<long long int>) var_12);
    *var_16 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)2016))) : (1125899906842608ULL)))))))));
    *var_17 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_5))));
    *var_18 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) 4398045986816LL)), (15966846600298248365ULL)));
    *var_19 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24035;
unsigned int var_6 = 2478091896U;
unsigned char var_12 = (unsigned char)229;
int zero = 0;
long long int var_15 = 8813303519456519124LL;
long long int var_16 = -8710227487571379937LL;
long long int var_17 = -140670144041546024LL;
short var_18 = (short)5985;
signed char var_19 = (signed char)4;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 229LL;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 24035LL;
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (signed char)120;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_12, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
