/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8067
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8067
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
void test(val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<signed char*> var_16, val<unsigned short*> var_17, val<signed char*> var_18) {
    *var_14 = ((/* implicit */val<unsigned char>) ((val<int>) 7113676575864809928ULL));
    *var_15 += ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 811535543))))), (((val<int>) (val<unsigned short>)54327)))) >> (((((val<unsigned int>) ((val<short>) 3895859331U))) - (6260U)))));
    if (((/* implicit */val<bool>) 3895859317U))
    {
        *var_16 *= ((/* implicit */val<signed char>) ((((val<unsigned int>) ((3895859339U) << (((-1119555541503732475LL) + (1119555541503732475LL)))))) + (((/* implicit */val<unsigned int>) (-(((((/* implicit */val<int>) (val<unsigned short>)33731)) >> (((((/* implicit */val<int>) (val<signed char>)80)) - (65))))))))));
        *var_17 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) (val<short>)7491)), (((((/* implicit */val<int>) ((val<unsigned short>) 3720799733167226343LL))) + ((~(((/* implicit */val<int>) (val<short>)0))))))));
        *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) (+(1600171440162741649LL))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_14 = (unsigned char)181;
unsigned short var_15 = (unsigned short)61568;
signed char var_16 = (signed char)92;
unsigned short var_17 = (unsigned short)47883;
signed char var_18 = (signed char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)200;
    value_mismatch |= var_15 != (unsigned short)61569;
    value_mismatch |= var_16 != (signed char)-104;
    value_mismatch |= var_17 != (unsigned short)64998;
    value_mismatch |= var_18 != (signed char)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
