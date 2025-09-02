/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9915
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
void test(val<short> var_2, val<short> var_4, val<unsigned char> var_8, val<unsigned int> var_9, val<signed char> var_10, val<bool> var_13, val<long long int> var_14, val<int> zero, val<unsigned short*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-20))) == (var_14))) ? (((/* implicit */val<int>) var_8)) : (min((((/* implicit */val<int>) ((val<unsigned short>) var_4))), (min((((/* implicit */val<int>) (val<signed char>)1)), (2147483647)))))));
    *var_16 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)-1)) - (((/* implicit */val<int>) var_2))))), (((val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_4)))))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) (~(((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_13)), (var_9)))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22455;
short var_4 = (short)-11879;
unsigned char var_8 = (unsigned char)43;
unsigned int var_9 = 3273533545U;
signed char var_10 = (signed char)24;
bool var_13 = (bool)1;
long long int var_14 = -9108924569245733294LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46084;
int var_16 = -208752176;
short var_17 = (short)-2530;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != 24;
    value_mismatch |= var_17 != (short)-2530;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_8, var_9, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
