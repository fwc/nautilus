/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3662
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3662
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
void test(val<unsigned int> var_2, val<long long int> var_5, val<unsigned int> var_7, val<int> zero, val<unsigned short*> var_16, val<signed char*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<unsigned int>) 1092001744)) / (741609476U))) >= (var_2)));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((val<unsigned int>) -1092001743))) > (max((var_5), (((/* implicit */val<long long int>) var_7))))));
    *var_18 = ((/* implicit */val<bool>) (+(((val<int>) ((((/* implicit */val<bool>) -1092001748)) ? (((/* implicit */val<long long int>) -1092001761)) : (5675119201794972710LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3001728932U;
long long int var_5 = -415363321289572915LL;
unsigned int var_7 = 1554713293U;
int zero = 0;
unsigned short var_16 = (unsigned short)50072;
signed char var_17 = (signed char)3;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
