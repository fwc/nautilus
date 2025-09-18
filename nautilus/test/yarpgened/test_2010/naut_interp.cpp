/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2010
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2010
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
void test(val<long long int> var_0, val<long long int> var_3, val<unsigned short> var_6, val<bool> var_11, val<short> var_12, val<int> var_16, val<unsigned char> var_18, val<int> zero, val<int*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) var_3)) ? ((+(var_0))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))), (min((((/* implicit */val<long long int>) var_6)), (var_3)))));
    *var_21 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) min((min((((/* implicit */val<int>) var_12)), (var_16))), ((~(((/* implicit */val<int>) var_11)))))));
    *var_22 = ((/* implicit */val<unsigned char>) min((*var_22), (max((((/* implicit */val<unsigned char>) var_11)), (var_18)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1520273383052698680LL;
long long int var_3 = 6294018742100644260LL;
unsigned short var_6 = (unsigned short)59388;
bool var_11 = (bool)0;
short var_12 = (short)-3515;
int var_16 = 2057634727;
unsigned char var_18 = (unsigned char)129;
int zero = 0;
int var_20 = -1493668367;
unsigned int var_21 = 1880956962U;
unsigned char var_22 = (unsigned char)165;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -1314284600;
    value_mismatch |= var_21 != 62021U;
    value_mismatch |= var_22 != (unsigned char)129;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_11, var_12, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
}
