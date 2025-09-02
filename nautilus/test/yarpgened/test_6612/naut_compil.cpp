/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6612
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6612
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
void test(val<unsigned char> var_0, val<unsigned short> var_2, val<long long int> var_3, val<bool> var_5, val<int> var_9, val<int> zero, val<unsigned short*> var_14, val<bool*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) var_0);
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) min((var_9), (((/* implicit */val<int>) var_2))))), (912032487U)))) ? (((/* implicit */val<int>) ((min((9223372036854775807LL), (var_3))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)-16350)), ((val<unsigned short>)49182)))))))) : (((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
unsigned short var_2 = (unsigned short)55486;
long long int var_3 = 2302077665841120457LL;
bool var_5 = (bool)1;
int var_9 = 51026415;
int zero = 0;
unsigned short var_14 = (unsigned short)21872;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)191;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_9, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
