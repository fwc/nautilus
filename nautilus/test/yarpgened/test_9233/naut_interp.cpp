/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9233
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9233
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
void test(val<bool> var_3, val<long long int> var_4, val<bool> var_5, val<short> var_7, val<int> zero, val<short*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4)))))));
    *var_11 = (~(((/* implicit */val<int>) ((((/* implicit */val<int>) min((var_5), (var_3)))) <= (((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) != (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
long long int var_4 = 4437610250108699831LL;
bool var_5 = (bool)0;
short var_7 = (short)-6076;
int zero = 0;
short var_10 = (short)-17265;
int var_11 = 444919382;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-1;
    value_mismatch |= var_11 != -2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
