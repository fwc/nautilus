/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9807
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9807
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
void test(val<unsigned char> var_0, val<bool> var_3, val<bool> var_5, val<unsigned int> var_6, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) var_6);
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) var_0))));
    *var_14 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) 0U)))) ? (((((var_5) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11)))) >> (((((/* implicit */val<int>) var_3)) >> (((var_6) - (2265559298U))))))) : ((-((+(((/* implicit */val<int>) (val<signed char>)-123))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
bool var_3 = (bool)0;
bool var_5 = (bool)0;
unsigned int var_6 = 2265559316U;
unsigned char var_11 = (unsigned char)219;
int zero = 0;
unsigned char var_12 = (unsigned char)70;
unsigned int var_13 = 429792465U;
signed char var_14 = (signed char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)20;
    value_mismatch |= var_13 != 129U;
    value_mismatch |= var_14 != (signed char)-37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
