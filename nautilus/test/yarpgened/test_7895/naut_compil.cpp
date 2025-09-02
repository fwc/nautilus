/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7895
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7895
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<bool> var_3, val<unsigned char> var_4, val<bool> var_6, val<int> var_15, val<int> zero, val<signed char*> var_19, val<long long int*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) -1634555396)) && (((/* implicit */val<bool>) 1634555382))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) min((((/* implicit */val<int>) var_4)), (-1634555396)))))) + (var_1)));
    *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((1634555396) << (((/* implicit */val<int>) ((var_6) && (((/* implicit */val<bool>) 1634555395)))))))) >= (min((min((var_2), (((/* implicit */val<unsigned int>) var_15)))), (((/* implicit */val<unsigned int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1909002009U;
unsigned int var_2 = 2614663700U;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)160;
bool var_6 = (bool)0;
int var_15 = 2099923489;
int zero = 0;
signed char var_19 = (signed char)41;
long long int var_20 = -5825162467075305871LL;
unsigned int var_21 = 2151956431U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != 1908979989LL;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
