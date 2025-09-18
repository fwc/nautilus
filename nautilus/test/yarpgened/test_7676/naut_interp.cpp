/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7676
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7676
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
void test(val<int> var_1, val<short> var_7, val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_19, val<unsigned char*> var_20) {
    *var_19 = (val<unsigned short>)32180;
    *var_20 -= ((val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)1)) / (var_1)))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1456189461;
short var_7 = (short)-25958;
unsigned short var_14 = (unsigned short)53200;
int zero = 0;
unsigned short var_19 = (unsigned short)53864;
unsigned char var_20 = (unsigned char)114;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)32180;
    value_mismatch |= var_20 != (unsigned char)162;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_14, zero, &var_19, &var_20);
  checksum();
}
