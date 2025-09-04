/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1249
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1249
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
void test(val<unsigned short> var_2, val<unsigned char> var_4, val<unsigned long long int> var_5, val<unsigned char> var_6, val<signed char> var_8, val<unsigned char> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned short*> var_12, val<unsigned int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) min((*var_11), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_6)))) : (((((/* implicit */val<int>) var_8)) + (((/* implicit */val<int>) var_4)))))) == (((/* implicit */val<int>) var_4)))))));
    *var_12 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_6))));
    *var_13 = ((/* implicit */val<unsigned int>) max((var_5), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) + (((((/* implicit */val<bool>) var_5)) ? (var_5) : (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50805;
unsigned char var_4 = (unsigned char)149;
unsigned long long int var_5 = 16149619903566002672ULL;
unsigned char var_6 = (unsigned char)189;
signed char var_8 = (signed char)-111;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
unsigned long long int var_11 = 15127850740122436746ULL;
unsigned short var_12 = (unsigned short)26348;
unsigned int var_13 = 1686181121U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (unsigned short)65346;
    value_mismatch |= var_13 != 3919657616U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
