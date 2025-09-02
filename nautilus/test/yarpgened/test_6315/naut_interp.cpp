/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6315
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6315
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned int> var_8, val<unsigned long long int> var_9, val<signed char> var_14, val<int> zero, val<signed char*> var_15, val<unsigned short*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) ((((val<long long int>) max((((/* implicit */val<unsigned long long int>) var_8)), (var_9)))) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))));
    *var_16 |= ((/* implicit */val<unsigned short>) var_2);
    *var_17 = ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37562;
unsigned long long int var_2 = 10112651522551416962ULL;
unsigned int var_8 = 3670707796U;
unsigned long long int var_9 = 18124177732246382263ULL;
signed char var_14 = (signed char)6;
int zero = 0;
signed char var_15 = (signed char)8;
unsigned short var_16 = (unsigned short)38572;
long long int var_17 = -6355352566164794968LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-3;
    value_mismatch |= var_16 != (unsigned short)40622;
    value_mismatch |= var_17 != 37562LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_9, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
