/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9044
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9044
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
void test(val<unsigned char> var_1, val<unsigned char> var_2, val<signed char> var_3, val<long long int> var_4, val<unsigned int> var_6, val<unsigned short> var_8, val<signed char> var_9, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<signed char*> var_13) {
    *var_11 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_8))))) : (min((((/* implicit */val<long long int>) var_3)), (var_4)))))) ? (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) var_2))))), (((3810560390987581438ULL) - (((/* implicit */val<unsigned long long int>) var_6)))))) : (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) 130185199U)) ? (9223372036854775791LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))), (((/* implicit */val<long long int>) ((val<short>) var_1))))))));
    *var_12 = ((/* implicit */val<signed char>) min((*var_12), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 873247436)) ? (((/* implicit */val<long long int>) 4294967277U)) : (-7661581284766618424LL)))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<unsigned short>)1401)) : (((/* implicit */val<int>) (val<signed char>)125)))))))));
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) max(((-(((((/* implicit */val<int>) (val<short>)14356)) / ((-2147483647 - 1)))))), (((/* implicit */val<int>) ((val<signed char>) (val<signed char>)37))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
unsigned char var_2 = (unsigned char)101;
signed char var_3 = (signed char)-57;
long long int var_4 = 4194243466005157654LL;
unsigned int var_6 = 1375086829U;
unsigned short var_8 = (unsigned short)9999;
signed char var_9 = (signed char)101;
signed char var_10 = (signed char)87;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
signed char var_12 = (signed char)-125;
signed char var_13 = (signed char)12;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)28;
    value_mismatch |= var_12 != (signed char)-125;
    value_mismatch |= var_13 != (signed char)37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
