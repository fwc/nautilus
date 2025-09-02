/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9542
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9542
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
void test(val<unsigned short> var_2, val<short> var_9, val<long long int> var_10, val<int> zero, val<int*> var_18, val<short*> var_19) {
    *var_18 = (((!(((/* implicit */val<bool>) var_10)))) ? (((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) >> (((/* implicit */val<int>) min(((val<unsigned char>)0), ((val<unsigned char>)103)))))) : (-1230455209));
    *var_19 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4813;
short var_9 = (short)10959;
long long int var_10 = -1472701270620086087LL;
int zero = 0;
int var_18 = -858035514;
short var_19 = (short)20980;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1230455209;
    value_mismatch |= var_19 != (short)4813;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_10, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
