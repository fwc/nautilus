/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 899
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=899
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
void test(val<unsigned long long int> var_2, val<unsigned int> var_4, val<long long int> var_5, val<long long int> var_7, val<int> zero, val<bool*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_2)));
    *var_12 = ((/* implicit */val<unsigned char>) max((var_2), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) : (min((var_7), (var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12642873171139731981ULL;
unsigned int var_4 = 4265610135U;
long long int var_5 = -8256655632043263821LL;
long long int var_7 = 7735440477130743684LL;
int zero = 0;
bool var_11 = (bool)0;
unsigned char var_12 = (unsigned char)234;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
