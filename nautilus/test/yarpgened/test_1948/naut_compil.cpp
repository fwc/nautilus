/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1948
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1948
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
void test(val<unsigned char> var_3, val<unsigned short> var_4, val<signed char> var_8, val<long long int> var_9, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11) {
    *var_10 -= ((/* implicit */val<unsigned short>) ((((min((((/* implicit */val<unsigned long long int>) var_8)), (13532524462110965500ULL))) + (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)32767)), (1300265126009174891ULL))))) & (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))));
    *var_11 = ((/* implicit */val<signed char>) 462126084);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)102;
unsigned short var_4 = (unsigned short)2929;
signed char var_8 = (signed char)-56;
long long int var_9 = -5022257905965610098LL;
int zero = 0;
unsigned short var_10 = (unsigned short)21686;
signed char var_11 = (signed char)-71;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)2736;
    value_mismatch |= var_11 != (signed char)4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, zero, &var_10, &var_11);
  checksum();
}
