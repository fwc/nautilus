/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3994
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3994
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<signed char> var_8, val<unsigned long long int> var_9, val<int> var_14, val<unsigned int> var_16, val<int> zero, val<unsigned char*> var_17, val<int*> var_18, val<int*> var_19, val<short*> var_20) {
    *var_17 += ((/* implicit */val<unsigned char>) 1925796624);
    *var_18 = ((/* implicit */val<int>) var_3);
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) (+(((((/* implicit */val<bool>) min((-1925796596), (((/* implicit */val<int>) (val<unsigned short>)65523))))) ? ((-(var_9))) : (((/* implicit */val<unsigned long long int>) var_16)))))))));
    *var_20 = ((/* implicit */val<short>) min((min((max((var_3), (((/* implicit */val<unsigned long long int>) var_8)))), (((/* implicit */val<unsigned long long int>) max((var_14), (((/* implicit */val<int>) (val<signed char>)102))))))), (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17177101913223065158ULL;
unsigned long long int var_4 = 5960654711795464039ULL;
signed char var_8 = (signed char)95;
unsigned long long int var_9 = 2906808739119067718ULL;
int var_14 = 1255552988;
unsigned int var_16 = 2000783842U;
int zero = 0;
unsigned char var_17 = (unsigned char)109;
int var_18 = -1680308685;
int var_19 = 286568485;
short var_20 = (short)-9287;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)125;
    value_mismatch |= var_18 != -1873285562;
    value_mismatch |= var_19 != 286568485;
    value_mismatch |= var_20 != (short)14300;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
