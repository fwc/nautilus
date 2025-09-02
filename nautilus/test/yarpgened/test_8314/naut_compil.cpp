/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8314
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8314
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
void test(val<unsigned char> var_0, val<unsigned char> var_4, val<unsigned long long int> var_6, val<short> var_7, val<signed char> var_8, val<unsigned char> var_9, val<short> var_10, val<unsigned long long int> var_13, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<signed char*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<signed char*> var_20) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_9))) ? (((val<unsigned long long int>) var_7)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_6)))), ((!(((/* implicit */val<bool>) var_10)))))))))))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) (val<signed char>)63);
        *var_16 *= ((/* implicit */val<unsigned long long int>) ((val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<short>)-16851)) : (((/* implicit */val<int>) var_0))))))));
    }

    *var_17 = ((/* implicit */val<signed char>) max((max((((var_13) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<short>)511))))))), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) (val<short>)16851)) ^ (((/* implicit */val<int>) var_14)))))))));
    *var_18 = ((/* implicit */val<long long int>) max((var_10), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_8)) << (((((/* implicit */val<int>) var_14)) + (43)))))) == (var_6))))));
    *var_19 ^= ((/* implicit */val<long long int>) var_8);
    *var_20 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
unsigned char var_4 = (unsigned char)250;
unsigned long long int var_6 = 14920993427272952682ULL;
short var_7 = (short)5289;
signed char var_8 = (signed char)48;
unsigned char var_9 = (unsigned char)218;
short var_10 = (short)21731;
unsigned long long int var_13 = 13229935015272459873ULL;
signed char var_14 = (signed char)-37;
int zero = 0;
unsigned long long int var_15 = 6592621395883801352ULL;
unsigned long long int var_16 = 14645457919315820889ULL;
signed char var_17 = (signed char)-79;
long long int var_18 = 6536843220783236656LL;
long long int var_19 = 1487768618771302698LL;
signed char var_20 = (signed char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 63ULL;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != 21731LL;
    value_mismatch |= var_19 != 1487768618771302682LL;
    value_mismatch |= var_20 != (signed char)106;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_8, var_9, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
