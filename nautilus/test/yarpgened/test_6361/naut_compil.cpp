/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6361
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6361
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
void test(val<bool> var_2, val<short> var_6, val<unsigned long long int> var_10, val<int> var_13, val<int> zero, val<unsigned int*> var_20, val<bool*> var_21) {
    *var_20 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) var_13)) <= (((((/* implicit */val<bool>) -1)) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) var_2)), (545209711U)))) : (var_10)))));
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (3989767985358269651ULL) : (((/* implicit */val<unsigned long long int>) -24)))) : (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
short var_6 = (short)-16474;
unsigned long long int var_10 = 6427729734164055152ULL;
int var_13 = 1021939796;
int zero = 0;
unsigned int var_20 = 2003348011U;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2003348011U;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_10, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
