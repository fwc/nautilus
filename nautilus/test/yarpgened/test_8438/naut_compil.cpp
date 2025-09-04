/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8438
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8438
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
void test(val<signed char> var_1, val<unsigned char> var_3, val<long long int> var_4, val<unsigned int> var_5, val<short> var_6, val<short> var_9, val<signed char> var_10, val<int> var_11, val<unsigned long long int> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_13)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 17994441943972976933ULL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))) : (min((var_5), (var_5)))))) ? (((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_9)))) * (((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) ((var_4) <= (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)-16334)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)74))))))))));
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 15ULL)) ? (-1818114549) : (((/* implicit */val<int>) (val<unsigned char>)15))));
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_9)))))), (max((((/* implicit */val<long long int>) var_3)), (((val<long long int>) var_11)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
unsigned char var_3 = (unsigned char)238;
long long int var_4 = -1084646021891721525LL;
unsigned int var_5 = 1021864249U;
short var_6 = (short)5593;
short var_9 = (short)28562;
signed char var_10 = (signed char)63;
int var_11 = 996331160;
unsigned long long int var_13 = 3356023112991462690ULL;
int zero = 0;
signed char var_14 = (signed char)-113;
signed char var_15 = (signed char)-24;
signed char var_16 = (signed char)-105;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)103;
    value_mismatch |= var_15 != (signed char)11;
    value_mismatch |= var_16 != (signed char)-105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
