/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3613
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3613
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
void test(val<int> var_0, val<bool> var_1, val<unsigned char> var_6, val<int> zero, val<bool*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) (val<unsigned char>)162))));
    *var_13 = ((/* implicit */val<unsigned char>) (-(((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))) + (min((var_0), (((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 929594243;
bool var_1 = (bool)1;
unsigned char var_6 = (unsigned char)174;
int zero = 0;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)192;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned char)254;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, zero, &var_12, &var_13);
  checksum();
}
