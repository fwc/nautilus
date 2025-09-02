/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4995
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4995
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
void test(val<bool> var_1, val<unsigned char> var_5, val<unsigned char> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_12 = (val<unsigned short>)4061;
    *var_13 = ((/* implicit */val<bool>) (~(max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))))), (((((/* implicit */val<bool>) (val<unsigned char>)238)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_8))))))));
    *var_14 = ((/* implicit */val<unsigned char>) max((max((((((/* implicit */val<int>) (val<unsigned char>)7)) + (((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) max((var_7), ((val<unsigned char>)139)))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_5 = (unsigned char)235;
unsigned char var_7 = (unsigned char)204;
unsigned char var_8 = (unsigned char)239;
int zero = 0;
unsigned short var_12 = (unsigned short)57727;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)27;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)4061;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)204;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_8, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
