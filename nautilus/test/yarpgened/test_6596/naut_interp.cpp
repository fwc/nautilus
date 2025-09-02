/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6596
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6596
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
void test(val<bool> var_0, val<unsigned short> var_3, val<int> var_10, val<bool> var_11, val<int> zero, val<bool*> var_17, val<unsigned char*> var_18, val<bool*> var_19) {
    *var_17 = ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_10)) <= (3881509041098835053ULL)))) : (((/* implicit */val<int>) var_11))))) < (max((min((((/* implicit */val<unsigned long long int>) -1)), (14780756482808037687ULL))), (((((/* implicit */val<bool>) 8825359478352153626LL)) ? (((/* implicit */val<unsigned long long int>) 7309210062283864202LL)) : (7903206645738015147ULL))))));
    *var_18 ^= ((/* implicit */val<unsigned char>) ((((val<unsigned long long int>) max((7903206645738015147ULL), (((/* implicit */val<unsigned long long int>) var_11))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_0), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) > (282235363062424850LL)))))))));
    *var_19 += ((/* implicit */val<bool>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_3 = (unsigned short)16331;
int var_10 = -615841892;
bool var_11 = (bool)1;
int zero = 0;
bool var_17 = (bool)1;
unsigned char var_18 = (unsigned char)203;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)203;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_11, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
