/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7690
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
void test(val<unsigned char> var_2, val<unsigned char> var_6, val<int> var_7, val<unsigned short> var_8, val<unsigned char> var_9, val<unsigned long long int> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) 2147483647)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) (val<unsigned short>)55497)))) : (((((/* implicit */val<bool>) 0)) ? (2147483647) : (((/* implicit */val<int>) var_6)))))) : (((/* implicit */val<int>) (val<signed char>)75))));
    *var_13 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) max(((~(((/* implicit */val<int>) var_8)))), (((((/* implicit */val<bool>) 9174787053914893062ULL)) ? (var_7) : (((/* implicit */val<int>) var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
unsigned char var_6 = (unsigned char)54;
int var_7 = -1136516988;
unsigned short var_8 = (unsigned short)16212;
unsigned char var_9 = (unsigned char)171;
unsigned long long int var_11 = 15147820983404396206ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)5047;
unsigned char var_13 = (unsigned char)227;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (unsigned char)171;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_9, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
