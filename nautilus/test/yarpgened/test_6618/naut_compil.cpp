/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6618
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6618
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
void test(val<unsigned char> var_1, val<unsigned int> var_4, val<short> var_8, val<int> zero, val<signed char*> var_10, val<short*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) min((*var_10), (((/* implicit */val<signed char>) var_4))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) == (4208963228751582964ULL)));
    *var_12 = ((/* implicit */val<unsigned int>) min((*var_12), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)12)) & (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<short>)-29598)) : (((/* implicit */val<int>) var_1))))))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<signed char>)-42)), (var_8))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned int var_4 = 336773275U;
short var_8 = (short)21154;
int zero = 0;
signed char var_10 = (signed char)-31;
short var_11 = (short)23830;
unsigned int var_12 = 3111352033U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-101;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
