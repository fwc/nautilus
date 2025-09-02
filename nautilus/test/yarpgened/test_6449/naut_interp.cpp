/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6449
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6449
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
void test(val<unsigned char> var_1, val<unsigned short> var_3, val<unsigned char> var_5, val<unsigned short> var_6, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) (((+((~(((/* implicit */val<int>) var_3)))))) - (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)20688))) : (((/* implicit */val<int>) (val<unsigned short>)44659))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<int>) (val<unsigned short>)20672)) < (((/* implicit */val<int>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned short var_3 = (unsigned short)45585;
unsigned char var_5 = (unsigned char)152;
unsigned short var_6 = (unsigned short)26111;
int zero = 0;
unsigned short var_18 = (unsigned short)55607;
unsigned short var_19 = (unsigned short)37790;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)64798;
    value_mismatch |= var_19 != (unsigned short)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
