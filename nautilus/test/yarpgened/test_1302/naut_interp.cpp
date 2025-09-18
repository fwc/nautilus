/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1302
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1302
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<int> var_2, val<int> var_3, val<unsigned short> var_5, val<unsigned int> var_6, val<long long int> var_8, val<short> var_11, val<int> zero, val<long long int*> var_15, val<short*> var_16, val<long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) max((*var_15), (min((((/* implicit */val<long long int>) var_6)), (max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_3) : (33554432)))), (min((((/* implicit */val<long long int>) var_3)), (var_8)))))))));
    *var_16 = ((/* implicit */val<short>) 1666907925);
    *var_17 |= max((((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_6)), (var_8)))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<short>)5573))))) : (max((var_0), (var_0))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_5))))) : (min((var_1), (((/* implicit */val<unsigned int>) var_2))))))));
    *var_18 ^= ((/* implicit */val<unsigned long long int>) (val<signed char>)-36);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2572229538520625256LL;
unsigned int var_1 = 717286189U;
int var_2 = -776808478;
int var_3 = -1225605901;
unsigned short var_5 = (unsigned short)26590;
unsigned int var_6 = 662281291U;
long long int var_8 = -244114464564967508LL;
short var_11 = (short)13264;
int zero = 0;
long long int var_15 = 6702892896292541546LL;
short var_16 = (short)18560;
long long int var_17 = -6851098467371955301LL;
unsigned long long int var_18 = 7693944382969877595ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 6702892896292541546LL;
    value_mismatch |= var_16 != (short)-235;
    value_mismatch |= var_17 != -6851098467371946017LL;
    value_mismatch |= var_18 != 10752799690739673991ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
