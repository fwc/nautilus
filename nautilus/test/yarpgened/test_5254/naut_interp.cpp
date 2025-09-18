/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5254
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
void test(val<short> var_2, val<unsigned short> var_11, val<unsigned short> var_12, val<unsigned long long int> var_15, val<unsigned char> var_16, val<short> var_17, val<int> zero, val<unsigned long long int*> var_18, val<long long int*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) var_16);
    *var_19 |= ((/* implicit */val<long long int>) max((var_12), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((var_11), (((/* implicit */val<unsigned short>) var_17))))) && (((/* implicit */val<bool>) var_15)))))));
    *var_20 = ((/* implicit */val<long long int>) var_12);
    *var_21 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) != (var_15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17913;
unsigned short var_11 = (unsigned short)55517;
unsigned short var_12 = (unsigned short)54329;
unsigned long long int var_15 = 2621709909925246829ULL;
unsigned char var_16 = (unsigned char)37;
short var_17 = (short)-14015;
int zero = 0;
unsigned long long int var_18 = 142494863186418784ULL;
long long int var_19 = 6061442962544504677LL;
long long int var_20 = 7356878094658550285LL;
unsigned long long int var_21 = 9648153114100915648ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 37ULL;
    value_mismatch |= var_19 != 6061442962544525181LL;
    value_mismatch |= var_20 != 54329LL;
    value_mismatch |= var_21 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_12, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
