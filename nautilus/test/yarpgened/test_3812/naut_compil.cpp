/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3812
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3812
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned int> var_10, val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)15608))))) ^ (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (18446744073709551593ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)0)))))) ? (((((/* implicit */val<int>) var_1)) >> (((((/* implicit */val<int>) (val<unsigned short>)52075)) - (52059))))) : (((/* implicit */val<int>) min((var_0), (var_14))))))));
    *var_16 |= ((/* implicit */val<unsigned short>) ((val<long long int>) 1541860701));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)819;
unsigned short var_1 = (unsigned short)3563;
unsigned int var_10 = 1719265277U;
unsigned short var_14 = (unsigned short)65261;
int zero = 0;
unsigned short var_15 = (unsigned short)64119;
unsigned short var_16 = (unsigned short)49088;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != (unsigned short)65501;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_10, var_14, zero, &var_15, &var_16);
  checksum();
}
