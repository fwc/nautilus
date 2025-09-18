/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 988
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=988
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
void test(val<long long int> var_4, val<unsigned char> var_7, val<unsigned short> var_9, val<bool> var_14, val<unsigned char> var_17, val<int> zero, val<int*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((min((((/* implicit */val<long long int>) var_17)), (var_4))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_14))))))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) max((max((2159276415U), (((/* implicit */val<unsigned int>) var_7)))), (((/* implicit */val<unsigned int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3334135695021084301LL;
unsigned char var_7 = (unsigned char)218;
unsigned short var_9 = (unsigned short)27398;
bool var_14 = (bool)0;
unsigned char var_17 = (unsigned char)184;
int zero = 0;
int var_18 = -179840803;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (unsigned char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, var_14, var_17, zero, &var_18, &var_19);
  checksum();
}
