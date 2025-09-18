/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7717
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7717
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<signed char> var_6, val<int> zero, val<signed char*> var_17, val<int*> var_18, val<signed char*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<signed char>) (val<unsigned char>)140);
    *var_18 += ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_6))))) != ((-(var_0)))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) (((-2147483647 - 1)) * (((/* implicit */val<int>) (val<bool>)1))))) < ((-(1513059406U)))));
    *var_20 = min((((/* implicit */val<int>) ((val<unsigned short>) ((val<unsigned char>) (val<bool>)1)))), ((+(((/* implicit */val<int>) var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3042625454U;
unsigned char var_2 = (unsigned char)24;
signed char var_6 = (signed char)-84;
int zero = 0;
signed char var_17 = (signed char)17;
int var_18 = -1542741548;
signed char var_19 = (signed char)115;
int var_20 = -1190968538;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-116;
    value_mismatch |= var_18 != -1542741547;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
