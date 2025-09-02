/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4799
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4799
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
void test(val<unsigned short> var_3, val<unsigned char> var_4, val<unsigned int> var_8, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) 1836528087))));
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_8) : (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_3)), (max((1836528087), (1836528096))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)717;
unsigned char var_4 = (unsigned char)143;
unsigned int var_8 = 3773716981U;
int zero = 0;
unsigned int var_11 = 2503791477U;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
