/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8375
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8375
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
void test(val<long long int> var_2, val<unsigned short> var_10, val<bool> var_13, val<signed char> var_14, val<int> zero, val<int*> var_16, val<unsigned short*> var_17, val<unsigned char*> var_18, val<int*> var_19) {
    *var_16 &= (+(((/* implicit */val<int>) var_10)));
    *var_17 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) ((val<unsigned short>) var_13)))));
    *var_18 = ((/* implicit */val<unsigned char>) var_2);
    *var_19 = ((/* implicit */val<int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 234612542576150866LL;
unsigned short var_10 = (unsigned short)53553;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-55;
int zero = 0;
int var_16 = 2101425649;
unsigned short var_17 = (unsigned short)2839;
unsigned char var_18 = (unsigned char)220;
int var_19 = 1846292172;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4401;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != (unsigned char)82;
    value_mismatch |= var_19 != -55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
