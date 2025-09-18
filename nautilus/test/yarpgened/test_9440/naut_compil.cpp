/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9440
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9440
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
void test(val<unsigned char> var_12, val<unsigned char> var_13, val<unsigned long long int> var_14, val<int> zero, val<long long int*> var_20, val<bool*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) var_13);
    *var_21 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) max((6013359671958666771ULL), (var_14))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (6013359671958666772ULL) : (12433384401750884856ULL)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) (val<bool>)1)))) : (((((/* implicit */val<bool>) (val<short>)-12)) ? (((/* implicit */val<unsigned int>) 0)) : (124294958U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)150;
unsigned char var_13 = (unsigned char)104;
unsigned long long int var_14 = 11089547993598088446ULL;
int zero = 0;
long long int var_20 = 875644027216712462LL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 104LL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, var_14, zero, &var_20, &var_21);
  checksum();
}
