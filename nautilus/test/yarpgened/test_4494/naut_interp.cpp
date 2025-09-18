/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4494
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
void test(val<unsigned short> var_0, val<bool> var_3, val<unsigned long long int> var_16, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_18 = min((var_0), (((/* implicit */val<unsigned short>) (val<short>)(-32767 - 1))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_20 = var_16;
    *var_21 = max((((/* implicit */val<unsigned long long int>) (val<short>)32766)), (13577126820660566103ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57582;
bool var_3 = (bool)1;
unsigned long long int var_16 = 9801115018610303278ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)15082;
unsigned long long int var_19 = 8649494474054924004ULL;
unsigned long long int var_20 = 12914314172660879811ULL;
unsigned long long int var_21 = 11725749605677103897ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)32768;
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != 9801115018610303278ULL;
    value_mismatch |= var_21 != 13577126820660566103ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
