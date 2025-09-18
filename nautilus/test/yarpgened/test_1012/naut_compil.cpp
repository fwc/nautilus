/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1012
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1012
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
void test(val<bool> var_1, val<unsigned long long int> var_3, val<short> var_8, val<unsigned int> var_9, val<int> zero, val<long long int*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) >= (((/* implicit */val<int>) (val<bool>)0)))))) < (((((/* implicit */val<bool>) ((val<signed char>) 3206313708U))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)11858)) / (((/* implicit */val<int>) var_8))))) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) -53600094)) : (3206313708U)))))));
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 868211361)) ? (min((var_3), (((/* implicit */val<unsigned long long int>) (val<bool>)1)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)40240))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_3 = 9553937835371834492ULL;
short var_8 = (short)6368;
unsigned int var_9 = 3500347549U;
int zero = 0;
long long int var_13 = -5701109522915189139LL;
signed char var_14 = (signed char)50;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != (signed char)50;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_9, zero, &var_13, &var_14);
  checksum();
}
