/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2887
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2887
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
void test(val<signed char> var_1, val<unsigned int> var_6, val<unsigned short> var_10, val<unsigned char> var_11, val<unsigned int> var_15, val<signed char> var_16, val<int> zero, val<bool*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<bool>) var_6);
    *var_19 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_10))))) ? ((~(1806734489219366318ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 3035778532967351256LL)) && (((/* implicit */val<bool>) var_1))))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (-((~(((((/* implicit */val<bool>) var_11)) ? (var_15) : (var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
unsigned int var_6 = 2651368495U;
unsigned short var_10 = (unsigned short)34892;
unsigned char var_11 = (unsigned char)4;
unsigned int var_15 = 2192804444U;
signed char var_16 = (signed char)-95;
int zero = 0;
bool var_18 = (bool)0;
unsigned int var_19 = 1762899485U;
unsigned long long int var_20 = 7327525992117446394ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 2198001965U;
    value_mismatch |= var_20 != 2192804445ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, var_11, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
