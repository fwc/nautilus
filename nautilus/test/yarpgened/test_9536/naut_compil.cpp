/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9536
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9536
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
void test(val<unsigned int> var_1, val<int> var_2, val<signed char> var_3, val<int> var_4, val<unsigned long long int> var_5, val<unsigned char> var_7, val<int> var_8, val<unsigned short> var_10, val<int> zero, val<int*> var_13, val<unsigned int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16, val<int*> var_17) {
    *var_13 = ((/* implicit */val<int>) var_10);
    *var_14 |= ((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_2)), (var_1)))) ? ((+(((/* implicit */val<int>) var_7)))) : (var_2))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))) ? (((var_4) % (var_2))) : ((+(var_2)))))));
    *var_15 = ((/* implicit */val<signed char>) max((var_1), (((/* implicit */val<unsigned int>) max(((+(var_8))), ((-(((/* implicit */val<int>) var_3)))))))));
    *var_16 = ((/* implicit */val<unsigned int>) (+(((((/* implicit */val<int>) var_7)) + (((((/* implicit */val<bool>) var_4)) ? (var_4) : (((/* implicit */val<int>) var_7))))))));
    *var_17 = ((/* implicit */val<int>) min((var_5), (((/* implicit */val<unsigned long long int>) (-(min((((/* implicit */val<unsigned int>) var_3)), (var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1734786126U;
int var_2 = -999773505;
signed char var_3 = (signed char)-19;
int var_4 = -1106244285;
unsigned long long int var_5 = 14948698738238014157ULL;
unsigned char var_7 = (unsigned char)91;
int var_8 = 509440963;
unsigned short var_10 = (unsigned short)55599;
int zero = 0;
int var_13 = -1880978666;
unsigned int var_14 = 824517154U;
signed char var_15 = (signed char)35;
unsigned int var_16 = 1436637489U;
int var_17 = -424351485;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 55599;
    value_mismatch |= var_14 != 4188496550U;
    value_mismatch |= var_15 != (signed char)78;
    value_mismatch |= var_16 != 3188723102U;
    value_mismatch |= var_17 != -1734786126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
