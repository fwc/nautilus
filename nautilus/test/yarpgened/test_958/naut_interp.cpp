/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=958
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
void test(val<signed char> var_1, val<int> var_7, val<bool> var_10, val<int> zero, val<long long int*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1961121067)) ? (((/* implicit */val<int>) var_10)) : (var_7)))) ? (1961121067) : (((/* implicit */val<int>) var_1))));
    *var_21 = ((/* implicit */val<short>) (val<unsigned char>)151);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
int var_7 = -124111138;
bool var_10 = (bool)1;
int zero = 0;
long long int var_20 = 5925760462602925024LL;
short var_21 = (short)-28470;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1961121067LL;
    value_mismatch |= var_21 != (short)151;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_10, zero, &var_20, &var_21);
  checksum();
}
