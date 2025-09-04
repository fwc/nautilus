/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2507
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2507
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
void test(val<bool> var_0, val<unsigned char> var_2, val<unsigned int> var_4, val<unsigned char> var_6, val<unsigned short> var_9, val<int> zero, val<int*> var_10, val<long long int*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<short>) var_4))) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_0))))) : (6284491828593869379LL)));
    *var_11 = ((/* implicit */val<long long int>) (~(12956160276683679668ULL)));
    *var_12 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (0U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)16380)) || (((/* implicit */val<bool>) 2405937048011270448LL))))))))) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_2 = (unsigned char)98;
unsigned int var_4 = 381323937U;
unsigned char var_6 = (unsigned char)21;
unsigned short var_9 = (unsigned short)30462;
int zero = 0;
int var_10 = 1586688773;
long long int var_11 = -1573563303106495100LL;
unsigned char var_12 = (unsigned char)107;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1;
    value_mismatch |= var_11 != 5490583797025871947LL;
    value_mismatch |= var_12 != (unsigned char)106;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
