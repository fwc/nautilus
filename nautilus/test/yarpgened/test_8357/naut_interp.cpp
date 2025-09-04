/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8357
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8357
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<bool> var_2, val<int> var_3, val<long long int> var_4, val<unsigned short> var_5, val<signed char> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<unsigned char> var_11, val<int> zero, val<long long int*> var_14, val<unsigned char*> var_15, val<unsigned short*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_14 ^= var_4;
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) min(((val<unsigned char>)24), ((val<unsigned char>)24)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) var_11)) : (-2147483647)))) : (((((/* implicit */val<bool>) var_4)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))
    {
        *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_2)) - (((((/* implicit */val<bool>) min((var_10), (((/* implicit */val<unsigned long long int>) var_3))))) ? (((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) (val<signed char>)-101)) : (((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) ((val<bool>) var_4)))))));
        *var_16 = ((/* implicit */val<unsigned short>) 536870911);
    }

    *var_17 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-14)) ? (8244843473028492742ULL) : (1ULL)))) ? (max((var_10), (((/* implicit */val<unsigned long long int>) var_3)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (536870910)))))), (((/* implicit */val<unsigned long long int>) var_5))));
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)127)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (min((((/* implicit */val<unsigned long long int>) -536870911)), (var_0)))))) ? (min((((/* implicit */val<int>) (val<bool>)1)), (((val<int>) var_3)))) : (((((/* implicit */val<bool>) (val<short>)18148)) ? (((/* implicit */val<int>) ((val<unsigned char>) var_3))) : (((/* implicit */val<int>) ((val<bool>) -536870904))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7239975471878699776ULL;
unsigned short var_1 = (unsigned short)30806;
bool var_2 = (bool)0;
int var_3 = -994532014;
long long int var_4 = -751348489840634255LL;
unsigned short var_5 = (unsigned short)40660;
signed char var_8 = (signed char)49;
bool var_9 = (bool)0;
unsigned long long int var_10 = 16286694166495269321ULL;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
long long int var_14 = 2269258047968407762LL;
unsigned char var_15 = (unsigned char)192;
unsigned short var_16 = (unsigned short)19967;
unsigned char var_17 = (unsigned char)192;
long long int var_18 = -292987783668199255LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1518651316801395037LL;
    value_mismatch |= var_15 != (unsigned char)101;
    value_mismatch |= var_16 != (unsigned short)65535;
    value_mismatch |= var_17 != (unsigned char)82;
    value_mismatch |= var_18 != -994532014LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
