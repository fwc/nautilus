/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2205
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2205
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
void test(val<long long int> var_1, val<short> var_2, val<unsigned int> var_3, val<unsigned long long int> var_4, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_12, val<bool*> var_13, val<bool*> var_14) {
    *var_12 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) max((((val<unsigned short>) var_1)), (((/* implicit */val<unsigned short>) var_2)))));
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)252)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((val<unsigned short>) (val<unsigned char>)44)), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_3))))))))) : (((((/* implicit */val<bool>) (+(var_3)))) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)255)))))));
    *var_14 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(var_4)))) ? (((/* implicit */val<int>) (val<unsigned char>)218)) : (((((/* implicit */val<bool>) 544775662U)) ? (((/* implicit */val<int>) (val<signed char>)-80)) : (((/* implicit */val<int>) (val<signed char>)-1))))))), (((((/* implicit */val<bool>) 978736874U)) ? (((val<unsigned int>) 794594893)) : (544775662U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7859481339708089473LL;
short var_2 = (short)-19611;
unsigned int var_3 = 3263838955U;
unsigned long long int var_4 = 16644649946449056165ULL;
unsigned int var_10 = 3904820924U;
int zero = 0;
unsigned int var_12 = 370525766U;
bool var_13 = (bool)0;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 45925U;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
