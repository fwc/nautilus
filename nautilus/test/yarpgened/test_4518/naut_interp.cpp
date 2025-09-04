/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4518
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4518
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
void test(val<int> var_0, val<unsigned char> var_4, val<long long int> var_7, val<unsigned short> var_12, val<unsigned char> var_16, val<int> zero, val<int*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22) {
    *var_20 -= ((/* implicit */val<int>) var_4);
    *var_21 |= ((/* implicit */val<unsigned long long int>) ((val<bool>) (val<signed char>)71));
    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)19326)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) : (var_7)))) ? (((/* implicit */val<int>) ((val<bool>) var_0))) : (((/* implicit */val<int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2077491378;
unsigned char var_4 = (unsigned char)189;
long long int var_7 = -6490831478457386424LL;
unsigned short var_12 = (unsigned short)21002;
unsigned char var_16 = (unsigned char)219;
int zero = 0;
int var_20 = -1457508616;
unsigned long long int var_21 = 15677076193363169773ULL;
unsigned int var_22 = 3669813081U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -1457508805;
    value_mismatch |= var_21 != 15677076193363169773ULL;
    value_mismatch |= var_22 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_12, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
