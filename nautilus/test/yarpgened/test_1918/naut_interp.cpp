/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1918
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned long long int> var_3, val<bool> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(max((var_7), (((/* implicit */val<unsigned long long int>) var_1))))))) ? (((((var_3) - (15737715897879538729ULL))) - (((/* implicit */val<unsigned long long int>) (-(-5221665799012159850LL)))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) - (((((/* implicit */val<bool>) var_0)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) -18))))))));
    *var_16 += ((/* implicit */val<unsigned short>) var_1);
    *var_17 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (1040187392U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2368807600U;
bool var_1 = (bool)1;
unsigned long long int var_3 = 8704350295197457142ULL;
bool var_5 = (bool)0;
unsigned long long int var_7 = 15336695064724227645ULL;
unsigned long long int var_13 = 6746097963793599103ULL;
int zero = 0;
unsigned int var_15 = 1713989601U;
unsigned short var_16 = (unsigned short)38358;
short var_17 = (short)10048;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3200376163U;
    value_mismatch |= var_16 != (unsigned short)38359;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
