/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2548
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2548
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
void test(val<int> var_6, val<long long int> var_7, val<signed char> var_8, val<signed char> var_12, val<unsigned short> var_14, val<long long int> var_18, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_19 = var_7;
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_12)) || (((/* implicit */val<bool>) var_18))));
    *var_21 = ((((((/* implicit */val<bool>) var_18)) ? ((-(3029710368U))) : (((/* implicit */val<unsigned int>) var_6)))) != (((/* implicit */val<unsigned int>) ((val<int>) max((((/* implicit */val<unsigned short>) (val<signed char>)-63)), (var_14))))));
    *var_22 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1507472667;
long long int var_7 = 4513262167536158013LL;
signed char var_8 = (signed char)-74;
signed char var_12 = (signed char)-56;
unsigned short var_14 = (unsigned short)10132;
long long int var_18 = 5969843809306256036LL;
int zero = 0;
long long int var_19 = 3434088536715187467LL;
signed char var_20 = (signed char)26;
bool var_21 = (bool)0;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4513262167536158013LL;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, var_12, var_14, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
