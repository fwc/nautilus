/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7248
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7248
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
void test(val<unsigned short> var_5, val<int> zero, val<short*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<short>) ((max((((/* implicit */val<long long int>) (val<bool>)1)), ((+(8682967648917371978LL))))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<int>) var_5))) && (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)-79)))))))))));
    *var_13 = (-((((+(((/* implicit */val<int>) (val<bool>)1)))) & (((/* implicit */val<int>) (val<bool>)0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)64660;
int zero = 0;
short var_12 = (short)18659;
int var_13 = 684835374;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-17333;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_12, &var_13);
  checksum();
}
