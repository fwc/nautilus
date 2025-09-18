/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8220
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8220
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
void test(val<unsigned short> var_2, val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned int> var_9, val<long long int> var_13, val<int> zero, val<long long int*> var_20, val<unsigned int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) var_5);
    *var_21 -= ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((val<unsigned int>) var_2))) > (var_13)))), (min((((/* implicit */val<unsigned short>) (val<unsigned char>)50)), (((val<unsigned short>) var_9))))));
    *var_22 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40063;
unsigned short var_5 = (unsigned short)4027;
unsigned int var_6 = 3917219165U;
unsigned int var_9 = 3965169718U;
long long int var_13 = 6364757021926128690LL;
int zero = 0;
long long int var_20 = -5371454183169326378LL;
unsigned int var_21 = 1772729587U;
int var_22 = 587256391;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4027LL;
    value_mismatch |= var_21 != 1772729537U;
    value_mismatch |= var_22 != -377748131;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_9, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
}
