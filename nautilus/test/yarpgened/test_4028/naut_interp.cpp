/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4028
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4028
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
void test(val<unsigned short> var_0, val<bool> var_3, val<long long int> var_4, val<short> var_5, val<unsigned short> var_6, val<long long int> var_9, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11, val<short*> var_12, val<unsigned char*> var_13) {
    *var_10 = var_6;
    *var_11 *= ((/* implicit */val<signed char>) var_9);
    *var_12 = ((/* implicit */val<short>) var_4);
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((var_4), (((/* implicit */val<long long int>) var_0))))) || (((/* implicit */val<bool>) (((+(-1535300105654399496LL))) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), (var_5))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21939;
bool var_3 = (bool)1;
long long int var_4 = -2987826015677504975LL;
short var_5 = (short)24615;
unsigned short var_6 = (unsigned short)14079;
long long int var_9 = -2868529517828967731LL;
int zero = 0;
unsigned short var_10 = (unsigned short)5496;
signed char var_11 = (signed char)-5;
short var_12 = (short)-31605;
unsigned char var_13 = (unsigned char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)14079;
    value_mismatch |= var_11 != (signed char)-1;
    value_mismatch |= var_12 != (short)8753;
    value_mismatch |= var_13 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
