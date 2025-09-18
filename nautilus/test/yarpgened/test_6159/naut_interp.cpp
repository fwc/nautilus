/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6159
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6159
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
void test(val<unsigned short> var_5, val<signed char> var_11, val<signed char> var_13, val<short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) var_13);
    *var_21 = ((/* implicit */val<unsigned long long int>) min((*var_21), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((4294967292U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))) ? (((/* implicit */val<int>) var_11)) : ((-(((((/* implicit */val<int>) var_19)) & (((/* implicit */val<int>) (val<short>)-14543)))))))))));
    *var_22 = ((/* implicit */val<unsigned short>) min((*var_22), (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)26977;
signed char var_11 = (signed char)-97;
signed char var_13 = (signed char)-124;
short var_19 = (short)31055;
int zero = 0;
unsigned short var_20 = (unsigned short)37511;
unsigned long long int var_21 = 17473610376507419651ULL;
unsigned short var_22 = (unsigned short)56675;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)65412;
    value_mismatch |= var_21 != 17473610376507419651ULL;
    value_mismatch |= var_22 != (unsigned short)26977;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_13, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
