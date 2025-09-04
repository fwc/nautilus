/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1021
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1021
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
void test(val<bool> var_0, val<bool> var_6, val<unsigned char> var_7, val<int> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<short>)2224)) : (((/* implicit */val<int>) (val<unsigned short>)12288)))))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) / (((var_6) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)2219))) : (3668269774605007727ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)22)))));
    *var_19 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned long long int>) var_0)), (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_6 = (bool)0;
unsigned char var_7 = (unsigned char)159;
int var_12 = -575908621;
unsigned long long int var_13 = 7631509075655783077ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)193;
long long int var_19 = -5047247190949123683LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_12, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
