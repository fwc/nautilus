/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7212
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7212
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
void test(val<long long int> var_0, val<bool> var_1, val<long long int> var_4, val<unsigned short> var_5, val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned long long int*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_6)))) || (((/* implicit */val<bool>) min((var_0), (((/* implicit */val<long long int>) var_7)))))))) > (((/* implicit */val<int>) var_1))));
    *var_12 = ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<int>) var_8)) << (((var_7) - (4148684247U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4178624839721636258LL;
bool var_1 = (bool)0;
long long int var_4 = 8827386247418636231LL;
unsigned short var_5 = (unsigned short)33651;
unsigned long long int var_6 = 11086609295413770458ULL;
unsigned int var_7 = 4148684269U;
unsigned char var_8 = (unsigned char)199;
int zero = 0;
unsigned long long int var_11 = 544610514567788265ULL;
unsigned int var_12 = 1897819975U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != 3460300799U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
