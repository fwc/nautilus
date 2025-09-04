/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9540
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9540
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
void test(val<long long int> var_1, val<bool> var_4, val<unsigned long long int> var_5, val<unsigned int> var_7, val<unsigned int> var_11, val<unsigned short> var_12, val<unsigned char> var_14, val<int> zero, val<bool*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<bool>)1)), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<short>)8652)) ^ (((/* implicit */val<int>) (val<unsigned char>)9))))) : (var_11)))));
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) ((min((((/* implicit */val<long long int>) var_12)), ((+(var_1))))) & (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_14)), (((var_4) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_7)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2206294976697601473LL;
bool var_4 = (bool)1;
unsigned long long int var_5 = 5289710908669690071ULL;
unsigned int var_7 = 3934887720U;
unsigned int var_11 = 2913166195U;
unsigned short var_12 = (unsigned short)57430;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
bool var_16 = (bool)1;
unsigned long long int var_17 = 17659803171698674163ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_7, var_11, var_12, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
