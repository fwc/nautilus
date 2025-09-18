/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7861
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
void test(val<int> var_1, val<long long int> var_2, val<short> var_7, val<unsigned int> var_8, val<int> zero, val<bool*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) var_1);
    *var_12 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (10628386797607765501ULL) : (((/* implicit */val<unsigned long long int>) var_1))))) ? (((((/* implicit */val<bool>) 17661175022321345871ULL)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<bool>)1)))))))) ? ((-(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) var_8)) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<int>) (val<signed char>)0)) << (((((/* implicit */val<int>) (val<unsigned short>)4096)) - (4096)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 228410387;
long long int var_2 = 7486739997500168714LL;
short var_7 = (short)14877;
unsigned int var_8 = 295807545U;
int zero = 0;
bool var_11 = (bool)0;
long long int var_12 = 40572226505791745LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != -295807545LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, zero, &var_11, &var_12);
  checksum();
}
