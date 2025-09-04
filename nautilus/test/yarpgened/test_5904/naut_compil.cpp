/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5904
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5904
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
void test(val<long long int> var_3, val<unsigned long long int> var_7, val<signed char> var_8, val<signed char> var_9, val<int> zero, val<unsigned char*> var_13, val<short*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned char>) min((((((/* implicit */val<int>) ((4556838934991060131LL) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) & (((((/* implicit */val<bool>) -1LL)) ? (((/* implicit */val<int>) (val<short>)480)) : (((/* implicit */val<int>) (val<short>)-1)))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) && (((/* implicit */val<bool>) 1016ULL))))) < (((/* implicit */val<int>) (val<short>)-1)))))));
    *var_14 = ((/* implicit */val<short>) var_9);
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<short>)26560)), (8064)))) & (((((/* implicit */val<bool>) ((val<short>) 35184237871104LL))) ? (max((var_7), (((/* implicit */val<unsigned long long int>) var_3)))) : (((val<unsigned long long int>) 1700885824886958026LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5643344450661604087LL;
unsigned long long int var_7 = 5321970879023554755ULL;
signed char var_8 = (signed char)-74;
signed char var_9 = (signed char)-82;
int zero = 0;
unsigned char var_13 = (unsigned char)187;
short var_14 = (short)-15638;
signed char var_15 = (signed char)-102;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != (short)-82;
    value_mismatch |= var_15 != (signed char)-102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
