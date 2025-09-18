/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5417
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5417
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
void test(val<unsigned short> var_2, val<signed char> var_5, val<unsigned char> var_7, val<unsigned short> var_9, val<unsigned long long int> var_10, val<bool> var_11, val<bool> var_12, val<int> zero, val<bool*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<bool>) var_2);
    *var_14 -= ((/* implicit */val<unsigned short>) ((((var_11) ? (((var_12) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_11)), (var_7))))))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_5)) + (2147483647))) >> (((((/* implicit */val<int>) var_9)) - (49181))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49702;
signed char var_5 = (signed char)-82;
unsigned char var_7 = (unsigned char)207;
unsigned short var_9 = (unsigned short)49181;
unsigned long long int var_10 = 7400714037178018493ULL;
bool var_11 = (bool)1;
bool var_12 = (bool)0;
int zero = 0;
bool var_13 = (bool)1;
unsigned short var_14 = (unsigned short)17220;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)17220;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_9, var_10, var_11, var_12, zero, &var_13, &var_14);
  checksum();
}
