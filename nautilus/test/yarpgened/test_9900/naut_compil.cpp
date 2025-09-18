/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9900
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9900
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
void test(val<unsigned long long int> var_5, val<bool> var_11, val<short> var_12, val<unsigned char> var_15, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) max((*var_20), (((/* implicit */val<unsigned long long int>) var_12))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_15))) == (var_5))));
    *var_22 = ((/* implicit */val<bool>) min((*var_22), (var_11)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16835625158960530622ULL;
bool var_11 = (bool)1;
short var_12 = (short)24590;
unsigned char var_15 = (unsigned char)58;
int zero = 0;
unsigned long long int var_20 = 7957807066817052368ULL;
unsigned long long int var_21 = 12558178236287527644ULL;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 7957807066817052368ULL;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_12, var_15, zero, &var_20, &var_21, &var_22);
  checksum();
}
