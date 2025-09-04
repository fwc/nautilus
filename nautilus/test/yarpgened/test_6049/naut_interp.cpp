/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6049
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6049
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
void test(val<unsigned char> var_0, val<int> var_1, val<bool> var_4, val<short> var_5, val<unsigned int> var_8, val<bool> var_10, val<int> zero, val<unsigned int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_10)) << (((var_1) - (456753698))))))));
    *var_16 = ((/* implicit */val<long long int>) max((*var_16), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_8)))))), (min((((val<unsigned long long int>) var_0)), (((/* implicit */val<unsigned long long int>) max((var_8), (((/* implicit */val<unsigned int>) var_4))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
int var_1 = 456753723;
bool var_4 = (bool)0;
short var_5 = (short)-9772;
unsigned int var_8 = 2022457084U;
bool var_10 = (bool)1;
int zero = 0;
unsigned int var_15 = 2730611082U;
long long int var_16 = 2750334803415302477LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 33554432U;
    value_mismatch |= var_16 != 2750334803415302477LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_8, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
