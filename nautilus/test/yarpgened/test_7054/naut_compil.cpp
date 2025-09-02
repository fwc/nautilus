/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7054
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7054
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<int> var_2, val<unsigned int> var_3, val<long long int> var_4, val<long long int> var_5, val<short> var_7, val<signed char> var_8, val<long long int> var_9, val<short> var_10, val<bool> var_12, val<unsigned long long int> var_16, val<bool> var_17, val<long long int> var_18, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<long long int*> var_21) {
    *var_19 = ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-1))) : (var_4)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)-7333)) : (((/* implicit */val<int>) var_17))))) : (((var_3) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))))) == (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) / (((((/* implicit */val<bool>) var_2)) ? (var_16) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-27)) ? (var_9) : (((/* implicit */val<long long int>) max(((~(((/* implicit */val<int>) var_0)))), (((((/* implicit */val<bool>) (val<signed char>)0)) ? (((/* implicit */val<int>) (val<unsigned short>)28461)) : ((-2147483647 - 1))))))))))
    {
        *var_20 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_7))))), ((-(var_18))))) + (var_5)));
        *var_21 *= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<short>) var_1)), (var_10))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
signed char var_1 = (signed char)-5;
int var_2 = -789540784;
unsigned int var_3 = 3132682996U;
long long int var_4 = -1680518675818133216LL;
long long int var_5 = -2553844947737590178LL;
short var_7 = (short)-384;
signed char var_8 = (signed char)100;
long long int var_9 = -4093102855618758244LL;
short var_10 = (short)26519;
bool var_12 = (bool)1;
unsigned long long int var_16 = 7258633522734059972ULL;
bool var_17 = (bool)0;
long long int var_18 = -7452600379590477052LL;
int zero = 0;
bool var_19 = (bool)0;
unsigned short var_20 = (unsigned short)12534;
long long int var_21 = -1151254525075631240LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (unsigned short)19290;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_12, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
