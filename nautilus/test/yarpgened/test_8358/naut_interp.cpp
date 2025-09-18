/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8358
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8358
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
void test(val<long long int> var_0, val<unsigned short> var_2, val<unsigned int> var_4, val<int> var_9, val<unsigned long long int> var_10, val<long long int> var_12, val<signed char> var_13, val<long long int> var_14, val<short> var_15, val<int> zero, val<signed char*> var_16, val<short*> var_17, val<short*> var_18, val<unsigned long long int*> var_19, val<int*> var_20, val<short*> var_21, val<int*> var_22) {
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) max(((+(((val<unsigned int>) var_0)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)7087))) | (0U)))) ? (((((/* implicit */val<int>) var_2)) | (((/* implicit */val<int>) (val<short>)0)))) : (((/* implicit */val<int>) var_15))))))))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<int>) ((((/* implicit */val<long long int>) 4294967295U)) == (2305843009213693951LL)))) - (var_9))) : (((((/* implicit */val<int>) var_13)) << (((var_4) - (2428827050U)))))));
    if (((/* implicit */val<bool>) max((var_0), (((/* implicit */val<long long int>) var_9)))))
    {
        *var_18 = ((/* implicit */val<short>) var_9);
        *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(var_12)))) ? (((/* implicit */val<int>) (val<signed char>)-3)) : (((((/* implicit */val<int>) (val<unsigned short>)52151)) + (((/* implicit */val<int>) (val<unsigned char>)41))))))) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) 4294967295U))))));
        *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_14)) | (((0ULL) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)32)) > (((/* implicit */val<int>) (val<short>)19692))))))))));
        *var_21 &= ((/* implicit */val<short>) var_13);
        *var_22 = ((/* implicit */val<int>) var_10);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4163073652450697305LL;
unsigned short var_2 = (unsigned short)27548;
unsigned int var_4 = 2428827062U;
int var_9 = 972208408;
unsigned long long int var_10 = 1622850359804190614ULL;
long long int var_12 = 5151482026356486449LL;
signed char var_13 = (signed char)64;
long long int var_14 = 7581124031304218258LL;
short var_15 = (short)14661;
int zero = 0;
signed char var_16 = (signed char)60;
short var_17 = (short)9711;
short var_18 = (short)-71;
unsigned long long int var_19 = 6738567275904277218ULL;
int var_20 = -1163719246;
short var_21 = (short)8566;
int var_22 = -1850682463;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)89;
    value_mismatch |= var_17 != (short)18152;
    value_mismatch |= var_18 != (short)-18152;
    value_mismatch |= var_19 != 4163073652450697305ULL;
    value_mismatch |= var_20 != -737102190;
    value_mismatch |= var_21 != (short)64;
    value_mismatch |= var_22 != -742498410;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_9, var_10, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
