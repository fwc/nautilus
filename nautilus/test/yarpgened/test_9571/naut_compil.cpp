/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9571
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9571
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
void test(val<short> var_0, val<signed char> var_1, val<short> var_5, val<signed char> var_6, val<unsigned char> var_7, val<signed char> var_13, val<signed char> var_15, val<long long int> var_16, val<int> zero, val<long long int*> var_20, val<unsigned long long int*> var_21, val<signed char*> var_22, val<signed char*> var_23, val<long long int*> var_24) {
    *var_20 = ((/* implicit */val<long long int>) var_7);
    *var_21 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<short>) var_1)), (min((((/* implicit */val<short>) max((var_6), (var_6)))), (var_0)))));
    *var_23 = ((/* implicit */val<signed char>) min((*var_23), (((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_15)))))))))));
    *var_24 ^= var_16;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21730;
signed char var_1 = (signed char)56;
short var_5 = (short)5769;
signed char var_6 = (signed char)-57;
unsigned char var_7 = (unsigned char)146;
signed char var_13 = (signed char)22;
signed char var_15 = (signed char)114;
long long int var_16 = 3622486710207560228LL;
int zero = 0;
long long int var_20 = 5031289486627137617LL;
unsigned long long int var_21 = 10257272364696469755ULL;
signed char var_22 = (signed char)-117;
signed char var_23 = (signed char)55;
long long int var_24 = 501487703880088765LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 146LL;
    value_mismatch |= var_21 != 21730ULL;
    value_mismatch |= var_22 != (signed char)-57;
    value_mismatch |= var_23 != (signed char)-23;
    value_mismatch |= var_24 != 3796547751911687833LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_7, var_13, var_15, var_16, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
