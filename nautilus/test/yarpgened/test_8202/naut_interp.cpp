/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8202
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8202
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
void test(val<signed char> var_0, val<unsigned long long int> var_3, val<unsigned short> var_9, val<signed char> var_11, val<unsigned char> var_19, val<int> zero, val<unsigned long long int*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_19)) || ((val<bool>)1))))) ^ ((-(var_3)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (min((((val<unsigned int>) (val<bool>)1)), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_9)) / (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_21 = ((/* implicit */val<short>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11))))), (min(((-(((/* implicit */val<int>) (val<bool>)1)))), (((((/* implicit */val<bool>) 15636952513416779454ULL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
unsigned long long int var_3 = 10831694640874328818ULL;
unsigned short var_9 = (unsigned short)33980;
signed char var_11 = (signed char)-98;
unsigned char var_19 = (unsigned char)52;
int zero = 0;
unsigned long long int var_20 = 16934430859177159136ULL;
short var_21 = (short)-8383;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4294967223ULL;
    value_mismatch |= var_21 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_11, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
