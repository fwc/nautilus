/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7793
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7793
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
void test(val<unsigned short> var_2, val<unsigned short> var_4, val<bool> var_5, val<int> var_6, val<unsigned short> var_8, val<bool> var_9, val<int> zero, val<bool*> var_10, val<unsigned short*> var_11) {
    *var_10 = var_5;
    *var_11 = ((/* implicit */val<unsigned short>) max((*var_11), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_9))))))) || (((/* implicit */val<bool>) ((((var_9) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_2)))) << (((((val<int>) var_8)) - (39527)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20798;
unsigned short var_4 = (unsigned short)16202;
bool var_5 = (bool)0;
int var_6 = -1684401082;
unsigned short var_8 = (unsigned short)39532;
bool var_9 = (bool)0;
int zero = 0;
bool var_10 = (bool)0;
unsigned short var_11 = (unsigned short)14304;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (unsigned short)14304;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
