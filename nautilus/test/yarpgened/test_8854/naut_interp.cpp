/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8854
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8854
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
void test(val<bool> var_2, val<unsigned short> var_3, val<bool> var_4, val<signed char> var_5, val<unsigned char> var_7, val<int> zero, val<bool*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<unsigned short>)31188)), ((+((~(((/* implicit */val<int>) var_3))))))));
    *var_13 |= ((/* implicit */val<short>) ((max((((var_4) ? (((/* implicit */val<int>) (val<unsigned short>)31203)) : (((/* implicit */val<int>) var_7)))), (((((/* implicit */val<int>) var_2)) * (((/* implicit */val<int>) (val<unsigned short>)31188)))))) <= (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)17282;
bool var_4 = (bool)1;
signed char var_5 = (signed char)64;
unsigned char var_7 = (unsigned char)58;
int zero = 0;
bool var_12 = (bool)1;
short var_13 = (short)18195;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)18195;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
