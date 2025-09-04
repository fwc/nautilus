/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4963
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4963
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
void test(val<unsigned long long int> var_0, val<int> var_4, val<short> var_6, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)101))))) ? (((/* implicit */val<int>) (val<unsigned short>)16406)) : (-1780417349)));
    *var_11 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) min((var_4), (((/* implicit */val<int>) (val<signed char>)98))))) ? ((~(-527742601))) : ((+(var_4)))))));
    *var_12 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<int>) min((min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)232))), (((/* implicit */val<unsigned char>) ((var_0) > (var_0))))))), ((~(((/* implicit */val<int>) min((var_6), (var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13151217440132347704ULL;
int var_4 = 1100405716;
short var_6 = (short)-15363;
int zero = 0;
long long int var_10 = 7039029042836761050LL;
unsigned char var_11 = (unsigned char)4;
unsigned char var_12 = (unsigned char)170;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 16406LL;
    value_mismatch |= var_11 != (unsigned char)120;
    value_mismatch |= var_12 != (unsigned char)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
