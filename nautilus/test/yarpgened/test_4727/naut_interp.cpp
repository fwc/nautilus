/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4727
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4727
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<int> var_8, val<short> var_11, val<int> zero, val<unsigned short*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) var_3);
    *var_15 -= ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((14533081505500530389ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) != ((+(var_8))))))) | (((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_11))))) * (var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8987445089463817642ULL;
unsigned long long int var_5 = 18084205948499892624ULL;
int var_8 = -1926429411;
short var_11 = (short)27767;
int zero = 0;
unsigned short var_14 = (unsigned short)20773;
int var_15 = -1339136367;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)54698;
    value_mismatch |= var_15 != -1347599200;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
