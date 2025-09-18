/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9169
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9169
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
void test(val<long long int> var_8, val<bool> var_12, val<long long int> var_14, val<int> zero, val<int*> var_19, val<bool*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<int>) var_14);
    *var_20 = var_12;
    *var_21 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7220475148076446630LL;
bool var_12 = (bool)0;
long long int var_14 = -579645519256098008LL;
int zero = 0;
int var_19 = -2056005533;
bool var_20 = (bool)1;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1458050264;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (signed char)-90;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
