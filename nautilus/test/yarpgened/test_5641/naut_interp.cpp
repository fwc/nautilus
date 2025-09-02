/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5641
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5641
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_6, val<int> zero, val<unsigned long long int*> var_11, val<int*> var_12, val<int*> var_13, val<signed char*> var_14) {
    *var_11 = min((((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<int>) (val<signed char>)-8)) % (((/* implicit */val<int>) (val<signed char>)-100)))))), (max((8737232873339809139ULL), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<signed char>)-69))))))));
    *var_12 = ((/* implicit */val<int>) (((~(130023424ULL))) & (1ULL)));
    *var_13 -= ((/* implicit */val<int>) ((((((/* implicit */val<bool>) min((16837298871533282697ULL), (130023424ULL)))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((val<int>) 1609445202176268913ULL))))) | (((val<unsigned long long int>) ((((/* implicit */val<bool>) 1609445202176268919ULL)) ? (18446744073579528192ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)100))))))));
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) (val<signed char>)-46))) ? (var_6) : (min((((16837298871533282697ULL) & (((/* implicit */val<unsigned long long int>) 1216302177)))), (min((670260565659236971ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)15))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 766301172150361740ULL;
unsigned long long int var_6 = 14671153059711370773ULL;
int zero = 0;
unsigned long long int var_11 = 14189126575563240091ULL;
int var_12 = -1167100752;
int var_13 = 1427927648;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 8737232873339809139ULL;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 1478464468;
    value_mismatch |= var_14 != (signed char)21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
