/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8283
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8283
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
void test(val<signed char> var_0, val<unsigned int> var_4, val<signed char> var_6, val<unsigned char> var_7, val<unsigned short> var_8, val<int> var_12, val<int> zero, val<short*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<short*> var_19) {
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((val<unsigned char>) (val<unsigned char>)127)), (((/* implicit */val<unsigned char>) (((-2147483647 - 1)) >= (((/* implicit */val<int>) (val<unsigned short>)65535)))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<signed char>)-18)), (((val<unsigned char>) (val<bool>)1)))))) : (max((((/* implicit */val<unsigned int>) (val<unsigned char>)70)), (max((57501062U), (((/* implicit */val<unsigned int>) 16769024))))))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)16384)))))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<bool>)0))))) ? ((~(((val<int>) var_7)))) : (var_12)));
    *var_18 |= ((/* implicit */val<unsigned short>) var_6);
    *var_19 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned int var_4 = 4206255863U;
signed char var_6 = (signed char)57;
unsigned char var_7 = (unsigned char)96;
unsigned short var_8 = (unsigned short)38067;
int var_12 = 1039341079;
int zero = 0;
short var_16 = (short)28032;
unsigned short var_17 = (unsigned short)46392;
unsigned short var_18 = (unsigned short)19794;
short var_19 = (short)18977;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)1;
    value_mismatch |= var_17 != (unsigned short)65439;
    value_mismatch |= var_18 != (unsigned short)19835;
    value_mismatch |= var_19 != (short)49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_8, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
