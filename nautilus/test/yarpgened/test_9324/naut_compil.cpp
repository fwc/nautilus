/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9324
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
void test(val<long long int> var_0, val<unsigned long long int> var_2, val<int> var_4, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned char> var_9, val<long long int> var_12, val<int> zero, val<long long int*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) (((((!(((/* implicit */val<bool>) 8167912637165804053LL)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_0)))) : (var_2))) - (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((7772773445740303344LL) % (2251799813684992LL)))) ? (((-767103784976169846LL) ^ (-8452517966167302814LL))) : (-7LL)))))))
    {
        *var_16 = (~(var_12));
        *var_17 = ((/* implicit */val<unsigned short>) var_4);
    }

    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-11))) >= (((var_5) / (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)168)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7531018476041304267LL;
unsigned long long int var_2 = 7111701433914675312ULL;
int var_4 = 490111844;
unsigned long long int var_5 = 14652871040758782391ULL;
unsigned char var_6 = (unsigned char)165;
unsigned char var_9 = (unsigned char)35;
long long int var_12 = 2073651816548615907LL;
int zero = 0;
long long int var_16 = 2637313513444047590LL;
unsigned short var_17 = (unsigned short)53027;
unsigned short var_18 = (unsigned short)54706;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -2073651816548615908LL;
    value_mismatch |= var_17 != (unsigned short)33636;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_9, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
