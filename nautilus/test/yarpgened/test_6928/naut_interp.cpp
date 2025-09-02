/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6928
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6928
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
void test(val<signed char> var_1, val<bool> var_12, val<int> zero, val<unsigned char*> var_19, val<short*> var_20) {
    *var_19 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<short>)-7875)) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)-29))))) > (((((/* implicit */val<bool>) 4492060483723440301LL)) ? (7005916829819199343LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))))))) : ((+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)54)))))))));
    *var_20 = ((/* implicit */val<short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
bool var_12 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
short var_20 = (short)-10596;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
