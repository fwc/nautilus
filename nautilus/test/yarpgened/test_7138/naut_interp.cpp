/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7138
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
void test(val<long long int> var_6, val<long long int> var_7, val<long long int> var_8, val<int> zero, val<unsigned char*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (var_8) : (var_7)))) ? (((0LL) / (((/* implicit */val<long long int>) -619939517)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))));
    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) ((val<unsigned int>) -19LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 290689205786788014LL;
long long int var_7 = -1533778996943211813LL;
long long int var_8 = -1524517650625300068LL;
int zero = 0;
unsigned char var_15 = (unsigned char)217;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
