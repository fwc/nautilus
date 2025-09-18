/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6389
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6389
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
void test(val<short> var_1, val<unsigned char> var_2, val<unsigned char> var_5, val<unsigned short> var_7, val<bool> var_8, val<int> zero, val<unsigned char*> var_10, val<short*> var_11, val<signed char*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((-115301287), ((~(((/* implicit */val<int>) var_2))))))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<unsigned char>)129)) : (((/* implicit */val<int>) var_8)))) : ((-(((/* implicit */val<int>) (!((val<bool>)1))))))));
    *var_11 |= ((/* implicit */val<short>) var_7);
    *var_12 *= ((/* implicit */val<signed char>) ((val<unsigned char>) var_1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24826;
unsigned char var_2 = (unsigned char)126;
unsigned char var_5 = (unsigned char)235;
unsigned short var_7 = (unsigned short)64835;
bool var_8 = (bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)131;
short var_11 = (short)-25880;
signed char var_12 = (signed char)-66;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)129;
    value_mismatch |= var_11 != (short)-21;
    value_mismatch |= var_12 != (signed char)-116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
