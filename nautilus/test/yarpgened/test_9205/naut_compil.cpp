/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9205
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9205
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
void test(val<unsigned int> var_0, val<bool> var_6, val<long long int> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<unsigned int*> var_15) {
    *var_13 -= ((/* implicit */val<unsigned char>) var_0);
    *var_14 ^= ((/* implicit */val<unsigned long long int>) (~((((!(((/* implicit */val<bool>) (val<short>)32006)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-96))))) : (((/* implicit */val<int>) ((val<unsigned short>) var_11)))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((max(((-(var_12))), (((/* implicit */val<unsigned long long int>) var_6)))) | (((/* implicit */val<unsigned long long int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1212457597U;
bool var_6 = (bool)1;
long long int var_11 = 5918848192362135922LL;
unsigned long long int var_12 = 4193052317702483896ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)149;
unsigned long long int var_14 = 8433789743484607120ULL;
unsigned int var_15 = 721744830U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)24;
    value_mismatch |= var_14 != 10012954330224927773ULL;
    value_mismatch |= var_15 != 4277645949U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
}
