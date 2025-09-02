/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2674
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2674
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
void test(val<int> var_0, val<bool> var_2, val<int> var_3, val<int> var_8, val<int> zero, val<long long int*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) var_2);
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0)))))))) >= (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_8)), (8U)))) ? ((-(1485249442U))) : (((/* implicit */val<unsigned int>) ((var_3) + (var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1929405514;
bool var_2 = (bool)1;
int var_3 = -2082234126;
int var_8 = 695073343;
int zero = 0;
long long int var_14 = 2385944653782500486LL;
int var_15 = 1315383048;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
