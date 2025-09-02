/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5219
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5219
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
void test(val<short> var_0, val<short> var_2, val<unsigned long long int> var_6, val<short> var_12, val<int> zero, val<short*> var_15, val<bool*> var_16, val<int*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<short>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_6))))))), ((-(((/* implicit */val<int>) (val<short>)16023))))));
    *var_16 += ((/* implicit */val<bool>) var_12);
    *var_17 = ((/* implicit */val<int>) ((min((((val<long long int>) (val<unsigned short>)40173)), (((/* implicit */val<long long int>) min((var_0), (((/* implicit */val<short>) (val<bool>)0))))))) / (min(((~(8202073011009096994LL))), (min((-8202073011009096986LL), (((/* implicit */val<long long int>) var_2))))))));
    *var_18 = ((/* implicit */val<long long int>) (+(666543073)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12356;
short var_2 = (short)-20040;
unsigned long long int var_6 = 14467810793582711739ULL;
short var_12 = (short)19815;
int zero = 0;
short var_15 = (short)-2171;
bool var_16 = (bool)1;
int var_17 = 1588738829;
long long int var_18 = 2925029283737527429LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-16023;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 666543073LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
