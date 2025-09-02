/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2173
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2173
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
void test(val<int> var_1, val<unsigned short> var_2, val<bool> var_5, val<unsigned short> var_9, val<int> zero, val<int*> var_10, val<short*> var_11) {
    *var_10 += ((/* implicit */val<int>) var_9);
    *var_11 = ((/* implicit */val<short>) min((*var_11), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) max(((val<unsigned short>)61642), (((/* implicit */val<unsigned short>) var_5)))))))) / (max((((((/* implicit */val<bool>) (val<unsigned short>)61642)) ? (0ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))), (((/* implicit */val<unsigned long long int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1759659713;
unsigned short var_2 = (unsigned short)31455;
bool var_5 = (bool)0;
unsigned short var_9 = (unsigned short)36075;
int zero = 0;
int var_10 = -1880508163;
short var_11 = (short)29835;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1880472088;
    value_mismatch |= var_11 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
