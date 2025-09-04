/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8962
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8962
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<bool> var_3, val<bool> var_6, val<unsigned long long int> var_8, val<unsigned int> var_9, val<int> zero, val<short*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<short>) min((*var_10), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(var_8)))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (var_9)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (((var_3) ? (-1LL) : (((/* implicit */val<long long int>) 376732489U)))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3918234800U))))) * (((/* implicit */val<int>) var_2))))))))));
    *var_11 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46721;
unsigned char var_2 = (unsigned char)217;
bool var_3 = (bool)1;
bool var_6 = (bool)1;
unsigned long long int var_8 = 4627749065336521745ULL;
unsigned int var_9 = 2649217077U;
int zero = 0;
short var_10 = (short)25812;
unsigned short var_11 = (unsigned short)2988;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)217;
    value_mismatch |= var_11 != (unsigned short)46721;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
