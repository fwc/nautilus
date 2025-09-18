/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2939
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2939
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
void test(val<bool> var_3, val<int> var_11, val<bool> var_14, val<signed char> var_16, val<int> zero, val<long long int*> var_18, val<bool*> var_19, val<bool*> var_20, val<bool*> var_21) {
    *var_18 = ((/* implicit */val<long long int>) var_11);
    *var_19 = var_3;
    *var_20 = ((/* implicit */val<bool>) var_16);
    *var_21 = var_14;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
int var_11 = -584811685;
bool var_14 = (bool)0;
signed char var_16 = (signed char)103;
int zero = 0;
long long int var_18 = -3899867075225866218LL;
bool var_19 = (bool)0;
bool var_20 = (bool)1;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -584811685LL;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, var_14, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
