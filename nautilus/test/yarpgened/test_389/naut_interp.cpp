/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 389
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=389
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
void test(val<int> var_2, val<unsigned short> var_5, val<unsigned short> var_16, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) (+(((-11629676) + (((/* implicit */val<int>) (val<unsigned short>)65529))))))) / ((((-(var_17))) * (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)103)) - (var_2))))))));
    *var_21 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (val<signed char>)-33)) * (((/* implicit */val<int>) (val<signed char>)-54)))) / (((/* implicit */val<int>) var_16))));
    *var_22 = ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1950733265;
unsigned short var_5 = (unsigned short)52564;
unsigned short var_16 = (unsigned short)36143;
unsigned int var_17 = 2699365886U;
int zero = 0;
unsigned long long int var_20 = 13536027099440002000ULL;
long long int var_21 = -6331199343223556595LL;
unsigned int var_22 = 1173462730U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3ULL;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != 52564U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_16, var_17, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
