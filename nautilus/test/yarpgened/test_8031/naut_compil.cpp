/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8031
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8031
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
void test(val<long long int> var_0, val<bool> var_3, val<short> var_4, val<long long int> var_8, val<signed char> var_9, val<unsigned char> var_10, val<int> var_11, val<unsigned long long int> var_12, val<unsigned long long int> var_13, val<unsigned char> var_14, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<long long int*> var_23) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 5553792526105355760LL)) ? (var_0) : (var_8))), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<short>)-13647)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1024717519)) ? (((/* implicit */val<int>) (val<unsigned char>)173)) : (((/* implicit */val<int>) (val<unsigned char>)151))))))))) : (((((((/* implicit */val<bool>) 2147483647)) ? (var_13) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))));
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) ((val<unsigned long long int>) max((((/* implicit */val<int>) min((((/* implicit */val<short>) var_9)), (var_4)))), ((~(var_11)))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_14);
    if (((/* implicit */val<bool>) var_11))
    {
        *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) ((1992954524) / (2147483647))))));
        *var_21 &= ((/* implicit */val<unsigned char>) (-(var_12)));
        *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1)) ? (((/* implicit */val<int>) ((9992071773802872709ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)4)))))) : (((/* implicit */val<int>) (val<signed char>)126))))) ? (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)255)), (3558741971045108165ULL))) : ((+(14311789748937824617ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))));
    }

    *var_23 += ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)156))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6128780934818313502LL;
bool var_3 = (bool)0;
short var_4 = (short)1969;
long long int var_8 = -712849141990470797LL;
signed char var_9 = (signed char)-88;
unsigned char var_10 = (unsigned char)65;
int var_11 = 1579495529;
unsigned long long int var_12 = 12646584241148532978ULL;
unsigned long long int var_13 = 15539875397969795820ULL;
unsigned char var_14 = (unsigned char)175;
int zero = 0;
short var_17 = (short)4085;
signed char var_18 = (signed char)53;
unsigned long long int var_19 = 8692427046351497979ULL;
signed char var_20 = (signed char)-53;
unsigned char var_21 = (unsigned char)75;
bool var_22 = (bool)1;
long long int var_23 = 2961968864703521021LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (signed char)-88;
    value_mismatch |= var_19 != 175ULL;
    value_mismatch |= var_20 != (signed char)-53;
    value_mismatch |= var_21 != (unsigned char)10;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 2961968864703521177LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
