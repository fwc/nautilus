/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5113
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5113
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<unsigned short> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<bool> var_8, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) ((val<bool>) ((var_8) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_1))));
    *var_12 |= ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) min((var_3), (((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) < (var_4)))))))) % (min((-5636440602933081170LL), (((/* implicit */val<long long int>) min((var_4), (((/* implicit */val<unsigned int>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65341;
unsigned long long int var_1 = 11989031038560508664ULL;
unsigned short var_3 = (unsigned short)25431;
unsigned int var_4 = 2773766452U;
unsigned short var_5 = (unsigned short)39190;
bool var_8 = (bool)0;
int zero = 0;
unsigned int var_11 = 2897351225U;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1U;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
