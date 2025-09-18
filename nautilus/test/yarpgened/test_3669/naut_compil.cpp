/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3669
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3669
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
void test(val<unsigned int> var_0, val<bool> var_2, val<unsigned int> var_5, val<unsigned long long int> var_7, val<unsigned short> var_11, val<int> var_12, val<bool> var_14, val<long long int> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17) {
    *var_16 |= ((/* implicit */val<unsigned int>) var_7);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (max((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_14)), (var_12)))), (var_5))) : ((((!(((/* implicit */val<bool>) var_15)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (((var_0) >> (((((/* implicit */val<int>) var_11)) - (64660)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3111275176U;
bool var_2 = (bool)0;
unsigned int var_5 = 3351255390U;
unsigned long long int var_7 = 15767495397676097321ULL;
unsigned short var_11 = (unsigned short)64683;
int var_12 = 1166433241;
bool var_14 = (bool)0;
long long int var_15 = 539033625750055096LL;
int zero = 0;
unsigned int var_16 = 4005616683U;
unsigned short var_17 = (unsigned short)26692;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4007124779U;
    value_mismatch |= var_17 != (unsigned short)6494;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_11, var_12, var_14, var_15, zero, &var_16, &var_17);
  checksum();
}
