/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9363
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9363
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
void test(val<unsigned short> var_2, val<long long int> var_4, val<unsigned char> var_7, val<short> var_12, val<int> zero, val<unsigned int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) min((*var_14), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)27262)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((val<unsigned char>) var_12))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) min((min((var_2), (var_2))), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18562;
long long int var_4 = -9169490353405656644LL;
unsigned char var_7 = (unsigned char)162;
short var_12 = (short)-29419;
int zero = 0;
unsigned int var_14 = 1786246241U;
unsigned long long int var_15 = 5253162583594498132ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 162U;
    value_mismatch |= var_15 != 5253162583594498132ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
