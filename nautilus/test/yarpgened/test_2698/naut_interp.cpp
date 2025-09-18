/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2698
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2698
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
void test(val<unsigned int> var_3, val<unsigned long long int> var_6, val<unsigned short> var_7, val<unsigned long long int> var_9, val<signed char> var_10, val<int> zero, val<long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (((~(var_6))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))))) : (((/* implicit */val<int>) var_10))));
    *var_13 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_3)), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 300545923U;
unsigned long long int var_6 = 6845945038864157686ULL;
unsigned short var_7 = (unsigned short)40739;
unsigned long long int var_9 = 17479140089859123749ULL;
signed char var_10 = (signed char)6;
int zero = 0;
long long int var_12 = 5411131459135692080LL;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1LL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_7, var_9, var_10, zero, &var_12, &var_13);
  checksum();
}
