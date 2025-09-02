/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2909
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
void test(val<unsigned char> var_0, val<signed char> var_4, val<short> var_7, val<int> zero, val<long long int*> var_12, val<int*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15) {
    *var_12 |= -3908555571902473863LL;
    *var_13 ^= ((/* implicit */val<int>) var_4);
    *var_14 -= ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)17548))) - ((-(3530244677U))))), (((/* implicit */val<unsigned int>) max((max((var_7), (((/* implicit */val<short>) var_0)))), (((/* implicit */val<short>) ((((/* implicit */val<int>) (val<short>)-1024)) > (((/* implicit */val<int>) (val<bool>)0))))))))));
    *var_15 -= ((/* implicit */val<bool>) (val<unsigned short>)65535);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
signed char var_4 = (signed char)-112;
short var_7 = (short)-22397;
int zero = 0;
long long int var_12 = 5424153515740024293LL;
int var_13 = 715510818;
unsigned long long int var_14 = 11478381170613120007ULL;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -3763188589567943171LL;
    value_mismatch |= var_13 != -715510862;
    value_mismatch |= var_14 != 11478381167082857782ULL;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
