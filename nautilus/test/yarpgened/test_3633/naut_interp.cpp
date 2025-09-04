/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3633
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3633
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
void test(val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_11, val<unsigned short*> var_12, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    *var_11 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<unsigned char>) var_9)))));
    *var_12 = ((/* implicit */val<unsigned short>) min(((+(var_7))), (max((var_4), (max((var_7), (((/* implicit */val<unsigned long long int>) var_2))))))));
    *var_13 = ((var_8) << (((var_2) - (1688086923U))));
    *var_14 = ((/* implicit */val<signed char>) min((*var_14), (((/* implicit */val<signed char>) ((val<unsigned char>) var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1688086942U;
unsigned long long int var_4 = 16499672849182202137ULL;
unsigned long long int var_7 = 13576481258892346097ULL;
unsigned long long int var_8 = 14015241169178325176ULL;
bool var_9 = (bool)0;
int zero = 0;
unsigned long long int var_11 = 8995991206809287500ULL;
unsigned short var_12 = (unsigned short)49114;
unsigned long long int var_13 = 15762110074704284750ULL;
signed char var_14 = (signed char)-78;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != (unsigned short)49905;
    value_mismatch |= var_13 != 2068016924087812096ULL;
    value_mismatch |= var_14 != (signed char)-98;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
