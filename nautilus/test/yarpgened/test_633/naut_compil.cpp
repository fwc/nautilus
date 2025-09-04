/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 633
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=633
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
void test(val<unsigned int> var_1, val<unsigned char> var_4, val<bool> var_8, val<unsigned char> var_11, val<short> var_12, val<unsigned char> var_14, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<int*> var_19) {
    *var_15 = ((val<signed char>) (val<unsigned char>)240);
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_4))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_12)), (var_1)))))))));
    if (((val<bool>) (!(((/* implicit */val<bool>) var_11)))))
    {
        *var_17 *= ((/* implicit */val<unsigned char>) var_8);
        *var_18 = ((val<unsigned char>) var_1);
        *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned char>) var_4))))))) / (var_1)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2132841738U;
unsigned char var_4 = (unsigned char)90;
bool var_8 = (bool)1;
unsigned char var_11 = (unsigned char)200;
short var_12 = (short)-27710;
unsigned char var_14 = (unsigned char)234;
int zero = 0;
signed char var_15 = (signed char)55;
signed char var_16 = (signed char)127;
unsigned char var_17 = (unsigned char)194;
unsigned char var_18 = (unsigned char)116;
int var_19 = -1452247614;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-16;
    value_mismatch |= var_16 != (signed char)1;
    value_mismatch |= var_17 != (unsigned char)194;
    value_mismatch |= var_18 != (unsigned char)116;
    value_mismatch |= var_19 != -1452247614;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
