/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9397
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9397
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
void test(val<unsigned int> var_1, val<signed char> var_4, val<signed char> var_8, val<unsigned short> var_11, val<unsigned int> var_13, val<int> var_14, val<signed char> var_16, val<int> zero, val<unsigned char*> var_18, val<int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_8))))) && (((/* implicit */val<bool>) max((var_1), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_16))))))))));
    *var_19 = ((/* implicit */val<int>) min((*var_19), ((+(((/* implicit */val<int>) var_4))))));
    *var_20 = ((/* implicit */val<bool>) max((*var_20), (((/* implicit */val<bool>) min((((/* implicit */val<int>) min((var_11), (((/* implicit */val<unsigned short>) ((val<signed char>) (val<signed char>)-86)))))), (min((var_14), (((/* implicit */val<int>) (((val<bool>)0) || (((/* implicit */val<bool>) var_13))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2301665888U;
signed char var_4 = (signed char)-100;
signed char var_8 = (signed char)104;
unsigned short var_11 = (unsigned short)39833;
unsigned int var_13 = 640965374U;
int var_14 = 1015703256;
signed char var_16 = (signed char)-77;
int zero = 0;
unsigned char var_18 = (unsigned char)169;
int var_19 = -380095410;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != -380095410;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_11, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
