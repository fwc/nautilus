/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7031
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7031
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned short> var_3, val<unsigned long long int> var_5, val<unsigned short> var_7, val<long long int> var_9, val<long long int> var_10, val<long long int> var_11, val<int> zero, val<int*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) (+(var_9)))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))) ? (((/* implicit */val<unsigned long long int>) var_10)) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_5)))))));
    *var_13 = ((/* implicit */val<short>) ((var_9) | (max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) ^ (var_11))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13766;
signed char var_1 = (signed char)-4;
unsigned short var_3 = (unsigned short)50798;
unsigned long long int var_5 = 8733334845490946544ULL;
unsigned short var_7 = (unsigned short)58421;
long long int var_9 = 9003938615348289781LL;
long long int var_10 = -9104453834283916987LL;
long long int var_11 = -7308868143246448199LL;
int zero = 0;
int var_12 = 2142961227;
short var_13 = (short)-15413;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 994173173;
    value_mismatch |= var_13 != (short)-1025;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_9, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
