/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6316
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6316
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<unsigned short> var_4, val<bool> var_5, val<bool> var_10, val<signed char> var_11, val<bool> var_12, val<signed char> var_13, val<unsigned char> var_14, val<unsigned char> var_15, val<int> zero, val<bool*> var_16, val<signed char*> var_17, val<unsigned long long int*> var_18, val<long long int*> var_19, val<signed char*> var_20, val<short*> var_21) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<bool>)0)), (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))))
    {
        *var_16 = ((/* implicit */val<bool>) max((*var_16), (var_5)));
        *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_14))))) ? ((-(((/* implicit */val<int>) (val<signed char>)(-127 - 1))))) : (((((/* implicit */val<int>) var_13)) * (((/* implicit */val<int>) var_12))))))) > (var_0)));
        *var_18 = ((/* implicit */val<unsigned long long int>) var_10);
        *var_19 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<unsigned long long int>) (val<signed char>)-100))))) ? ((-(((/* implicit */val<int>) (val<signed char>)117)))) : (1039225051))))));
        *var_20 ^= ((/* implicit */val<signed char>) (-(((((/* implicit */val<long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_5)), (var_15))))) / (var_3)))));
    }

    *var_21 *= ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3923241177719635840ULL;
long long int var_3 = -2038753751395785066LL;
unsigned short var_4 = (unsigned short)42428;
bool var_5 = (bool)0;
bool var_10 = (bool)1;
signed char var_11 = (signed char)-105;
bool var_12 = (bool)0;
signed char var_13 = (signed char)118;
unsigned char var_14 = (unsigned char)38;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
bool var_16 = (bool)1;
signed char var_17 = (signed char)5;
unsigned long long int var_18 = 4014224549676746672ULL;
long long int var_19 = -3112498187402397125LL;
signed char var_20 = (signed char)-107;
short var_21 = (short)-5256;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)5;
    value_mismatch |= var_18 != 4014224549676746672ULL;
    value_mismatch |= var_19 != -3112498187402397125LL;
    value_mismatch |= var_20 != (signed char)-107;
    value_mismatch |= var_21 != (short)17440;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
