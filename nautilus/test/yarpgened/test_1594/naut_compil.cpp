/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1594
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1594
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
void test(val<long long int> var_7, val<unsigned long long int> var_12, val<unsigned int> var_13, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) 1095474792U)) ? (min((((/* implicit */val<unsigned int>) (val<signed char>)10)), (2242040942U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((2029329721203583291ULL) >= (12662405261802936474ULL))))))) > (((min((((/* implicit */val<unsigned int>) (val<unsigned char>)211)), (var_13))) >> (((var_12) - (832748956630911082ULL)))))));
    if (((val<bool>) 15153166141915329723ULL))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)136);
        *var_17 = ((/* implicit */val<unsigned long long int>) var_7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3098405989336815534LL;
unsigned long long int var_12 = 832748956630911084ULL;
unsigned int var_13 = 685216487U;
int zero = 0;
long long int var_15 = 8850171877612379405LL;
unsigned long long int var_16 = 2116501150550119648ULL;
unsigned long long int var_17 = 4813179975504160000ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 136ULL;
    value_mismatch |= var_17 != 3098405989336815534ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
