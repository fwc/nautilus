/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7896
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7896
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
void test(val<unsigned int> var_8, val<short> var_19, val<int> zero, val<short*> var_20, val<int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_19)) * (((/* implicit */val<int>) ((val<bool>) (-2147483647 - 1))))))) >= (((((/* implicit */val<long long int>) (-(var_8)))) / (max((((/* implicit */val<long long int>) (val<unsigned short>)55411)), (137438953216LL)))))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 137438953216LL)) ? (((/* implicit */val<int>) max(((val<unsigned short>)64804), ((val<unsigned short>)65534)))) : (((/* implicit */val<int>) max(((val<unsigned short>)46143), (((/* implicit */val<unsigned short>) (val<bool>)0)))))))) != (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65532))) ^ (137438953199LL)))));
    *var_22 &= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) 13109871934593264061ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2399375971U;
short var_19 = (short)22501;
int zero = 0;
short var_20 = (short)-3428;
int var_21 = 737633101;
short var_22 = (short)980;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
