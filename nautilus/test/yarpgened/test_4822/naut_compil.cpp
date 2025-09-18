/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4822
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4822
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
void test(val<unsigned char> var_3, val<long long int> var_4, val<unsigned int> var_9, val<short> var_10, val<int> zero, val<short*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (val<short>)24456))))), (var_4)))) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 3833261063602408417LL)) ? (((/* implicit */val<int>) (val<signed char>)113)) : (((/* implicit */val<int>) (val<unsigned short>)45773))))) : (var_9))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))));
    *var_16 = ((/* implicit */val<unsigned char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
long long int var_4 = -5994706103711240417LL;
unsigned int var_9 = 883467263U;
short var_10 = (short)28610;
int zero = 0;
short var_15 = (short)-28852;
unsigned char var_16 = (unsigned char)139;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)141;
    value_mismatch |= var_16 != (unsigned char)194;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_10, zero, &var_15, &var_16);
  checksum();
}
