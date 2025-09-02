/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3998
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3998
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
void test(val<unsigned char> var_1, val<signed char> var_2, val<unsigned short> var_5, val<unsigned int> var_7, val<short> var_9, val<unsigned int> var_16, val<int> zero, val<unsigned short*> var_18, val<unsigned char*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<unsigned short*> var_22, val<int*> var_23, val<long long int*> var_24) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -936749223)) ? (((/* implicit */val<int>) (val<short>)16384)) : (-936749223)))), (((((val<unsigned long long int>) (val<unsigned short>)52547)) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))))))
    {
        *var_18 &= ((/* implicit */val<unsigned short>) (~(var_16)));
        *var_19 &= ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_9))));
        *var_20 = ((/* implicit */val<int>) (~(363815715U)));
        *var_21 = ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_5))))) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))));
        *var_22 = ((/* implicit */val<unsigned short>) 936749223);
    }

    *var_23 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 363815715U)) <= (min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535)), (13107697477604564235ULL)))));
    *var_24 = ((/* implicit */val<long long int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)75;
signed char var_2 = (signed char)-112;
unsigned short var_5 = (unsigned short)50907;
unsigned int var_7 = 1828818255U;
short var_9 = (short)-14280;
unsigned int var_16 = 695901239U;
int zero = 0;
unsigned short var_18 = (unsigned short)271;
unsigned char var_19 = (unsigned char)48;
int var_20 = 577292164;
unsigned int var_21 = 1296163704U;
unsigned short var_22 = (unsigned short)32009;
int var_23 = -2010117126;
long long int var_24 = 108708699393609654LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)264;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != -363815716;
    value_mismatch |= var_21 != 1828818255U;
    value_mismatch |= var_22 != (unsigned short)43175;
    value_mismatch |= var_23 != 0;
    value_mismatch |= var_24 != 695901239LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_9, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
