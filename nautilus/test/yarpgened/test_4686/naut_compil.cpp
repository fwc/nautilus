/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4686
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
void test(val<unsigned short> var_0, val<unsigned int> var_2, val<unsigned long long int> var_6, val<unsigned int> var_9, val<unsigned int> var_10, val<unsigned int> var_11, val<unsigned short> var_13, val<unsigned short> var_18, val<int> zero, val<unsigned short*> var_19, val<signed char*> var_20, val<signed char*> var_21, val<unsigned int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_18))))) ? (((val<unsigned long long int>) var_2)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)16))) ^ (var_10))))))));
    *var_20 += ((/* implicit */val<signed char>) var_6);
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<unsigned char>)120)) ? ((-(((524287ULL) | (((/* implicit */val<unsigned long long int>) var_11)))))) : (((/* implicit */val<unsigned long long int>) var_9))));
    *var_22 |= ((/* implicit */val<unsigned int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33477;
unsigned int var_2 = 228277372U;
unsigned long long int var_6 = 17718731042012330072ULL;
unsigned int var_9 = 3971776241U;
unsigned int var_10 = 749211807U;
unsigned int var_11 = 3051979786U;
unsigned short var_13 = (unsigned short)36825;
unsigned short var_18 = (unsigned short)36744;
int zero = 0;
unsigned short var_19 = (unsigned short)33554;
signed char var_20 = (signed char)100;
signed char var_21 = (signed char)-94;
unsigned int var_22 = 4160557179U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)15484;
    value_mismatch |= var_20 != (signed char)-68;
    value_mismatch |= var_21 != (signed char)1;
    value_mismatch |= var_22 != 4160557179U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_10, var_11, var_13, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
