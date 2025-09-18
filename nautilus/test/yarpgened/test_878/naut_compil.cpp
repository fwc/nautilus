/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 878
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=878
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
void test(val<unsigned int> var_2, val<int> var_5, val<short> var_8, val<unsigned short> var_9, val<unsigned char> var_10, val<int> zero, val<bool*> var_12, val<short*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<bool>) -6897152430592036954LL);
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_9)) == (((/* implicit */val<int>) (val<unsigned short>)18025))));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) ^ (var_2)));
    *var_15 = ((/* implicit */val<short>) max((((/* implicit */val<int>) var_10)), ((+(var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1913071006U;
int var_5 = -1763378125;
short var_8 = (short)-14776;
unsigned short var_9 = (unsigned short)15398;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
bool var_12 = (bool)0;
short var_13 = (short)10087;
short var_14 = (short)-6335;
short var_15 = (short)17356;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)0;
    value_mismatch |= var_14 != (short)-7210;
    value_mismatch |= var_15 != (short)170;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
