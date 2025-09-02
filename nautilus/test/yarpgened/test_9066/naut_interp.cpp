/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9066
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
void test(val<short> var_1, val<bool> var_2, val<unsigned long long int> var_4, val<bool> var_6, val<unsigned long long int> var_8, val<bool> var_11, val<int> zero, val<unsigned long long int*> var_14, val<bool*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<short>) var_6)), (var_1)));
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (0ULL)));
    *var_16 += ((/* implicit */val<unsigned char>) ((val<bool>) ((((11135475410262717238ULL) != (18446744073709551586ULL))) ? (((((/* implicit */val<bool>) 7311268663446834378ULL)) ? (var_4) : (18446744073709551615ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16431;
bool var_2 = (bool)0;
unsigned long long int var_4 = 17711650759886590714ULL;
bool var_6 = (bool)0;
unsigned long long int var_8 = 518417327884328799ULL;
bool var_11 = (bool)0;
int zero = 0;
unsigned long long int var_14 = 14479241436052653930ULL;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)77;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned char)78;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_8, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
