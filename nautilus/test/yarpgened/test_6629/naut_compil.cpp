/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6629
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6629
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
void test(val<int> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<signed char> var_7, val<unsigned short> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) max((var_7), (var_7)))) / (((/* implicit */val<int>) var_9))));
    *var_14 = ((/* implicit */val<bool>) max((*var_14), (((/* implicit */val<bool>) ((((var_1) > (((/* implicit */val<int>) min((var_3), (((/* implicit */val<unsigned char>) (val<signed char>)127))))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned short>)32735)) : (((/* implicit */val<int>) (val<signed char>)50))))) : (((val<unsigned int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -475210422;
unsigned short var_2 = (unsigned short)13740;
unsigned char var_3 = (unsigned char)222;
signed char var_7 = (signed char)-22;
unsigned short var_9 = (unsigned short)23958;
unsigned int var_10 = 933724368U;
int zero = 0;
unsigned short var_13 = (unsigned short)31327;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, var_9, var_10, zero, &var_13, &var_14);
  checksum();
}
