/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1758
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1758
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
void test(val<int> var_7, val<bool> var_9, val<short> var_12, val<unsigned long long int> var_13, val<int> zero, val<bool*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) max((((((/* implicit */val<int>) ((val<bool>) var_13))) + (((((/* implicit */val<int>) (val<short>)32767)) + (((/* implicit */val<int>) (val<short>)32752)))))), (max((((var_9) ? (((/* implicit */val<int>) (val<unsigned short>)1024)) : (((/* implicit */val<int>) (val<unsigned char>)143)))), (((/* implicit */val<int>) var_12)))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) & (var_7)));
    *var_18 = max((max((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned char>)213))))), (((val<unsigned int>) var_13)))), (((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) 2113929216)) ? (((/* implicit */val<int>) (val<short>)18779)) : (((/* implicit */val<int>) (val<unsigned short>)1024))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 55381015;
bool var_9 = (bool)0;
short var_12 = (short)16391;
unsigned long long int var_13 = 13191192357904305787ULL;
int zero = 0;
bool var_16 = (bool)0;
unsigned long long int var_17 = 2667323780317397352ULL;
unsigned int var_18 = 157024701U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 1086049915U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_12, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
}
