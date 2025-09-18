/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 185
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=185
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
void test(val<unsigned long long int> var_2, val<short> var_4, val<short> var_5, val<long long int> var_8, val<signed char> var_10, val<signed char> var_11, val<signed char> var_12, val<long long int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<int*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))), (((((/* implicit */val<int>) ((val<unsigned short>) var_18))) % (((/* implicit */val<int>) min((((/* implicit */val<short>) var_11)), (var_5))))))));
    if (((/* implicit */val<bool>) (+(((var_2) & (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) ^ (((/* implicit */val<int>) var_11))))))))))
    {
        *var_20 = ((/* implicit */val<unsigned long long int>) var_11);
        *var_21 = (-(((/* implicit */val<int>) (val<unsigned short>)45359)));
        *var_22 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) ((val<signed char>) var_4))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<unsigned short>)45354))))) : (var_8))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)20184))) : (var_18))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11749681836701212101ULL;
short var_4 = (short)27656;
short var_5 = (short)26299;
long long int var_8 = -5231359622352347881LL;
signed char var_10 = (signed char)41;
signed char var_11 = (signed char)93;
signed char var_12 = (signed char)-64;
long long int var_18 = 5870072919292157246LL;
int zero = 0;
unsigned long long int var_19 = 11675412985474066020ULL;
unsigned long long int var_20 = 9508732098577567479ULL;
int var_21 = 1778602365;
unsigned short var_22 = (unsigned short)65047;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != 9508732098577567479ULL;
    value_mismatch |= var_21 != 1778602365;
    value_mismatch |= var_22 != (unsigned short)65047;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_8, var_10, var_11, var_12, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
