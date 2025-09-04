/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6511
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6511
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
void test(val<unsigned short> var_3, val<unsigned short> var_4, val<unsigned char> var_7, val<unsigned char> var_9, val<int> zero, val<long long int*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<long long int>) max((*var_11), (((((/* implicit */val<bool>) var_9)) ? (-3720245041131152353LL) : ((+(3720245041131152352LL)))))));
    *var_12 = ((/* implicit */val<unsigned char>) ((max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_7))))), ((+(-3720245041131152356LL))))) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) >= (((/* implicit */val<int>) (val<unsigned char>)116))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12283;
unsigned short var_4 = (unsigned short)25137;
unsigned char var_7 = (unsigned char)248;
unsigned char var_9 = (unsigned char)8;
int zero = 0;
long long int var_11 = 4888546601791320535LL;
unsigned char var_12 = (unsigned char)116;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4888546601791320535LL;
    value_mismatch |= var_12 != (unsigned char)49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
