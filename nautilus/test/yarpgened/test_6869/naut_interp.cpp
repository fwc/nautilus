/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6869
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6869
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
void test(val<unsigned long long int> var_2, val<bool> var_6, val<signed char> var_7, val<unsigned long long int> var_9, val<int> zero, val<bool*> var_17, val<long long int*> var_18, val<signed char*> var_19) {
    *var_17 = var_6;
    *var_18 = ((/* implicit */val<long long int>) max((var_2), (var_9)));
    *var_19 = var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8644093909472736089ULL;
bool var_6 = (bool)1;
signed char var_7 = (signed char)-82;
unsigned long long int var_9 = 12790301773240746464ULL;
int zero = 0;
bool var_17 = (bool)1;
long long int var_18 = -1063613207484437476LL;
signed char var_19 = (signed char)59;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -5656442300468805152LL;
    value_mismatch |= var_19 != (signed char)-82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_9, zero, &var_17, &var_18, &var_19);
  checksum();
}
