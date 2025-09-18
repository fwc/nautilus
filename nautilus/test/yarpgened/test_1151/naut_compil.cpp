/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1151
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1151
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
void test(val<bool> var_0, val<unsigned char> var_3, val<unsigned char> var_5, val<unsigned int> var_6, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_11 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_3)), (var_6)));
    *var_12 -= ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned char>)54))) % (((/* implicit */val<int>) var_5)))) >> (((/* implicit */val<int>) var_0))));
    *var_13 = ((/* implicit */val<unsigned short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_3 = (unsigned char)159;
unsigned char var_5 = (unsigned char)225;
unsigned int var_6 = 3330006918U;
int zero = 0;
unsigned short var_10 = (unsigned short)27057;
long long int var_11 = -6765500236544232942LL;
signed char var_12 = (signed char)-90;
unsigned short var_13 = (unsigned short)56233;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)1;
    value_mismatch |= var_11 != 3330006918LL;
    value_mismatch |= var_12 != (signed char)-117;
    value_mismatch |= var_13 != (unsigned short)225;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
