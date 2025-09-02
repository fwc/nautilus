/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9447
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9447
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
void test(val<unsigned short> var_3, val<int> var_6, val<unsigned long long int> var_8, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) (-(var_8)));
    *var_14 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_3)), (var_8)))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) (val<unsigned short>)0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4754;
int var_6 = -164225366;
unsigned long long int var_8 = 16332705031687593388ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)26868;
unsigned short var_14 = (unsigned short)19065;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)41556;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
