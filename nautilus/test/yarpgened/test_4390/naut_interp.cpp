/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4390
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4390
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
void test(val<unsigned int> var_1, val<int> var_5, val<unsigned long long int> var_6, val<bool> var_9, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((((/* implicit */val<bool>) 19ULL)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) 560021868U)));
    *var_12 = ((/* implicit */val<int>) ((var_6) < (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1582642737U)) ? ((-(var_1))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10)))))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) max((*var_13), (((((val<bool>) var_5)) ? (min((18446744073709551594ULL), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9))))))) : (((/* implicit */val<unsigned long long int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3188717863U;
int var_5 = -34279615;
unsigned long long int var_6 = 15508358190431705075ULL;
bool var_9 = (bool)0;
unsigned long long int var_10 = 7073688275313012326ULL;
int zero = 0;
unsigned long long int var_11 = 8386500894581708632ULL;
int var_12 = -1462015692;
unsigned long long int var_13 = 7613914585232932963ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744073709551615ULL;
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 18446744073709551594ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
