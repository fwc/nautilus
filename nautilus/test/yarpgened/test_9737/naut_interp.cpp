/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9737
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9737
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
void test(val<bool> var_1, val<int> var_5, val<unsigned int> var_6, val<long long int> var_8, val<long long int> var_10, val<bool> var_12, val<int> zero, val<unsigned long long int*> var_14, val<bool*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17, val<unsigned short*> var_18) {
    *var_14 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)10);
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) var_12)) * (var_5))) * (((((/* implicit */val<int>) (val<signed char>)-101)) / (((/* implicit */val<int>) (val<unsigned short>)4781))))))) / (4009867050U)));
    *var_16 &= ((/* implicit */val<unsigned char>) min(((val<unsigned short>)4773), ((val<unsigned short>)65535)));
    *var_17 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)63275))) : (var_8)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (((((/* implicit */val<bool>) -1750724143)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)1))) : (((((/* implicit */val<bool>) (val<unsigned short>)65508)) ? (-1541807928606358335LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<unsigned short>)2260)) : (((/* implicit */val<int>) (val<signed char>)-115))))) ? (((/* implicit */val<long long int>) 4294967295U)) : (((((/* implicit */val<bool>) (val<unsigned short>)63275)) ? (7202266232718959088LL) : (2305280059260272640LL)))))) || (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) var_6)) : (7690229557739333275ULL))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-59))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_5 = -1648390455;
unsigned int var_6 = 4182083849U;
long long int var_8 = -4147291657011881929LL;
long long int var_10 = 1908243997226255495LL;
bool var_12 = (bool)1;
int zero = 0;
unsigned long long int var_14 = 15519972466393714989ULL;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)181;
unsigned int var_17 = 1661531146U;
unsigned short var_18 = (unsigned short)34171;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 10ULL;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned char)165;
    value_mismatch |= var_17 != 1661531147U;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_8, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
