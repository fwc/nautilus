/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9302
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9302
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
void test(val<unsigned long long int> var_3, val<short> var_5, val<int> var_8, val<short> var_9, val<int> zero, val<bool*> var_11, val<bool*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<bool>) max((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) - (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) % (2110947360541043231ULL))))), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) (val<short>)-31349)))));
    *var_12 = ((/* implicit */val<bool>) min((2110947360541043231ULL), (2110947360541043231ULL)));
    *var_13 = ((/* implicit */val<unsigned char>) max((max((min((var_3), (((/* implicit */val<unsigned long long int>) (val<short>)29167)))), (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_8))))), (((/* implicit */val<unsigned long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14424203111222134422ULL;
short var_5 = (short)20996;
int var_8 = 737554445;
short var_9 = (short)-5249;
int zero = 0;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)24;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
