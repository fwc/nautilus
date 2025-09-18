/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9784
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
void test(val<unsigned long long int> var_2, val<long long int> var_3, val<short> var_5, val<unsigned short> var_7, val<unsigned short> var_8, val<int> var_9, val<unsigned short> var_10, val<unsigned long long int> var_11, val<long long int> var_12, val<long long int> var_15, val<unsigned short> var_16, val<int> zero, val<signed char*> var_18, val<bool*> var_19, val<unsigned int*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<unsigned short>)40200)) << (((((/* implicit */val<int>) var_7)) - (65364))))) <= (((/* implicit */val<int>) ((var_15) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))))))) * (((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_2) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-25240)))))) <= (((/* implicit */val<int>) ((((/* implicit */val<bool>) 8832585341207815505ULL)) && (((/* implicit */val<bool>) (val<unsigned char>)0))))))))));
    *var_19 = ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_16)) << (((((/* implicit */val<int>) (val<unsigned short>)27605)) - (27601)))))) || (((var_3) == (var_12)))))) <= (((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) > (580474972U)))) / (((/* implicit */val<int>) ((517113177) >= (((/* implicit */val<int>) (val<unsigned char>)255))))))));
    *var_20 += ((/* implicit */val<unsigned int>) ((((((/* implicit */val<unsigned long long int>) ((var_3) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16)))))) - (((((/* implicit */val<unsigned long long int>) var_9)) - (var_11))))) + (((((var_11) - (var_11))) - (((8247535167684760413ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13534660988258775197ULL;
long long int var_3 = -7823582163111680571LL;
short var_5 = (short)22344;
unsigned short var_7 = (unsigned short)65371;
unsigned short var_8 = (unsigned short)64629;
int var_9 = -603127922;
unsigned short var_10 = (unsigned short)15497;
unsigned long long int var_11 = 152238296613542607ULL;
long long int var_12 = 1758571959909176215LL;
long long int var_15 = -6232493793830405796LL;
unsigned short var_16 = (unsigned short)47306;
int zero = 0;
signed char var_18 = (signed char)-9;
bool var_19 = (bool)0;
unsigned int var_20 = 345740111U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 1907115171U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
}
