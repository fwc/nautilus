/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1877
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1877
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
void test(val<long long int> var_0, val<short> var_2, val<unsigned short> var_6, val<long long int> var_7, val<bool> var_11, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_13 ^= ((/* implicit */val<unsigned long long int>) (val<short>)18);
    *var_14 &= ((/* implicit */val<unsigned short>) ((val<long long int>) ((((/* implicit */val<bool>) ((var_11) ? (((/* implicit */val<int>) var_2)) : (-581173610)))) ? ((-(((/* implicit */val<int>) (val<short>)-17592)))) : (((/* implicit */val<int>) ((val<short>) var_6))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) ((val<int>) var_12));
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((1177166963U) << (((/* implicit */val<int>) (val<bool>)1))))) ? (max((2142919470496650141LL), (-2142919470496650124LL))) : ((-(var_12)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)20839))))) || (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_6)), (var_0)))))))) : (max((((/* implicit */val<long long int>) (val<bool>)1)), (((((/* implicit */val<bool>) var_2)) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)18))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5758400466397850707LL;
short var_2 = (short)-19710;
unsigned short var_6 = (unsigned short)60933;
long long int var_7 = -1240273887526077468LL;
bool var_11 = (bool)0;
long long int var_12 = -6209391845296479784LL;
int zero = 0;
unsigned long long int var_13 = 9236874720764752012ULL;
unsigned short var_14 = (unsigned short)4457;
unsigned long long int var_15 = 4605987697797979521ULL;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 9236874720764752030ULL;
    value_mismatch |= var_14 != (unsigned short)40;
    value_mismatch |= var_15 != 18446744073540035032ULL;
    value_mismatch |= var_16 != (signed char)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
