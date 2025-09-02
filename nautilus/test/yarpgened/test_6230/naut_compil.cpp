/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6230
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
void test(val<unsigned char> var_1, val<signed char> var_6, val<short> var_11, val<int> zero, val<short*> var_20, val<bool*> var_21) {
    *var_20 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)28)) ^ (-1)))), (min((2178264744U), (((/* implicit */val<unsigned int>) (val<signed char>)-72))))));
    *var_21 *= ((/* implicit */val<bool>) (((-(((((/* implicit */val<int>) (val<signed char>)-26)) + (((/* implicit */val<int>) var_6)))))) - (((((/* implicit */val<bool>) (val<signed char>)-70)) ? (((((/* implicit */val<bool>) (val<signed char>)25)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_11)))) : (((/* implicit */val<int>) min(((val<unsigned char>)167), (((/* implicit */val<unsigned char>) (val<signed char>)33)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
signed char var_6 = (signed char)-52;
short var_11 = (short)30261;
int zero = 0;
short var_20 = (short)22601;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-20824;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_11, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
