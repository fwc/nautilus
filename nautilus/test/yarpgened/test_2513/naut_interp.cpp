/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2513
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2513
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
void test(val<unsigned int> var_2, val<int> var_3, val<long long int> var_5, val<signed char> var_6, val<unsigned int> var_10, val<int> var_12, val<signed char> var_14, val<int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned short*> var_18) {
    *var_17 ^= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_16)) ? (4294967295U) : (((/* implicit */val<unsigned int>) 1044801478))))), (((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65530))) : (var_5)))))) ? (((val<int>) (((val<bool>)0) ? (var_2) : (var_10)))) : (((/* implicit */val<int>) var_6))));
    *var_18 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) ((val<signed char>) var_3))), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<signed char>)127)) : (((/* implicit */val<int>) var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4286142542U;
int var_3 = 1862234245;
long long int var_5 = -7689707566093113658LL;
signed char var_6 = (signed char)124;
unsigned int var_10 = 2603356633U;
int var_12 = 1164183581;
signed char var_14 = (signed char)-27;
int var_16 = 1851320131;
int zero = 0;
unsigned long long int var_17 = 10182713071680670754ULL;
unsigned short var_18 = (unsigned short)59688;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 8264031000479981051ULL;
    value_mismatch |= var_18 != (unsigned short)65413;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_10, var_12, var_14, var_16, zero, &var_17, &var_18);
  checksum();
}
