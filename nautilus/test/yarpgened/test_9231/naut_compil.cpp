/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9231
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9231
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
void test(val<unsigned short> var_0, val<short> var_3, val<short> var_5, val<unsigned char> var_7, val<short> var_8, val<short> var_11, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<short*> var_21) {
    *var_19 |= ((/* implicit */val<unsigned char>) var_0);
    *var_20 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) max(((-(((/* implicit */val<int>) var_0)))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_5)))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((max((15316108166582605025ULL), (((/* implicit */val<unsigned long long int>) (val<short>)-11174)))) >> (((((/* implicit */val<int>) var_11)) - (18701)))))) ? (((/* implicit */val<int>) var_11)) : ((((-(((/* implicit */val<int>) var_11)))) % (((((/* implicit */val<int>) var_11)) % (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25027;
short var_3 = (short)15871;
short var_5 = (short)5965;
unsigned char var_7 = (unsigned char)67;
short var_8 = (short)5818;
short var_11 = (short)18741;
int zero = 0;
unsigned char var_19 = (unsigned char)6;
unsigned char var_20 = (unsigned char)18;
short var_21 = (short)-2510;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)199;
    value_mismatch |= var_20 != (unsigned char)186;
    value_mismatch |= var_21 != (short)18741;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_8, var_11, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
