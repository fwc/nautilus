/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4824
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
void test(val<long long int> var_0, val<long long int> var_1, val<unsigned char> var_3, val<unsigned char> var_4, val<long long int> var_5, val<long long int> var_6, val<int> zero, val<unsigned char*> var_10, val<unsigned long long int*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13, val<long long int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_4))));
    *var_11 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)18876);
    *var_12 = (((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) << (((var_5) - (2063256099507652149LL)))))))) ? ((((((val<bool>)1) ? (7583582455041022105ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)27))))) << (((((val<long long int>) (val<short>)-26292)) + (26343LL))))) : (((((/* implicit */val<unsigned long long int>) 7096970603562628111LL)) / (3841999589742235160ULL))));
    *var_13 = ((/* implicit */val<long long int>) min((*var_13), (((4251677311765993805LL) << ((((((((!(((/* implicit */val<bool>) -1451576760)))) ? (var_0) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-19))) : (var_1))))) + (79LL))) - (58LL)))))));
    *var_14 = (((!(((/* implicit */val<bool>) (val<short>)19)))) ? (max((((var_1) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-19))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 269929979245594334ULL)) && (((/* implicit */val<bool>) (val<signed char>)-68))))))) : (var_6));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5434654927466831417LL;
long long int var_1 = 5236827789548698725LL;
unsigned char var_3 = (unsigned char)8;
unsigned char var_4 = (unsigned char)159;
long long int var_5 = 2063256099507652151LL;
long long int var_6 = 8467116508996859261LL;
int zero = 0;
unsigned char var_10 = (unsigned char)53;
unsigned long long int var_11 = 11765396869616910847ULL;
unsigned long long int var_12 = 8313357360201460856ULL;
long long int var_13 = 559564372934937036LL;
long long int var_14 = 7442274553382988725LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)96;
    value_mismatch |= var_11 != 18876ULL;
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != -1440034826645576396LL;
    value_mismatch |= var_14 != 8467116508996859261LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
