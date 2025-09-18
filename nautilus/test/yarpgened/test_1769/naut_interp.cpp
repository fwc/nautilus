/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1769
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1769
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
void test(val<signed char> var_0, val<long long int> var_4, val<bool> var_6, val<short> var_13, val<int> var_16, val<int> zero, val<unsigned short*> var_18, val<bool*> var_19) {
    *var_18 += ((/* implicit */val<unsigned short>) min((min((((/* implicit */val<unsigned int>) var_6)), (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)216))) : (1420732153U))))), (((/* implicit */val<unsigned int>) ((var_4) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))))))));
    *var_19 = ((/* implicit */val<bool>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
long long int var_4 = 8715669442994198715LL;
bool var_6 = (bool)1;
short var_13 = (short)31411;
int var_16 = 2039775815;
int zero = 0;
unsigned short var_18 = (unsigned short)61474;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)61475;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_13, var_16, zero, &var_18, &var_19);
  checksum();
}
