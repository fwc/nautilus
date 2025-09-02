/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2829
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
void test(val<unsigned short> var_0, val<int> var_1, val<unsigned char> var_3, val<bool> var_6, val<short> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (+(var_1))))))) ^ ((-(((/* implicit */val<int>) var_0))))));
    *var_18 |= ((/* implicit */val<unsigned long long int>) ((var_1) - ((-(((/* implicit */val<int>) min(((val<unsigned char>)16), (((/* implicit */val<unsigned char>) (val<bool>)1)))))))));
    *var_19 -= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) max(((val<short>)27358), (((/* implicit */val<short>) (val<bool>)1))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) : (((/* implicit */val<int>) var_6)))) != (max(((((val<bool>)1) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<bool>)1)))), (((((/* implicit */val<int>) (val<short>)12246)) ^ (((/* implicit */val<int>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60868;
int var_1 = 565580551;
unsigned char var_3 = (unsigned char)80;
bool var_6 = (bool)1;
short var_8 = (short)4254;
unsigned long long int var_9 = 13909874296689084360ULL;
int zero = 0;
unsigned long long int var_17 = 15984451930349600641ULL;
unsigned long long int var_18 = 2579452302890828847ULL;
unsigned long long int var_19 = 5971399964532504292ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709490749ULL;
    value_mismatch |= var_18 != 2579452302909708079ULL;
    value_mismatch |= var_19 != 5971399964532504291ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, var_9, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
