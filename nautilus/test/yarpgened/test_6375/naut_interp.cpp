/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6375
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6375
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
void test(val<unsigned long long int> var_3, val<int> var_8, val<bool> var_10, val<short> var_11, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<int*> var_16, val<bool*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) 519114832);
    *var_15 = ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_16 = ((/* implicit */val<int>) ((val<signed char>) var_11));
    *var_17 = ((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) var_8)), (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)41923)), (var_3))))), (((/* implicit */val<unsigned long long int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6888299131707475619ULL;
int var_8 = -1297373107;
bool var_10 = (bool)0;
short var_11 = (short)-8474;
int zero = 0;
unsigned char var_14 = (unsigned char)193;
unsigned short var_15 = (unsigned short)4470;
int var_16 = 1163500051;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)80;
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != -26;
    value_mismatch |= var_17 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_10, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
