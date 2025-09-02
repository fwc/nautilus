/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 283
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=283
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
void test(val<unsigned long long int> var_3, val<bool> var_4, val<short> var_13, val<long long int> var_14, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (+(-9204170290001521216LL)))) ? (((/* implicit */val<long long int>) 2143289344U)) : (max((var_14), (-9204170290001521216LL)))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 7918551699051390606ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_3)))) ? (576460752303423487LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13044289518201448810ULL;
bool var_4 = (bool)1;
short var_13 = (short)-31164;
long long int var_14 = -5843244394124520091LL;
int zero = 0;
unsigned short var_18 = (unsigned short)48304;
unsigned short var_19 = (unsigned short)8814;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_13, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
