/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4409
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4409
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
void test(val<unsigned short> var_4, val<bool> var_9, val<unsigned char> var_10, val<signed char> var_17, val<unsigned int> var_19, val<int> zero, val<signed char*> var_20, val<unsigned long long int*> var_21, val<unsigned char*> var_22, val<short*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) var_9);
    *var_21 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_22 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) var_4)), (max((3053633924U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_17)) || (((/* implicit */val<bool>) 1119688915U)))))))));
    *var_23 = ((/* implicit */val<short>) max((((/* implicit */val<int>) var_10)), (((((/* implicit */val<bool>) ((val<short>) (val<bool>)0))) ? ((-(((/* implicit */val<int>) var_17)))) : (((/* implicit */val<int>) ((val<unsigned short>) var_19)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26515;
bool var_9 = (bool)1;
unsigned char var_10 = (unsigned char)46;
signed char var_17 = (signed char)-27;
unsigned int var_19 = 587257268U;
int zero = 0;
signed char var_20 = (signed char)56;
unsigned long long int var_21 = 8748878551127304308ULL;
unsigned char var_22 = (unsigned char)165;
short var_23 = (short)7466;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 26515ULL;
    value_mismatch |= var_22 != (unsigned char)147;
    value_mismatch |= var_23 != (short)-10828;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_10, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
