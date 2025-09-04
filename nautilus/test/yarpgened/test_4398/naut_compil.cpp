/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4398
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
void test(val<short> var_2, val<unsigned int> var_4, val<unsigned int> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) ((4357685290335599856ULL) < (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_8))) : (((((/* implicit */val<bool>) var_7)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<signed char>)0))))), (min((((/* implicit */val<unsigned int>) var_2)), (var_4)))))) ? (((((/* implicit */val<long long int>) max((var_5), (var_5)))) / (1964777561787085879LL))) : (((((/* implicit */val<bool>) 5251584171544245784ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (-8317677053869290726LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-454;
unsigned int var_4 = 3655043623U;
unsigned int var_5 = 3238841550U;
unsigned char var_6 = (unsigned char)56;
unsigned long long int var_7 = 7666731786150038047ULL;
unsigned long long int var_8 = 1814290650121678670ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
unsigned char var_13 = (unsigned char)163;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
