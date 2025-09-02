/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1136
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1136
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
void test(val<short> var_1, val<bool> var_5, val<long long int> var_11, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<short>) var_5))) != (((/* implicit */val<int>) (((((-2147483647 - 1)) - (((/* implicit */val<int>) (val<short>)-23269)))) >= (((/* implicit */val<int>) max((var_1), (var_1)))))))));
    *var_13 = ((/* implicit */val<bool>) max((*var_13), (((/* implicit */val<bool>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19657;
bool var_5 = (bool)1;
long long int var_11 = 5044591746994234399LL;
int zero = 0;
unsigned short var_12 = (unsigned short)45716;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
