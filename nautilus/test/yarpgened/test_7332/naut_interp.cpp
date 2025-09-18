/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7332
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7332
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
void test(val<unsigned int> var_1, val<short> var_4, val<short> var_7, val<unsigned short> var_8, val<int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((var_1), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) min((var_7), (((/* implicit */val<short>) (val<bool>)0))))) | (((/* implicit */val<int>) ((var_18) == (((/* implicit */val<int>) (val<bool>)1))))))))));
    *var_20 = ((((((/* implicit */val<bool>) min((var_8), (((/* implicit */val<unsigned short>) (val<bool>)1))))) || (((/* implicit */val<bool>) var_8)))) || (((/* implicit */val<bool>) var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2912996053U;
short var_4 = (short)-32192;
short var_7 = (short)-11682;
unsigned short var_8 = (unsigned short)15695;
int var_18 = -860502009;
int zero = 0;
unsigned long long int var_19 = 13423547034184372970ULL;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294955614ULL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_8, var_18, zero, &var_19, &var_20);
  checksum();
}
