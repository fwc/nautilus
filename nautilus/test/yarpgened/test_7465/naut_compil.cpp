/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7465
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_2, val<bool> var_5, val<unsigned char> var_8, val<bool> var_10, val<bool> var_12, val<int> zero, val<long long int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<unsigned char>) var_2))) << (((((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) var_0))))) * (((/* implicit */val<int>) var_8)))) - (128)))));
    *var_21 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) % (var_2))), (((/* implicit */val<unsigned long long int>) ((val<short>) ((((/* implicit */val<int>) var_12)) + (((/* implicit */val<int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17732;
unsigned long long int var_2 = 1680950978084863317ULL;
bool var_5 = (bool)0;
unsigned char var_8 = (unsigned char)140;
bool var_10 = (bool)0;
bool var_12 = (bool)1;
int zero = 0;
long long int var_20 = -5072790076452279526LL;
unsigned short var_21 = (unsigned short)39465;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 348160LL;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_10, var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
