/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9014
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9014
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
void test(val<short> var_1, val<unsigned char> var_3, val<unsigned short> var_5, val<unsigned short> var_8, val<unsigned short> var_17, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) ((max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) % (((/* implicit */val<int>) var_17))))), (((((/* implicit */val<bool>) 0)) ? (1793967782878311552LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-110)) > (((/* implicit */val<int>) (val<unsigned short>)6))))))));
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)110))))) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) <= (((/* implicit */val<int>) var_17)))))))) : (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_8)) + (((/* implicit */val<int>) (val<unsigned char>)19))))), (((((/* implicit */val<bool>) var_1)) ? (18239726629378585753ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (((-((-(((/* implicit */val<int>) (val<signed char>)-110)))))) & (max(((-(((/* implicit */val<int>) (val<unsigned char>)81)))), ((-(((/* implicit */val<int>) (val<unsigned short>)2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19086;
unsigned char var_3 = (unsigned char)8;
unsigned short var_5 = (unsigned short)59675;
unsigned short var_8 = (unsigned short)35460;
unsigned short var_17 = (unsigned short)49739;
int zero = 0;
unsigned char var_19 = (unsigned char)37;
unsigned char var_20 = (unsigned char)195;
unsigned long long int var_21 = 13844090461902960032ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != 18446744073709551506ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_8, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
