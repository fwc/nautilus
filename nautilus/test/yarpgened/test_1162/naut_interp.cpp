/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1162
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
void test(val<short> var_0, val<unsigned char> var_1, val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned short> var_5, val<int> var_7, val<unsigned short> var_8, val<int> var_9, val<int> zero, val<short*> var_10, val<short*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<short>) var_4);
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_9) & (((/* implicit */val<int>) var_0)))))))) - (max((((/* implicit */val<int>) var_5)), (((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) var_5))))))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) == (var_2))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3850;
unsigned char var_1 = (unsigned char)182;
unsigned int var_2 = 155688980U;
unsigned long long int var_4 = 13149837503931895992ULL;
unsigned short var_5 = (unsigned short)37808;
int var_7 = 232074998;
unsigned short var_8 = (unsigned short)12051;
int var_9 = 380417879;
int zero = 0;
short var_10 = (short)27825;
short var_11 = (short)-24823;
long long int var_12 = 5713108511460534851LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)20664;
    value_mismatch |= var_11 != (short)27727;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
