/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 567
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=567
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
void test(val<unsigned long long int> var_0, val<long long int> var_5, val<bool> var_9, val<bool> var_10, val<unsigned char> var_12, val<int> zero, val<int*> var_14, val<short*> var_15) {
    *var_14 ^= max((((/* implicit */val<int>) var_10)), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_12)) || (var_9)))))));
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) max((((/* implicit */val<int>) ((val<short>) var_0))), (((((/* implicit */val<int>) ((var_5) <= (var_5)))) >> (((var_5) + (4918984479896687331LL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1003373154180548344ULL;
long long int var_5 = -4918984479896687325LL;
bool var_9 = (bool)1;
bool var_10 = (bool)1;
unsigned char var_12 = (unsigned char)72;
int zero = 0;
int var_14 = -1446936251;
short var_15 = (short)-11913;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1446936252;
    value_mismatch |= var_15 != (short)18168;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, var_10, var_12, zero, &var_14, &var_15);
  checksum();
}
