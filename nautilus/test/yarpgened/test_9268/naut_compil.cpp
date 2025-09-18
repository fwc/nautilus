/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9268
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9268
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
void test(val<long long int> var_0, val<short> var_1, val<unsigned short> var_6, val<bool> var_7, val<unsigned short> var_8, val<int> zero, val<long long int*> var_10, val<unsigned int*> var_11, val<unsigned short*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) min((*var_10), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max(((-(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) (val<short>)32753))))) ? (((/* implicit */val<int>) var_6)) : ((+(((((/* implicit */val<int>) var_7)) % (((/* implicit */val<int>) (val<unsigned char>)185)))))))))));
    *var_11 = ((/* implicit */val<unsigned int>) var_1);
    *var_12 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1346265894540910854LL;
short var_1 = (short)-32236;
unsigned short var_6 = (unsigned short)50973;
bool var_7 = (bool)1;
unsigned short var_8 = (unsigned short)418;
int zero = 0;
long long int var_10 = 8265755478228252102LL;
unsigned int var_11 = 3541151292U;
unsigned short var_12 = (unsigned short)58422;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 50973LL;
    value_mismatch |= var_11 != 4294935060U;
    value_mismatch |= var_12 != (unsigned short)24314;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
