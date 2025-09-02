/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1785
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1785
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
void test(val<signed char> var_0, val<signed char> var_3, val<long long int> var_10, val<bool> var_12, val<int> var_15, val<unsigned short> var_16, val<int> var_17, val<int> zero, val<unsigned short*> var_18, val<unsigned int*> var_19, val<signed char*> var_20, val<int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) var_3);
    *var_19 = ((/* implicit */val<unsigned int>) var_15);
    *var_20 -= ((/* implicit */val<signed char>) ((val<unsigned short>) ((((/* implicit */val<int>) max((var_16), (((/* implicit */val<unsigned short>) var_0))))) << (((((var_17) + (1758634236))) - (26))))));
    *var_21 = ((/* implicit */val<int>) max((max((var_10), (((/* implicit */val<long long int>) min((((/* implicit */val<signed char>) var_12)), ((val<signed char>)-106)))))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max(((val<signed char>)99), ((val<signed char>)-81)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_3 = (signed char)-126;
long long int var_10 = -2875491068935132166LL;
bool var_12 = (bool)0;
int var_15 = -1038307005;
unsigned short var_16 = (unsigned short)42622;
int var_17 = -1758634205;
int zero = 0;
unsigned short var_18 = (unsigned short)57995;
unsigned int var_19 = 127226776U;
signed char var_20 = (signed char)-30;
int var_21 = -1157867022;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)65410;
    value_mismatch |= var_19 != 3256660291U;
    value_mismatch |= var_20 != (signed char)34;
    value_mismatch |= var_21 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_12, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
