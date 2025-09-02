/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5342
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5342
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
void test(val<short> var_1, val<int> var_2, val<int> var_6, val<signed char> var_8, val<bool> var_12, val<short> var_13, val<int> zero, val<signed char*> var_18, val<int*> var_19, val<unsigned int*> var_20, val<unsigned short*> var_21, val<signed char*> var_22) {
    if (((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) ((val<signed char>) var_13))))), (((/* implicit */val<int>) var_13)))))
    {
        *var_18 = ((/* implicit */val<signed char>) var_6);
        *var_19 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) ((val<long long int>) var_12))) ? ((-(6680478443619724166ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 2321723148U)))))))), (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) var_13)) ? (var_2) : (2147483638))), ((+(((/* implicit */val<int>) (val<signed char>)6)))))))));
        *var_20 = ((/* implicit */val<unsigned int>) (val<unsigned short>)53562);
    }

    *var_21 = ((/* implicit */val<unsigned short>) var_1);
    *var_22 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) var_8)))) ? (((/* implicit */val<int>) (val<signed char>)-22)) : (((/* implicit */val<int>) (val<unsigned char>)126))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3676;
int var_2 = -596722197;
int var_6 = 1630296164;
signed char var_8 = (signed char)-71;
bool var_12 = (bool)1;
short var_13 = (short)-19742;
int zero = 0;
signed char var_18 = (signed char)-72;
int var_19 = 1886616620;
unsigned int var_20 = 3482388366U;
unsigned short var_21 = (unsigned short)35104;
signed char var_22 = (signed char)-3;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)100;
    value_mismatch |= var_19 != 6;
    value_mismatch |= var_20 != 53562U;
    value_mismatch |= var_21 != (unsigned short)3676;
    value_mismatch |= var_22 != (signed char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_8, var_12, var_13, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
