/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4399
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4399
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
void test(val<bool> var_1, val<unsigned short> var_7, val<bool> var_9, val<unsigned short> var_10, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<bool>) ((((val<bool>) (val<bool>)0)) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_10))))), (((val<unsigned short>) var_9))))) : (((/* implicit */val<int>) var_1))));
    *var_12 = var_7;
    *var_13 -= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned short var_7 = (unsigned short)57678;
bool var_9 = (bool)0;
unsigned short var_10 = (unsigned short)30840;
int zero = 0;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)24578;
unsigned char var_13 = (unsigned char)197;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (unsigned short)57678;
    value_mismatch |= var_13 != (unsigned char)197;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
