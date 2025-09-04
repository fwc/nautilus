/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6594
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6594
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
void test(val<unsigned char> var_3, val<signed char> var_8, val<signed char> var_10, val<int> zero, val<long long int*> var_11, val<long long int*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) var_8)), (((((((/* implicit */val<bool>) 3295616246U)) || (((/* implicit */val<bool>) (val<short>)-1)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<unsigned long long int>) 3295616240U)) + (9874966869279705623ULL)))))));
    *var_12 = ((/* implicit */val<long long int>) max((*var_12), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_8)) * (((/* implicit */val<int>) var_3)))))));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) 12082524917136787760ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)89;
signed char var_8 = (signed char)97;
signed char var_10 = (signed char)-35;
int zero = 0;
long long int var_11 = 1281480607918445940LL;
long long int var_12 = 2702780147781544718LL;
short var_13 = (short)-5227;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 97LL;
    value_mismatch |= var_12 != 2702780147781544718LL;
    value_mismatch |= var_13 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
