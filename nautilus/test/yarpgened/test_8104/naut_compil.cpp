/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8104
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
void test(val<unsigned char> var_0, val<int> var_2, val<long long int> var_4, val<unsigned long long int> var_11, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_16, val<bool*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) max((((val<long long int>) var_14)), ((~(var_4)))));
    *var_17 = ((/* implicit */val<bool>) var_2);
    *var_18 ^= ((/* implicit */val<signed char>) ((var_11) ^ (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) == (1224832273U))))) : ((~(var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
int var_2 = -1262727767;
long long int var_4 = -8801389464724288446LL;
unsigned long long int var_11 = 10350968171494374069ULL;
signed char var_14 = (signed char)123;
int zero = 0;
unsigned long long int var_16 = 7580649409464863443ULL;
bool var_17 = (bool)1;
signed char var_18 = (signed char)56;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 8801389464724288445ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (signed char)-115;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_11, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
