/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5269
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
void test(val<int> zero, val<int*> var_20, val<bool*> var_21, val<unsigned int*> var_22, val<signed char*> var_23, val<long long int*> var_24) {
    *var_20 |= ((/* implicit */val<int>) max((3102052130U), (((/* implicit */val<unsigned int>) ((val<bool>) max((1192915185U), (1192915166U)))))));
    *var_21 = ((/* implicit */val<bool>) (~((-(((val<long long int>) 1176220194U))))));
    *var_22 = ((/* implicit */val<unsigned int>) min((*var_22), (1586958379U)));
    *var_23 |= ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) ((val<unsigned short>) max((2538216732424643629ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)14))))))));
    *var_24 = ((/* implicit */val<long long int>) 3102052129U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_20 = -517501797;
bool var_21 = (bool)0;
unsigned int var_22 = 2580857127U;
signed char var_23 = (signed char)-57;
long long int var_24 = 6393637683751945374LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -102264901;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 1586958379U;
    value_mismatch |= var_23 != (signed char)-17;
    value_mismatch |= var_24 != 3102052129LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
