/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=690
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
void test(val<unsigned char> var_3, val<long long int> var_5, val<unsigned short> var_9, val<unsigned short> var_14, val<unsigned int> var_16, val<long long int> var_17, val<int> zero, val<int*> var_20, val<bool*> var_21, val<unsigned short*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_17))) ? (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) (val<unsigned char>)0))))) | (var_5)));
    *var_21 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)0)), ((val<unsigned short>)16811)));
    *var_22 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (val<signed char>)25))));
    *var_23 |= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_14)) >= (((/* implicit */val<int>) var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)56;
long long int var_5 = -5359422471045768915LL;
unsigned short var_9 = (unsigned short)9037;
unsigned short var_14 = (unsigned short)37027;
unsigned int var_16 = 1730172308U;
long long int var_17 = -9184526211149168939LL;
int zero = 0;
int var_20 = 1976105640;
bool var_21 = (bool)0;
unsigned short var_22 = (unsigned short)5997;
unsigned char var_23 = (unsigned char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1947343165;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (unsigned short)65511;
    value_mismatch |= var_23 != (unsigned char)7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_14, var_16, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
