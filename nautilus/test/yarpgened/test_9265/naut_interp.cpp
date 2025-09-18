/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9265
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9265
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
void test(val<int> var_0, val<long long int> var_1, val<short> var_6, val<long long int> var_9, val<bool> var_11, val<int> var_12, val<short> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18, val<long long int*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22) {
    if (((/* implicit */val<bool>) 8501488333327583591LL))
    {
        *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_6)) ? (min((var_1), ((+(8501488333327583591LL))))) : (8501488333327583591LL)));
        *var_18 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_12)) || ((!(((/* implicit */val<bool>) (val<signed char>)69)))))))) : (-8501488333327583576LL)));
    }

    *var_19 = ((/* implicit */val<long long int>) (-(min((var_12), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)224)) != (((/* implicit */val<int>) var_16)))))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_11) ? (8501488333327583577LL) : (9223372036854775793LL)))) ? ((-(var_12))) : (var_0)))) ? (var_12) : (((/* implicit */val<int>) ((val<unsigned char>) (-(((/* implicit */val<int>) (val<unsigned char>)94))))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_15);
    *var_22 = ((/* implicit */val<unsigned short>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 707798130;
long long int var_1 = 2937573877550588610LL;
short var_6 = (short)-12123;
long long int var_9 = -8920496900661598703LL;
bool var_11 = (bool)1;
int var_12 = 712864425;
short var_15 = (short)-31923;
unsigned char var_16 = (unsigned char)3;
int zero = 0;
unsigned char var_17 = (unsigned char)41;
unsigned int var_18 = 2342386280U;
long long int var_19 = -5005244048608372577LL;
unsigned short var_20 = (unsigned short)19944;
unsigned short var_21 = (unsigned short)9096;
unsigned short var_22 = (unsigned short)43112;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)194;
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != -1LL;
    value_mismatch |= var_20 != (unsigned short)29353;
    value_mismatch |= var_21 != (unsigned short)33613;
    value_mismatch |= var_22 != (unsigned short)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_9, var_11, var_12, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
