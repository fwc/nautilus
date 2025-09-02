/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2928
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2928
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
void test(val<unsigned char> var_2, val<short> var_3, val<int> var_5, val<unsigned char> var_6, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) min((*var_11), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_10))))))))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_3)), (((((/* implicit */val<bool>) var_6)) ? ((+(((/* implicit */val<int>) var_2)))) : (((((/* implicit */val<bool>) var_10)) ? (var_5) : (((/* implicit */val<int>) (val<bool>)0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
short var_3 = (short)-15155;
int var_5 = 2025113723;
unsigned char var_6 = (unsigned char)207;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
unsigned long long int var_12 = 10932747612317917328ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != 4ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
