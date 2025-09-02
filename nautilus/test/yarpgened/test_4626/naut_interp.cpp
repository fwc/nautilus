/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4626
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4626
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
void test(val<bool> var_0, val<unsigned short> var_2, val<unsigned long long int> var_3, val<bool> var_4, val<unsigned long long int> var_5, val<unsigned short> var_6, val<unsigned long long int> var_7, val<bool> var_8, val<unsigned long long int> var_9, val<bool> var_11, val<short> var_14, val<int> zero, val<bool*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_8))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_6))))) ? (max((var_3), (((/* implicit */val<unsigned long long int>) var_14)))) : (var_5))) : (((/* implicit */val<unsigned long long int>) (-((-(((/* implicit */val<int>) var_6)))))))));
    *var_16 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (+((-(((/* implicit */val<int>) var_2))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_14))))))))) : ((+(((var_0) ? (var_9) : (var_3)))))));
    *var_17 = ((/* implicit */val<unsigned short>) min(((-(((var_4) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))) << (((/* implicit */val<int>) var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_2 = (unsigned short)31766;
unsigned long long int var_3 = 2353662950617572507ULL;
bool var_4 = (bool)0;
unsigned long long int var_5 = 15043582437902301391ULL;
unsigned short var_6 = (unsigned short)32754;
unsigned long long int var_7 = 4707551668902699166ULL;
bool var_8 = (bool)1;
unsigned long long int var_9 = 7137193669257086162ULL;
bool var_11 = (bool)0;
short var_14 = (short)31963;
int zero = 0;
bool var_15 = (bool)0;
unsigned short var_16 = (unsigned short)44546;
unsigned short var_17 = (unsigned short)23136;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned short)44546;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
