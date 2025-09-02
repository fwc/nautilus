/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1956
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1956
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
void test(val<int> var_0, val<unsigned int> var_4, val<signed char> var_5, val<signed char> var_7, val<int> var_8, val<short> var_10, val<int> var_12, val<bool> var_16, val<unsigned int> var_19, val<int> zero, val<unsigned short*> var_20, val<long long int*> var_21, val<signed char*> var_22, val<long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) var_7))));
    *var_21 = ((/* implicit */val<long long int>) max((*var_21), (((/* implicit */val<long long int>) ((val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (var_0) : (((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_10), (((/* implicit */val<short>) var_5)))))) : (var_19)))))));
    *var_22 += ((/* implicit */val<signed char>) var_12);
    *var_23 = ((/* implicit */val<long long int>) max((*var_23), (((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) var_4)) ? ((+(((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) var_16)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1522884460;
unsigned int var_4 = 724531575U;
signed char var_5 = (signed char)-41;
signed char var_7 = (signed char)-22;
int var_8 = -625575672;
short var_10 = (short)-22666;
int var_12 = 1460120844;
bool var_16 = (bool)1;
unsigned int var_19 = 1212092789U;
int zero = 0;
unsigned short var_20 = (unsigned short)41967;
long long int var_21 = -488228381849337379LL;
signed char var_22 = (signed char)-59;
long long int var_23 = 1993294068992618010LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)41967;
    value_mismatch |= var_21 != -41LL;
    value_mismatch |= var_22 != (signed char)-47;
    value_mismatch |= var_23 != 1993294068992618010LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_8, var_10, var_12, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
