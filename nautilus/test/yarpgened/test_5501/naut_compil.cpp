/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5501
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5501
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
void test(val<unsigned char> var_2, val<unsigned int> var_3, val<unsigned char> var_4, val<int> zero, val<unsigned short*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) 1962104356U)) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<signed char>)39)), (var_2)))) : (((/* implicit */val<int>) var_4))))));
    *var_12 = ((/* implicit */val<signed char>) (~(min((((/* implicit */val<unsigned int>) var_4)), (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)67;
unsigned int var_3 = 3707074068U;
unsigned char var_4 = (unsigned char)243;
int zero = 0;
unsigned short var_11 = (unsigned short)61418;
signed char var_12 = (signed char)100;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)67;
    value_mismatch |= var_12 != (signed char)12;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, zero, &var_11, &var_12);
  checksum();
}
