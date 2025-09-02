/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3358
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3358
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
void test(val<unsigned int> var_1, val<unsigned int> var_6, val<int> var_8, val<unsigned int> var_13, val<unsigned char> var_15, val<int> zero, val<unsigned char*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((val<bool>) (val<unsigned char>)183)))));
    *var_20 = ((/* implicit */val<int>) max((*var_20), (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_13)) ? (var_8) : (((/* implicit */val<int>) var_15))))) * (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) 295217423)) : (var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 598525198U;
unsigned int var_6 = 2082156506U;
int var_8 = -751679739;
unsigned int var_13 = 1998130761U;
unsigned char var_15 = (unsigned char)117;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
int var_20 = 1640920482;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != 1640920482;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_13, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
