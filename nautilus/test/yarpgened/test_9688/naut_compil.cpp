/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9688
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9688
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
void test(val<int> var_3, val<int> var_6, val<short> var_9, val<int> zero, val<unsigned long long int*> var_10, val<long long int*> var_11, val<short*> var_12, val<int*> var_13) {
    *var_10 ^= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1723163819)) && ((((+(1775220991))) < (min((((/* implicit */val<int>) var_9)), (-1775220991)))))));
    *var_11 += ((/* implicit */val<long long int>) var_3);
    *var_12 = ((/* implicit */val<short>) var_6);
    *var_13 = ((/* implicit */val<int>) (val<short>)17);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 891523110;
int var_6 = -979176230;
short var_9 = (short)-25658;
int zero = 0;
unsigned long long int var_10 = 9740989322096649659ULL;
long long int var_11 = 5763398522470700798LL;
short var_12 = (short)26356;
int var_13 = -1251818198;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 9740989322096649659ULL;
    value_mismatch |= var_11 != 5763398523362223908LL;
    value_mismatch |= var_12 != (short)-2854;
    value_mismatch |= var_13 != 17;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
