/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5799
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5799
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
void test(val<unsigned char> var_5, val<short> var_6, val<short> var_9, val<int> var_11, val<bool> var_12, val<unsigned short> var_13, val<signed char> var_14, val<int> var_16, val<unsigned short> var_19, val<int> zero, val<unsigned short*> var_20, val<bool*> var_21, val<unsigned char*> var_22, val<int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned short>) var_11);
    *var_21 = ((/* implicit */val<bool>) ((((((var_12) ? (2029384132) : (1736687434))) > ((+(var_16))))) ? (max((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<unsigned char>)13)) : (((/* implicit */val<int>) var_6)))), (((((/* implicit */val<bool>) -1469167959)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) (val<unsigned char>)13)))))) : (((/* implicit */val<int>) var_19))));
    *var_22 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_9)), (var_19)))) ^ ((~(((/* implicit */val<int>) var_14))))))) ? (((/* implicit */val<int>) var_5)) : (((val<int>) var_13))));
    *var_23 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)248;
short var_6 = (short)-10735;
short var_9 = (short)24956;
int var_11 = -392672015;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)49462;
signed char var_14 = (signed char)-113;
int var_16 = -2102866073;
unsigned short var_19 = (unsigned short)60032;
int zero = 0;
unsigned short var_20 = (unsigned short)12197;
bool var_21 = (bool)1;
unsigned char var_22 = (unsigned char)77;
int var_23 = 582244227;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)19697;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned char)248;
    value_mismatch |= var_23 != 248;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_9, var_11, var_12, var_13, var_14, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
