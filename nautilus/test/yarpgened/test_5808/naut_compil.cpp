/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5808
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5808
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
void test(val<int> var_1, val<long long int> var_5, val<unsigned short> var_7, val<bool> var_8, val<bool> var_11, val<unsigned short> var_12, val<unsigned short> var_13, val<signed char> var_16, val<signed char> var_17, val<int> zero, val<bool*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    *var_18 = ((/* implicit */val<bool>) var_16);
    *var_19 = ((/* implicit */val<unsigned char>) max(((val<signed char>)-16), ((val<signed char>)-1)));
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_13)))))) ? (((/* implicit */val<int>) max((var_12), (((/* implicit */val<unsigned short>) var_11))))) : (max((((((/* implicit */val<int>) var_17)) / (var_1))), (((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) (val<unsigned short>)5315))))))));
    *var_21 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) 18446744073709551614ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 316908289;
long long int var_5 = -4150305577810108485LL;
unsigned short var_7 = (unsigned short)46050;
bool var_8 = (bool)1;
bool var_11 = (bool)0;
unsigned short var_12 = (unsigned short)46406;
unsigned short var_13 = (unsigned short)50776;
signed char var_16 = (signed char)107;
signed char var_17 = (signed char)38;
int zero = 0;
bool var_18 = (bool)1;
unsigned char var_19 = (unsigned char)61;
short var_20 = (short)8233;
unsigned short var_21 = (unsigned short)63285;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)255;
    value_mismatch |= var_20 != (short)-19130;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_8, var_11, var_12, var_13, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
