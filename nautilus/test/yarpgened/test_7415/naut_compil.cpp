/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7415
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7415
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<int> var_2, val<int> var_3, val<signed char> var_4, val<int> var_5, val<bool> var_6, val<int> var_7, val<unsigned char> var_8, val<unsigned char> var_9, val<short> var_11, val<short> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14, val<int*> var_15, val<signed char*> var_16, val<unsigned int*> var_17, val<unsigned long long int*> var_18) {
    if (((/* implicit */val<bool>) var_2))
    {
        *var_13 = min(((val<unsigned short>)19586), ((val<unsigned short>)19586));
        *var_14 -= ((/* implicit */val<unsigned char>) max((((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (351423775) : (var_5)))) ^ ((~(var_0))))), (((/* implicit */val<long long int>) var_2))));
        *var_15 |= ((/* implicit */val<int>) ((((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_4))))) > (var_1))) && (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) var_3)) ^ (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)36960))) : (var_0))))))));
    }

    *var_16 = ((/* implicit */val<signed char>) var_2);
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) ((0U) > (((/* implicit */val<unsigned int>) var_3))))) > (((/* implicit */val<int>) var_6))))) > (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-18040)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))) ? (((var_6) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_12)))) : (max((var_7), (var_2)))))));
    *var_18 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) max((var_11), (((/* implicit */val<short>) var_6))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) ((var_1) % (((/* implicit */val<unsigned int>) var_7))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 90606853462909214LL;
unsigned int var_1 = 2859443325U;
int var_2 = -1428611105;
int var_3 = 1028148198;
signed char var_4 = (signed char)45;
int var_5 = 940435249;
bool var_6 = (bool)1;
int var_7 = 1060116531;
unsigned char var_8 = (unsigned char)57;
unsigned char var_9 = (unsigned char)71;
short var_11 = (short)8307;
short var_12 = (short)-19240;
int zero = 0;
unsigned short var_13 = (unsigned short)25030;
unsigned char var_14 = (unsigned char)219;
int var_15 = -1570614265;
signed char var_16 = (signed char)57;
unsigned int var_17 = 1251388560U;
unsigned long long int var_18 = 10645577453845354006ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)19586;
    value_mismatch |= var_14 != (unsigned char)252;
    value_mismatch |= var_15 != -1570614265;
    value_mismatch |= var_16 != (signed char)-33;
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != 10645577453845345699ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
