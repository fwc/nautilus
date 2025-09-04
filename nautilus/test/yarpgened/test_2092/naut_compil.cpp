/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2092
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2092
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
void test(val<unsigned short> var_1, val<bool> var_4, val<unsigned short> var_5, val<unsigned char> var_9, val<int> zero, val<bool*> var_13, val<signed char*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<bool>) var_5);
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_9)) * (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)24826)) & (((/* implicit */val<int>) (val<unsigned char>)219))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) min(((val<signed char>)-49), (((/* implicit */val<signed char>) var_4)))))))));
    *var_15 = (val<bool>)0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5622;
bool var_4 = (bool)1;
unsigned short var_5 = (unsigned short)21314;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
bool var_13 = (bool)1;
signed char var_14 = (signed char)-71;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)36;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
