/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5662
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5662
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
void test(val<unsigned char> var_4, val<int> var_5, val<int> var_9, val<unsigned int> var_12, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned short>) max((min((max((var_12), (var_15))), (((val<unsigned int>) var_5)))), (max((min((3180939559U), (var_12))), (((/* implicit */val<unsigned int>) var_4))))));
    *var_18 = ((/* implicit */val<bool>) var_15);
    *var_19 = ((/* implicit */val<short>) ((max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (val<signed char>)0))))), (max((((/* implicit */val<unsigned int>) (val<unsigned char>)5)), (1730534398U))))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)139;
int var_5 = -480106645;
int var_9 = 889648030;
unsigned int var_12 = 482065438U;
unsigned int var_15 = 1697279817U;
int zero = 0;
unsigned short var_17 = (unsigned short)5529;
bool var_18 = (bool)1;
short var_19 = (short)25029;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)28489;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_9, var_12, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
