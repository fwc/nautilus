/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1143
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1143
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
void test(val<bool> var_0, val<unsigned int> var_3, val<unsigned short> var_6, val<bool> var_7, val<bool> var_10, val<long long int> var_11, val<int> var_15, val<int> zero, val<signed char*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (val<signed char>)127)) != (var_15))) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_0)), (var_6))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)247)) / (((/* implicit */val<int>) (val<signed char>)-6))))) ? (((/* implicit */val<long long int>) ((val<unsigned int>) var_10))) : (((val<long long int>) var_0))))));
    *var_17 = ((/* implicit */val<short>) ((var_3) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((min((var_11), (((/* implicit */val<long long int>) var_7)))) != (((/* implicit */val<long long int>) ((val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_3 = 1721940696U;
unsigned short var_6 = (unsigned short)19788;
bool var_7 = (bool)1;
bool var_10 = (bool)0;
long long int var_11 = 8843449379945603088LL;
int var_15 = 6007695;
int zero = 0;
signed char var_16 = (signed char)-89;
short var_17 = (short)-9028;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)76;
    value_mismatch |= var_17 != (short)-17704;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_10, var_11, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
