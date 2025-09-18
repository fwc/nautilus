/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7106
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7106
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
void test(val<bool> var_1, val<signed char> var_2, val<unsigned long long int> var_6, val<int> var_7, val<int> var_9, val<int> zero, val<int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<int>) max((*var_11), (((/* implicit */val<int>) 18446744073709551605ULL))));
    *var_12 -= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_9)), (-1LL)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 4294967282U)) != (18446744073709551610ULL))))))) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) 10305933775252413781ULL))))) : (min((((/* implicit */val<int>) var_1)), (var_9))))) : (min((((/* implicit */val<int>) var_2)), (((var_7) ^ (((/* implicit */val<int>) (val<unsigned char>)12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
signed char var_2 = (signed char)121;
unsigned long long int var_6 = 8386424039949654900ULL;
int var_7 = 1820412855;
int var_9 = 1347101780;
int zero = 0;
int var_11 = -690753621;
int var_12 = -1882244439;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -11;
    value_mismatch |= var_12 != -1882244440;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_9, zero, &var_11, &var_12);
  checksum();
}
