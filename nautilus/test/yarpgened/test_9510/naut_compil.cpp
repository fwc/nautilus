/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9510
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9510
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
void test(val<unsigned char> var_0, val<int> var_1, val<signed char> var_6, val<unsigned long long int> var_8, val<int> zero, val<signed char*> var_11, val<unsigned char*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)28)) | (((((/* implicit */val<int>) (val<bool>)0)) | (((/* implicit */val<int>) (val<short>)-979))))))) / (((val<unsigned long long int>) var_0))));
    *var_12 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<int>) (val<short>)-979)), (((max((((/* implicit */val<int>) (val<short>)-24466)), (var_1))) | (((/* implicit */val<int>) ((val<bool>) var_6)))))));
    *var_13 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
int var_1 = -1593588316;
signed char var_6 = (signed char)-99;
unsigned long long int var_8 = 13944208656798769981ULL;
int zero = 0;
signed char var_11 = (signed char)30;
unsigned char var_12 = (unsigned char)58;
signed char var_13 = (signed char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)116;
    value_mismatch |= var_12 != (unsigned char)45;
    value_mismatch |= var_13 != (signed char)61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
