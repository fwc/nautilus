/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5814
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5814
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
void test(val<long long int> var_2, val<unsigned short> var_7, val<int> var_9, val<unsigned int> var_12, val<int> var_16, val<int> zero, val<int*> var_17, val<unsigned short*> var_18, val<long long int*> var_19, val<bool*> var_20, val<bool*> var_21) {
    *var_17 &= ((/* implicit */val<int>) (+(var_12)));
    *var_18 = ((/* implicit */val<unsigned short>) min((2291828123U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_9)), (var_2)))) || (((/* implicit */val<bool>) 1023U)))))));
    *var_19 = ((/* implicit */val<long long int>) ((var_16) + (((/* implicit */val<int>) max((((/* implicit */val<short>) (val<unsigned char>)0)), ((val<short>)4095))))));
    *var_20 = ((/* implicit */val<bool>) var_7);
    *var_21 = ((/* implicit */val<bool>) (val<unsigned short>)24);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4405861912920261757LL;
unsigned short var_7 = (unsigned short)40437;
int var_9 = 1463282285;
unsigned int var_12 = 2855268986U;
int var_16 = 952878293;
int zero = 0;
int var_17 = 834805404;
unsigned short var_18 = (unsigned short)59785;
long long int var_19 = 7389247505736097826LL;
bool var_20 = (bool)1;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 537006616;
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != 952882388LL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, var_12, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
