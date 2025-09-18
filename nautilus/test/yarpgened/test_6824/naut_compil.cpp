/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6824
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
void test(val<bool> var_3, val<unsigned char> var_10, val<unsigned int> var_11, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_14 += ((/* implicit */val<unsigned char>) var_3);
    *var_15 = ((/* implicit */val<unsigned long long int>) var_10);
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? ((-(((val<unsigned int>) -1280061158)))) : (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned char var_10 = (unsigned char)173;
unsigned int var_11 = 3756404832U;
unsigned int var_13 = 2890912124U;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
unsigned long long int var_15 = 5867909132378077690ULL;
unsigned long long int var_16 = 17223932574526428279ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)172;
    value_mismatch |= var_15 != 173ULL;
    value_mismatch |= var_16 != 1280061158ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
