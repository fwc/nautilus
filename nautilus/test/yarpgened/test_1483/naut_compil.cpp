/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1483
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1483
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
void test(val<unsigned long long int> var_11, val<int> zero, val<short*> var_13, val<unsigned char*> var_14, val<int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)51))) * (((var_11) / (max((18225447572079216681ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-45))))))));
    *var_14 = ((/* implicit */val<unsigned char>) (val<short>)-32751);
    *var_15 = ((/* implicit */val<int>) (val<short>)-15167);
    *var_16 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) 0ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10732059605190944394ULL;
int zero = 0;
short var_13 = (short)14246;
unsigned char var_14 = (unsigned char)237;
int var_15 = -555264971;
unsigned long long int var_16 = 3734261151576024770ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)0;
    value_mismatch |= var_14 != (unsigned char)17;
    value_mismatch |= var_15 != -15167;
    value_mismatch |= var_16 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
