/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5914
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5914
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
void test(val<long long int> var_1, val<unsigned int> var_2, val<int> var_3, val<bool> var_4, val<short> var_5, val<int> var_6, val<signed char> var_7, val<unsigned int> var_8, val<unsigned char> var_14, val<int> zero, val<signed char*> var_20, val<unsigned char*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_4)) - (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_7)) ? (var_2) : (var_8))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1)))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max(((val<short>)2), (((val<short>) var_3))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_14)), (var_6)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)19))) : (var_8))))))) : (((/* implicit */val<int>) var_5))));
    *var_22 = ((/* implicit */val<unsigned int>) ((val<short>) var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8140047322924446549LL;
unsigned int var_2 = 2015061919U;
int var_3 = 1551749895;
bool var_4 = (bool)0;
short var_5 = (short)-8556;
int var_6 = 2024109146;
signed char var_7 = (signed char)-1;
unsigned int var_8 = 2031168890U;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
signed char var_20 = (signed char)-101;
unsigned char var_21 = (unsigned char)215;
unsigned int var_22 = 1627200260U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (unsigned char)1;
    value_mismatch |= var_22 != 11642U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
