/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7172
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
void test(val<signed char> var_0, val<unsigned short> var_4, val<long long int> var_6, val<short> var_8, val<int> var_9, val<long long int> var_10, val<int> zero, val<signed char*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 10U)) ? (var_10) : (4271836428723872077LL)))) || (((var_9) < (((/* implicit */val<int>) var_4)))))) ? (var_6) : (((((/* implicit */val<bool>) var_0)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))));
    *var_20 = ((/* implicit */val<bool>) (~(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned short var_4 = (unsigned short)51264;
long long int var_6 = -330589178340583380LL;
short var_8 = (short)9151;
int var_9 = -465555167;
long long int var_10 = -8080360291886002576LL;
int zero = 0;
signed char var_19 = (signed char)-111;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)44;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_8, var_9, var_10, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
