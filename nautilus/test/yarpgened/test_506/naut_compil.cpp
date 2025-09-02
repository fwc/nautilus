/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 506
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=506
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
void test(val<int> var_0, val<short> var_1, val<unsigned int> var_3, val<unsigned long long int> var_5, val<int> var_9, val<unsigned long long int> var_10, val<int> zero, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned long long int>) var_3)), (((((/* implicit */val<bool>) var_5)) ? (3163424228402268322ULL) : (var_10))))) >> (((var_0) - (952470946)))));
    *var_13 = ((/* implicit */val<unsigned short>) ((var_9) << (((min((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (var_10))), (((/* implicit */val<unsigned long long int>) var_0)))) - (952470989ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 952470990;
short var_1 = (short)-21415;
unsigned int var_3 = 4132769993U;
unsigned long long int var_5 = 9003152915231555979ULL;
int var_9 = 873144676;
unsigned long long int var_10 = 10702647554977881762ULL;
int zero = 0;
signed char var_12 = (signed char)-98;
unsigned short var_13 = (unsigned short)26054;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (unsigned short)17096;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
