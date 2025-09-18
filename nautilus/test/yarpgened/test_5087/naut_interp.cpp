/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5087
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5087
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
void test(val<int> var_0, val<unsigned long long int> var_8, val<bool> var_14, val<int> zero, val<unsigned long long int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = (+(var_8));
    *var_21 = ((/* implicit */val<signed char>) var_0);
    *var_22 -= ((/* implicit */val<unsigned long long int>) max((2147483647), (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2076162831;
unsigned long long int var_8 = 2117428369048574625ULL;
bool var_14 = (bool)1;
int zero = 0;
unsigned long long int var_20 = 8734227180542147420ULL;
signed char var_21 = (signed char)31;
unsigned long long int var_22 = 2138200074238669613ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2117428369048574625ULL;
    value_mismatch |= var_21 != (signed char)15;
    value_mismatch |= var_22 != 2138200072091185966ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
}
