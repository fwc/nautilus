/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3227
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3227
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
void test(val<unsigned long long int> var_5, val<unsigned long long int> var_12, val<unsigned int> var_15, val<unsigned long long int> var_17, val<int> zero, val<long long int*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) 3073227698U)) ? (var_17) : (((/* implicit */val<unsigned long long int>) 1221739597U))))))) > (var_17)));
    *var_19 = ((/* implicit */val<unsigned char>) var_5);
    *var_20 ^= ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (var_15) : (var_15)))));
    *var_21 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) 1221739598U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)53517))) : (-4317701150453334788LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3286463456684630671ULL;
unsigned long long int var_12 = 12691102974485692352ULL;
unsigned int var_15 = 3278611684U;
unsigned long long int var_17 = 11437544535945689818ULL;
int zero = 0;
long long int var_18 = 491573230659919131LL;
unsigned char var_19 = (unsigned char)54;
unsigned short var_20 = (unsigned short)24923;
unsigned short var_21 = (unsigned short)41027;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (unsigned char)143;
    value_mismatch |= var_20 != (unsigned short)50623;
    value_mismatch |= var_21 != (unsigned short)12018;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
