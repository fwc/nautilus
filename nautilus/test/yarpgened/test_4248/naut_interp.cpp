/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4248
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4248
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_4, val<short> var_5, val<bool> var_6, val<int> var_8, val<long long int> var_9, val<unsigned char> var_10, val<unsigned short> var_11, val<unsigned char> var_12, val<unsigned short> var_13, val<unsigned long long int> var_14, val<int> zero, val<short*> var_15, val<unsigned char*> var_16, val<short*> var_17, val<unsigned char*> var_18, val<int*> var_19, val<short*> var_20) {
    *var_15 = ((/* implicit */val<short>) (val<unsigned char>)254);
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_6)) > (((/* implicit */val<int>) var_1))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) max((var_14), (((/* implicit */val<unsigned long long int>) ((((val<long long int>) (val<bool>)1)) >> (((var_4) - (9292996108315328968ULL)))))))))));
    if (((/* implicit */val<bool>) ((val<unsigned char>) 9223372036854775800LL)))
    {
        *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_12)) - (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_13))))))) - (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<unsigned char>)88)) : (((/* implicit */val<int>) var_1))))) ? (((((/* implicit */val<bool>) (val<short>)29199)) ? (1363577126U) : (((/* implicit */val<unsigned int>) -1661732008)))) : (((/* implicit */val<unsigned int>) (-(var_8))))))));
        *var_19 = ((((((/* implicit */val<int>) (val<short>)32759)) >> (((((((/* implicit */val<bool>) var_4)) ? (var_9) : (2132549941800449985LL))) - (809260342245513276LL))))) | (((((((/* implicit */val<unsigned int>) 1661732008)) == (393063269U))) ? (((((/* implicit */val<bool>) 1661732008)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) (val<unsigned char>)197)))) : (((/* implicit */val<int>) var_6)))));
        *var_20 &= ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (3901904026U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))) && (((/* implicit */val<bool>) (~(6497403998000975933ULL)))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_5))))) : (var_4)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned long long int var_4 = 9292996108315329016ULL;
short var_5 = (short)29337;
bool var_6 = (bool)1;
int var_8 = -1174661382;
long long int var_9 = 809260342245513293LL;
unsigned char var_10 = (unsigned char)203;
unsigned short var_11 = (unsigned short)19869;
unsigned char var_12 = (unsigned char)33;
unsigned short var_13 = (unsigned short)64744;
unsigned long long int var_14 = 17206651781034067255ULL;
int zero = 0;
short var_15 = (short)5398;
unsigned char var_16 = (unsigned char)163;
short var_17 = (short)-8170;
unsigned char var_18 = (unsigned char)98;
int var_19 = -606931640;
short var_20 = (short)3637;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)254;
    value_mismatch |= var_16 != (unsigned char)0;
    value_mismatch |= var_17 != (short)-15049;
    value_mismatch |= var_18 != (unsigned char)218;
    value_mismatch |= var_19 != 1;
    value_mismatch |= var_20 != (short)3108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
