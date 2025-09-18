/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1767
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1767
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
void test(val<unsigned long long int> var_1, val<bool> var_3, val<unsigned short> var_6, val<unsigned short> var_8, val<bool> var_9, val<unsigned short> var_11, val<unsigned long long int> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<unsigned short*> var_20) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_13) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) var_8)))))))))) + (var_1)));
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<unsigned short>)56072)) & (((/* implicit */val<int>) (val<unsigned short>)9452)))) > ((-(-593710346)))))), (((val<int>) var_3)))))));
    if ((!(((/* implicit */val<bool>) var_8))))
    {
        *var_17 *= ((/* implicit */val<unsigned short>) (+(((val<unsigned long long int>) max((var_6), (var_14))))));
        *var_18 = ((/* implicit */val<long long int>) ((val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)41503)) ? (((/* implicit */val<int>) (val<unsigned short>)9464)) : (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<unsigned short>)62554)) : (((/* implicit */val<int>) (val<unsigned short>)61440))))) : (max((36028797018963968ULL), (((/* implicit */val<unsigned long long int>) var_11)))))));
    }

    *var_19 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) (val<unsigned short>)41482)))) - ((+(((/* implicit */val<int>) ((val<unsigned short>) var_9)))))));
    *var_20 ^= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) -6937993913734681861LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4180599242698342324ULL;
bool var_3 = (bool)1;
unsigned short var_6 = (unsigned short)1158;
unsigned short var_8 = (unsigned short)51115;
bool var_9 = (bool)1;
unsigned short var_11 = (unsigned short)32903;
unsigned long long int var_13 = 15330291558440111114ULL;
unsigned short var_14 = (unsigned short)22520;
int zero = 0;
unsigned short var_15 = (unsigned short)20405;
unsigned short var_16 = (unsigned short)60511;
unsigned short var_17 = (unsigned short)34588;
long long int var_18 = -688006142704987542LL;
long long int var_19 = 2154380658856489051LL;
unsigned short var_20 = (unsigned short)24468;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)16308;
    value_mismatch |= var_16 != (unsigned short)60511;
    value_mismatch |= var_17 != (unsigned short)34588;
    value_mismatch |= var_18 != -688006142704987542LL;
    value_mismatch |= var_19 != 934174639LL;
    value_mismatch |= var_20 != (unsigned short)24468;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, var_9, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
