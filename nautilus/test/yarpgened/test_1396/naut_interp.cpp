/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1396
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1396
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
void test(val<bool> var_6, val<bool> var_7, val<int> var_8, val<bool> var_9, val<int> var_11, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 = max(((+((+(0ULL))))), (((/* implicit */val<unsigned long long int>) var_8)));
    *var_19 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) var_6)), (3944328239U)))), (max((8469042111878237077ULL), (((/* implicit */val<unsigned long long int>) var_11))))))) ? (var_11) : (((((/* implicit */val<bool>) min((((/* implicit */val<signed char>) var_7)), ((val<signed char>)53)))) ? (((/* implicit */val<int>) (val<signed char>)8)) : ((-(((/* implicit */val<int>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
bool var_7 = (bool)1;
int var_8 = -41959855;
bool var_9 = (bool)0;
int var_11 = 1663702502;
int zero = 0;
unsigned long long int var_18 = 16138734445330477107ULL;
signed char var_19 = (signed char)25;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 18446744073667591761ULL;
    value_mismatch |= var_19 != (signed char)51;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, var_9, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
