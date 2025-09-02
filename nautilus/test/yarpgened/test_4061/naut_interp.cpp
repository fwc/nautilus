/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4061
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4061
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_3, val<long long int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<unsigned long long int> var_14, val<int> zero, val<unsigned short*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<unsigned char>)105)), (var_6)))) + (var_14))), ((~(var_3)))));
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) % (var_6)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((4294967295U) != (0U))))) : ((+(17U)))))) : (min((((/* implicit */val<unsigned long long int>) -638530020)), (var_0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8378952871878314407ULL;
unsigned long long int var_3 = 1322845180212971166ULL;
long long int var_4 = 4663201684143686346LL;
unsigned short var_5 = (unsigned short)47847;
long long int var_6 = 8806016435578355946LL;
unsigned long long int var_14 = 1707121799329357422ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)48140;
int var_16 = -71726861;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)7895;
    value_mismatch |= var_16 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
