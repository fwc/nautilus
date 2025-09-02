/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4917
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4917
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
void test(val<unsigned short> var_0, val<bool> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<signed char> var_4, val<signed char> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<unsigned char> var_8, val<unsigned short> var_9, val<int> zero, val<signed char*> var_11, val<int*> var_12, val<unsigned long long int*> var_13) {
    if (((((val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)254)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)32759))))) && (((/* implicit */val<bool>) ((var_1) ? (min((var_2), (9007182074871808ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) + (((/* implicit */val<int>) var_5))))))))))
    {
        *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)-9892)) + (((/* implicit */val<int>) var_6))))) ? (((((((((/* implicit */val<int>) (val<short>)-22200)) + (2147483647))) >> (((var_7) - (16045430379169589498ULL))))) / (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) >> (((((/* implicit */val<int>) var_6)) - (79)))))))))));
        *var_12 = ((/* implicit */val<int>) max((*var_12), (((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) > (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)-14526)), (var_9))))))), (((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<unsigned char>) (val<signed char>)3))))) ? (((((/* implicit */val<bool>) 264711472U)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)127))))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_4))))))))))));
    }

    *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<signed char>)-9)) : (((/* implicit */val<int>) var_0)))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (val<bool>)1)))) > (((((/* implicit */val<bool>) var_2)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61928;
bool var_1 = (bool)1;
unsigned long long int var_2 = 11806693480854143171ULL;
unsigned long long int var_3 = 6425841733671754921ULL;
signed char var_4 = (signed char)-42;
signed char var_5 = (signed char)4;
unsigned char var_6 = (unsigned char)94;
unsigned long long int var_7 = 16045430379169589511ULL;
unsigned char var_8 = (unsigned char)228;
unsigned short var_9 = (unsigned short)46374;
int zero = 0;
signed char var_11 = (signed char)115;
int var_12 = -2001101546;
unsigned long long int var_13 = 4398601171408263036ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)5;
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
