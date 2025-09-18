/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8267
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8267
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
void test(val<signed char> var_2, val<signed char> var_5, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14, val<signed char*> var_15, val<unsigned short*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) var_2);
    *var_14 = ((/* implicit */val<unsigned short>) (val<unsigned char>)134);
    *var_15 ^= var_5;
    *var_16 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((val<signed char>) var_11)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
signed char var_5 = (signed char)-36;
unsigned short var_11 = (unsigned short)1879;
int zero = 0;
unsigned short var_13 = (unsigned short)14507;
unsigned short var_14 = (unsigned short)47892;
signed char var_15 = (signed char)-123;
unsigned short var_16 = (unsigned short)9995;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)98;
    value_mismatch |= var_14 != (unsigned short)134;
    value_mismatch |= var_15 != (signed char)89;
    value_mismatch |= var_16 != (unsigned short)65449;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
