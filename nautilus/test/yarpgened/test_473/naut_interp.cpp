/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 473
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=473
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
void test(val<short> var_0, val<unsigned long long int> var_3, val<short> var_10, val<short> var_11, val<unsigned short> var_12, val<unsigned char> var_13, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21) {
    if (((/* implicit */val<bool>) var_10))
    {
        *var_19 = var_3;
        *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) ((min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) ^ (((/* implicit */val<int>) var_0))))), (((((/* implicit */val<bool>) var_12)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))) | (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)60)) ? (((/* implicit */val<int>) (val<unsigned short>)15888)) : (((/* implicit */val<int>) (val<unsigned char>)223))))))))));
    }

    *var_21 *= ((/* implicit */val<unsigned long long int>) ((val<short>) var_13));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19815;
unsigned long long int var_3 = 7376015447869195754ULL;
short var_10 = (short)-32175;
short var_11 = (short)7347;
unsigned short var_12 = (unsigned short)43023;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
unsigned long long int var_19 = 2132789894352630531ULL;
unsigned char var_20 = (unsigned char)214;
unsigned long long int var_21 = 17288634901541765845ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 7376015447869195754ULL;
    value_mismatch |= var_20 != (unsigned char)212;
    value_mismatch |= var_21 != 17205632220566745125ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_11, var_12, var_13, zero, &var_19, &var_20, &var_21);
  checksum();
}
