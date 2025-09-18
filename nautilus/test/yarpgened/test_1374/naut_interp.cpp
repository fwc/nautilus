/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1374
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1374
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
void test(val<bool> var_2, val<unsigned int> var_14, val<int> zero, val<bool*> var_20, val<unsigned char*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_2)), (((((((/* implicit */val<bool>) (val<unsigned short>)0)) || ((val<bool>)1))) ? (14U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) (val<signed char>)109))))))));
    *var_21 = ((/* implicit */val<unsigned char>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<short>)21858)) : (((/* implicit */val<int>) (val<short>)31344))));
    *var_22 = ((/* implicit */val<short>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned int var_14 = 3817450362U;
int zero = 0;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)38;
short var_22 = (short)-6599;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)98;
    value_mismatch |= var_22 != (short)-21638;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
}
