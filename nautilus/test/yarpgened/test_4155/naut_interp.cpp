/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4155
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4155
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
void test(val<int> var_4, val<signed char> var_6, val<unsigned short> var_7, val<signed char> var_8, val<unsigned int> var_9, val<unsigned char> var_15, val<int> zero, val<unsigned char*> var_16, val<short*> var_17, val<unsigned short*> var_18, val<long long int*> var_19) {
    if (((/* implicit */val<bool>) (+(var_4))))
    {
        *var_16 = max((((/* implicit */val<unsigned char>) var_6)), (max((var_15), (((/* implicit */val<unsigned char>) var_6)))));
        if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_7)), (min((((18446744073709551613ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_8))))))))))
        {
            *var_17 = ((/* implicit */val<short>) ((val<unsigned long long int>) ((((((/* implicit */val<int>) var_7)) / (((/* implicit */val<int>) var_6)))) * (((/* implicit */val<int>) var_15)))));
            *var_18 = ((/* implicit */val<unsigned short>) (val<short>)-15541);
        }

    }

    *var_19 = ((/* implicit */val<long long int>) ((var_9) << (((max((((/* implicit */val<unsigned long long int>) var_9)), (max((4ULL), (17566736999918038799ULL))))) - (17566736999918038771ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1938402543;
signed char var_6 = (signed char)82;
unsigned short var_7 = (unsigned short)38916;
signed char var_8 = (signed char)-30;
unsigned int var_9 = 956103958U;
unsigned char var_15 = (unsigned char)113;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
short var_17 = (short)3847;
unsigned short var_18 = (unsigned short)6685;
long long int var_19 = -7808329744775302413LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)113;
    value_mismatch |= var_17 != (short)3847;
    value_mismatch |= var_18 != (unsigned short)6685;
    value_mismatch |= var_19 != 1610612736LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_8, var_9, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
