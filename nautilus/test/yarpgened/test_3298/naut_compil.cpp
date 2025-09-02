/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3298
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3298
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<signed char> var_10, val<unsigned int> var_15, val<unsigned char> var_16, val<int> var_17, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned int>) (~(3LL)));
    *var_20 = (~(((var_7) / (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_15)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_21 = ((/* implicit */val<bool>) max(((~((-(((/* implicit */val<int>) (val<unsigned char>)120)))))), (((/* implicit */val<int>) (!(((((/* implicit */val<int>) (val<signed char>)76)) <= (var_17))))))));
    *var_22 &= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_16))))) ? (((val<unsigned long long int>) var_0)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_10))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))) / (((/* implicit */val<int>) var_10))))) : (var_5));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned long long int var_3 = 13720470250024281780ULL;
unsigned long long int var_5 = 10789901092336669263ULL;
unsigned long long int var_7 = 2556095228534619449ULL;
signed char var_10 = (signed char)87;
unsigned int var_15 = 3673377144U;
unsigned char var_16 = (unsigned char)221;
int var_17 = -522569649;
int zero = 0;
unsigned int var_19 = 1523278752U;
unsigned long long int var_20 = 94577836118800735ULL;
bool var_21 = (bool)0;
unsigned long long int var_22 = 13240867881384976054ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294967292U;
    value_mismatch |= var_20 != 18446744073709551615ULL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_10, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
