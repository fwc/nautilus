/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 278
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=278
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
void test(val<short> var_0, val<int> var_1, val<unsigned long long int> var_5, val<int> var_6, val<unsigned char> var_7, val<int> zero, val<unsigned char*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<signed char>)-30)) ? (((((/* implicit */val<bool>) max((var_1), (((/* implicit */val<int>) (val<signed char>)30))))) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) (val<unsigned short>)65525)) ? (955260044) : (2147483646))))) : ((+((-(var_6)))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((var_1) + (2147483647))) >> (((((/* implicit */val<int>) var_7)) - (215)))))) && (((/* implicit */val<bool>) 0ULL)))))) <= ((((~(var_5))) % (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)199)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21841;
int var_1 = -320315607;
unsigned long long int var_5 = 16335984239235108924ULL;
int var_6 = -369042248;
unsigned char var_7 = (unsigned char)244;
int zero = 0;
unsigned char var_13 = (unsigned char)180;
unsigned short var_14 = (unsigned short)19941;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)81;
    value_mismatch |= var_14 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
