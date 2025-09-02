/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9182
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9182
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
void test(val<unsigned long long int> var_6, val<unsigned char> var_8, val<int> zero, val<short*> var_18, val<bool*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<short>) ((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)113))) | (16162410729274731958ULL))) << (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)850))) * (0ULL))))) * (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((2284333344434819645ULL) < (((/* implicit */val<unsigned long long int>) 1364233892416395329LL)))))) / (((16ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)114)))))))));
    *var_19 = ((/* implicit */val<bool>) var_6);
    if (((/* implicit */val<bool>) 8444249301319680ULL))
    {
        *var_20 *= ((/* implicit */val<unsigned char>) ((((18438299824408231936ULL) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)140))))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
        *var_21 = ((/* implicit */val<unsigned char>) (val<signed char>)-82);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5350120456840769099ULL;
unsigned char var_8 = (unsigned char)41;
int zero = 0;
short var_18 = (short)5509;
bool var_19 = (bool)0;
unsigned char var_20 = (unsigned char)147;
unsigned char var_21 = (unsigned char)192;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)124;
    value_mismatch |= var_21 != (unsigned char)174;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
