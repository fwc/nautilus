/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6866
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6866
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
void test(val<long long int> var_0, val<unsigned short> var_3, val<unsigned short> var_4, val<signed char> var_8, val<int> var_10, val<unsigned int> var_17, val<int> zero, val<signed char*> var_18, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((val<signed char>) ((val<unsigned short>) (!(((/* implicit */val<bool>) var_10)))));
    *var_19 = ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) % (((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned char>)246))))) % (((val<long long int>) var_17)))));
    *var_20 = ((/* implicit */val<unsigned long long int>) max((var_0), (((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) (val<unsigned char>)4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)31))) : (3100032950U))), (((/* implicit */val<unsigned int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3238430047995508248LL;
unsigned short var_3 = (unsigned short)2009;
unsigned short var_4 = (unsigned short)32367;
signed char var_8 = (signed char)24;
int var_10 = -1607066520;
unsigned int var_17 = 2150364812U;
int zero = 0;
signed char var_18 = (signed char)-103;
long long int var_19 = 3687314274884208154LL;
unsigned long long int var_20 = 3047816786288154154ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != 24LL;
    value_mismatch |= var_20 != 24ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_8, var_10, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
