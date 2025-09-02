/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1590
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1590
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
void test(val<int> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<signed char> var_6, val<int> zero, val<int*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<int>) max((*var_16), (max((min((((/* implicit */val<int>) var_6)), (var_2))), (((((/* implicit */val<int>) var_3)) - (((((/* implicit */val<bool>) (val<unsigned char>)124)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned char>)136))))))))));
    *var_17 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 49776572;
unsigned short var_3 = (unsigned short)56681;
unsigned char var_4 = (unsigned char)59;
signed char var_6 = (signed char)65;
int zero = 0;
int var_16 = 240170960;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 240170960;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
