/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9306
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<unsigned char> var_3, val<signed char> var_4, val<unsigned char> var_5, val<bool> var_6, val<signed char> var_7, val<signed char> var_8, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<unsigned long long int*> var_12, val<int*> var_13) {
    *var_10 = ((/* implicit */val<signed char>) var_5);
    *var_11 = ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) > (1000524658)))) << (((val<unsigned long long int>) var_0)))) >> (((/* implicit */val<int>) var_6))));
    *var_12 = ((/* implicit */val<unsigned long long int>) ((var_2) != (((/* implicit */val<unsigned long long int>) ((((max((((/* implicit */val<int>) var_8)), (-172831893))) + (2147483647))) >> (((((/* implicit */val<int>) var_5)) - (196))))))));
    *var_13 = ((/* implicit */val<int>) ((val<signed char>) min((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_2 = 8649865000503639716ULL;
unsigned char var_3 = (unsigned char)7;
signed char var_4 = (signed char)-89;
unsigned char var_5 = (unsigned char)217;
bool var_6 = (bool)0;
signed char var_7 = (signed char)22;
signed char var_8 = (signed char)-105;
int zero = 0;
signed char var_10 = (signed char)-124;
signed char var_11 = (signed char)64;
unsigned long long int var_12 = 14752161252412601507ULL;
int var_13 = 1311595814;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-39;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != 22;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
