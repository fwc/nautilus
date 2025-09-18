/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6006
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6006
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
void test(val<int> var_3, val<unsigned short> var_5, val<int> var_6, val<int> var_7, val<short> var_9, val<long long int> var_13, val<int> zero, val<int*> var_14, val<unsigned char*> var_15, val<bool*> var_16, val<bool*> var_17) {
    *var_14 = ((/* implicit */val<int>) ((val<unsigned long long int>) (~(((4294967295U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)142))))))));
    *var_15 *= ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) (val<signed char>)-78)), (-105626911)));
    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_9)) : (var_3))) : (min((((/* implicit */val<int>) (val<unsigned char>)90)), (var_6))))), (((/* implicit */val<int>) var_5)))))));
    *var_17 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_7))), (min((min((14340293978166353183ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)9)))), (((/* implicit */val<unsigned long long int>) ((var_13) <= (((/* implicit */val<long long int>) 105626908)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1037315385;
unsigned short var_5 = (unsigned short)56768;
int var_6 = -381141531;
int var_7 = -1053200038;
short var_9 = (short)-27286;
long long int var_13 = -9142835605412479862LL;
int zero = 0;
int var_14 = -850192759;
unsigned char var_15 = (unsigned char)189;
bool var_16 = (bool)1;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != (unsigned char)29;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_9, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
