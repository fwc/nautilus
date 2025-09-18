/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2145
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2145
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
void test(val<bool> var_7, val<bool> var_12, val<unsigned char> var_16, val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<short>) ((val<unsigned char>) ((((((/* implicit */val<bool>) (val<short>)2265)) ? (((/* implicit */val<int>) (val<unsigned char>)1)) : (((/* implicit */val<int>) (val<short>)-14414)))) | (((/* implicit */val<int>) min(((val<unsigned char>)185), (var_16)))))));
    *var_19 = ((/* implicit */val<short>) (~(((((val<bool>) (val<signed char>)6)) ? (((/* implicit */val<int>) max((((/* implicit */val<short>) var_12)), ((val<short>)-14489)))) : ((~(((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
bool var_12 = (bool)0;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
short var_18 = (short)3086;
short var_19 = (short)17797;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)185;
    value_mismatch |= var_19 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, var_16, zero, &var_18, &var_19);
  checksum();
}
