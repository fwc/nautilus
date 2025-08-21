/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 956
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=956
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
void test(val<unsigned short> var_0, val<unsigned short> var_3, val<short> var_4, val<unsigned short> var_7, val<signed char> var_8, val<long long int> var_9, val<unsigned short> var_11, val<int> zero, val<signed char*> var_18, val<bool*> var_19, val<bool*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) != (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) | (var_9))))))));
    *var_19 |= ((/* implicit */val<bool>) min((var_0), ((val<unsigned short>)43251)));
    *var_20 = ((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) var_7)));
    *var_21 &= ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)452;
unsigned short var_3 = (unsigned short)29440;
short var_4 = (short)21253;
unsigned short var_7 = (unsigned short)44973;
signed char var_8 = (signed char)-99;
long long int var_9 = -5194270008401218026LL;
unsigned short var_11 = (unsigned short)7729;
int zero = 0;
signed char var_18 = (signed char)-17;
bool var_19 = (bool)0;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)234;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)136;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_8, var_9, var_11, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
