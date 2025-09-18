/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4720
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4720
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<unsigned char> var_4, val<bool> var_6, val<unsigned char> var_7, val<int> zero, val<short*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<short>) max((max(((((val<bool>)0) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_7))))))), (((/* implicit */val<int>) var_6))));
    *var_11 = max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min(((val<short>)-10663), (((/* implicit */val<short>) var_0))))) || (((/* implicit */val<bool>) max((var_4), (((/* implicit */val<unsigned char>) (val<bool>)1)))))))), (max((((/* implicit */val<unsigned int>) (val<bool>)1)), (max((var_2), (((/* implicit */val<unsigned int>) (val<bool>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned int var_2 = 2584667116U;
unsigned char var_4 = (unsigned char)161;
bool var_6 = (bool)0;
unsigned char var_7 = (unsigned char)49;
int zero = 0;
short var_10 = (short)-20453;
unsigned int var_11 = 3148630696U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)49;
    value_mismatch |= var_11 != 2584667116U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, zero, &var_10, &var_11);
  checksum();
}
