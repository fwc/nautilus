/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5908
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
void test(val<signed char> var_0, val<short> var_5, val<long long int> var_6, val<signed char> var_15, val<int> zero, val<signed char*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) max((*var_19), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((val<bool>) (val<short>)-19204)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)200)) || (((/* implicit */val<bool>) var_15))))))))) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) -1248242614)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_0))))))))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
short var_5 = (short)22934;
long long int var_6 = -4435351114884044828LL;
signed char var_15 = (signed char)27;
int zero = 0;
signed char var_19 = (signed char)27;
unsigned short var_20 = (unsigned short)28751;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)27;
    value_mismatch |= var_20 != (unsigned short)22934;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_15, zero, &var_19, &var_20);
  checksum();
}
