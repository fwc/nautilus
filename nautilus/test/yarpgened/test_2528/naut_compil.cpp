/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2528
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2528
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
void test(val<long long int> var_1, val<unsigned int> var_12, val<long long int> var_14, val<unsigned short> var_15, val<long long int> var_18, val<int> zero, val<bool*> var_19, val<bool*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(min((9007199254724608ULL), (((/* implicit */val<unsigned long long int>) var_14))))))) ? (min((((/* implicit */val<unsigned long long int>) -136859422547932395LL)), (((((/* implicit */val<bool>) var_1)) ? (18437736874454827007ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))))) : (((((/* implicit */val<bool>) ((val<unsigned char>) 6422125820460172550LL))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)28192))))) : (((((/* implicit */val<bool>) (val<unsigned short>)50030)) ? (18446744073709551593ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15)))))))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-((-(var_12)))))) ? (18446744073709551593ULL) : (((/* implicit */val<unsigned long long int>) -1567731668))));
    *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) (~(var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8070334220282878523LL;
unsigned int var_12 = 793491296U;
long long int var_14 = 2743871573606045043LL;
unsigned short var_15 = (unsigned short)20037;
long long int var_18 = 7903523325314604022LL;
int zero = 0;
bool var_19 = (bool)1;
bool var_20 = (bool)1;
short var_21 = (short)6550;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)6550;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, var_14, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
