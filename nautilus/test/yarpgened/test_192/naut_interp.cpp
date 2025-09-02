/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=192
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
void test(val<unsigned long long int> var_2, val<unsigned int> var_6, val<unsigned char> var_7, val<int> zero, val<unsigned int*> var_10, val<unsigned char*> var_11, val<signed char*> var_12, val<bool*> var_13) {
    *var_10 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) max((((var_2) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)23761))))), (((((/* implicit */val<unsigned long long int>) -411000203557580458LL)) <= (var_2)))))), (min((((/* implicit */val<long long int>) (val<unsigned short>)36229)), (411000203557580457LL)))));
    *var_11 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) (val<short>)-14373)), (15100647290118827238ULL)));
    *var_12 = ((/* implicit */val<signed char>) max((*var_12), (((/* implicit */val<signed char>) var_6))));
    *var_13 = ((/* implicit */val<bool>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13626764750027595705ULL;
unsigned int var_6 = 3905868131U;
unsigned char var_7 = (unsigned char)70;
int zero = 0;
unsigned int var_10 = 1077365786U;
unsigned char var_11 = (unsigned char)226;
signed char var_12 = (signed char)-30;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0U;
    value_mismatch |= var_11 != (unsigned char)219;
    value_mismatch |= var_12 != (signed char)99;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
