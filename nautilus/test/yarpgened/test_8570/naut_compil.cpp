/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8570
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8570
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned char> var_3, val<unsigned long long int> var_15, val<int> zero, val<unsigned int*> var_18, val<bool*> var_19) {
    *var_18 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_2)) / (((/* implicit */val<int>) ((val<unsigned char>) var_3)))));
    *var_19 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_15) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)64;
unsigned long long int var_15 = 11268294321129473821ULL;
int zero = 0;
unsigned int var_18 = 4236486699U;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4236486699U;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
