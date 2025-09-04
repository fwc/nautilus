/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2580
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
void test(val<int> var_2, val<unsigned int> var_8, val<unsigned char> var_10, val<int> var_14, val<bool> var_16, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(var_2)))) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))));
    *var_20 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<bool>) (val<signed char>)109)) ? (((/* implicit */val<int>) (val<bool>)1)) : (1518750283))) : (((/* implicit */val<int>) var_16)))), (var_14)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -316283423;
unsigned int var_8 = 3230202295U;
unsigned char var_10 = (unsigned char)161;
int var_14 = -738543388;
bool var_16 = (bool)0;
int zero = 0;
long long int var_19 = -2889939497430468408LL;
unsigned long long int var_20 = 12273115832331026894ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2148022400LL;
    value_mismatch |= var_20 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, var_14, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
