/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3103
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3103
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_2, val<signed char> var_3, val<unsigned int> var_5, val<signed char> var_11, val<int> zero, val<unsigned char*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_2))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1125899906842623ULL))))) + (((((/* implicit */val<int>) var_11)) % (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)127)) : (((/* implicit */val<int>) (val<unsigned char>)255))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2217698362538831554ULL;
unsigned char var_2 = (unsigned char)1;
signed char var_3 = (signed char)1;
unsigned int var_5 = 891149964U;
signed char var_11 = (signed char)-116;
int zero = 0;
unsigned char var_15 = (unsigned char)175;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
