/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 149
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=149
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
void test(val<bool> var_1, val<unsigned int> var_2, val<long long int> var_5, val<bool> var_7, val<long long int> var_10, val<unsigned char> var_11, val<int> zero, val<int*> var_12, val<unsigned int*> var_13, val<int*> var_14) {
    *var_12 = ((/* implicit */val<int>) min(((((~(347976693U))) - (((/* implicit */val<unsigned int>) ((var_7) ? (((/* implicit */val<int>) (val<unsigned short>)65513)) : (((/* implicit */val<int>) var_1))))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) 1968044959U)) || (((/* implicit */val<bool>) -1391123187))))) / (((/* implicit */val<int>) (val<unsigned short>)9711)))))));
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) ((var_10) <= (((((/* implicit */val<bool>) var_10)) ? (((var_5) / (var_5))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))))));
    *var_14 = ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_2 = 1085174115U;
long long int var_5 = 6523959819523238251LL;
bool var_7 = (bool)1;
long long int var_10 = 6633459479047778503LL;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
int var_12 = -1494723325;
unsigned int var_13 = 3797996977U;
int var_14 = 76290037;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 0U;
    value_mismatch |= var_14 != 1085174115;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
