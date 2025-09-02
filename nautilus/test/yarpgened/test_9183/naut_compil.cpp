/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9183
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9183
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
void test(val<long long int> var_0, val<bool> var_3, val<bool> var_7, val<int> var_10, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_14 = ((/* implicit */val<int>) var_3);
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) ((val<bool>) var_0)))))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-32759))) ^ (272268281U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -782853762611880168LL;
bool var_3 = (bool)0;
bool var_7 = (bool)0;
int var_10 = 1777323463;
int zero = 0;
unsigned long long int var_13 = 17433857454627884479ULL;
int var_14 = -821514848;
unsigned char var_15 = (unsigned char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != (unsigned char)254;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
