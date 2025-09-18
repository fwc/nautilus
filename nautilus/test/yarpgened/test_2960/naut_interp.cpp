/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2960
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2960
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
void test(val<short> var_6, val<long long int> var_7, val<long long int> var_8, val<unsigned short> var_9, val<short> var_11, val<signed char> var_14, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18, val<long long int*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) var_6);
    *var_18 = ((/* implicit */val<unsigned short>) var_14);
    *var_19 ^= var_8;
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_11)) || (((/* implicit */val<bool>) var_9))))))) & (((((/* implicit */val<bool>) min(((val<unsigned short>)1536), (((/* implicit */val<unsigned short>) (val<short>)26051))))) ? (var_7) : (var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-25640;
long long int var_7 = 2277661045353480035LL;
long long int var_8 = -1198783263305738083LL;
unsigned short var_9 = (unsigned short)29717;
short var_11 = (short)-9087;
signed char var_14 = (signed char)-68;
int zero = 0;
unsigned short var_17 = (unsigned short)31112;
unsigned short var_18 = (unsigned short)43220;
long long int var_19 = -4118753112015841959LL;
int var_20 = -343316789;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)39896;
    value_mismatch |= var_18 != (unsigned short)65468;
    value_mismatch |= var_19 != 2993256737550142916LL;
    value_mismatch |= var_20 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, var_9, var_11, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
