/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6220
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6220
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
void test(val<long long int> var_1, val<bool> var_2, val<int> var_3, val<short> var_4, val<int> var_7, val<int> zero, val<unsigned long long int*> var_12, val<int*> var_13, val<long long int*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned long long int>) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> ((((+(((/* implicit */val<int>) (val<unsigned char>)134)))) - (109)))));
    *var_13 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<signed char>)28)), (((((/* implicit */val<bool>) var_1)) ? (var_7) : (((/* implicit */val<int>) var_2)))))))));
    *var_14 = ((/* implicit */val<long long int>) var_3);
    *var_15 &= ((val<unsigned char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3414164808894322620LL;
bool var_2 = (bool)0;
int var_3 = -610508827;
short var_4 = (short)11156;
int var_7 = 1349045931;
int zero = 0;
unsigned long long int var_12 = 15917596596697119799ULL;
int var_13 = 1012177182;
long long int var_14 = -5921187317534146305LL;
unsigned char var_15 = (unsigned char)145;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 63ULL;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != -610508827LL;
    value_mismatch |= var_15 != (unsigned char)144;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_7, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
