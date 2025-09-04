/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8002
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8002
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
void test(val<long long int> var_4, val<long long int> var_9, val<bool> var_11, val<short> var_15, val<int> zero, val<unsigned char*> var_17, val<int*> var_18, val<long long int*> var_19) {
    *var_17 *= ((/* implicit */val<unsigned char>) (val<bool>)1);
    *var_18 += ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((val<unsigned int>) ((((/* implicit */val<int>) var_15)) > (((/* implicit */val<int>) (val<bool>)1)))))) : (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_15)), ((val<unsigned short>)2667)))) ? (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) / (var_9))) : (var_4)))));
    *var_19 = ((/* implicit */val<long long int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4446811916390379521LL;
long long int var_9 = -8222220917851317513LL;
bool var_11 = (bool)0;
short var_15 = (short)-10262;
int zero = 0;
unsigned char var_17 = (unsigned char)175;
int var_18 = -2093620362;
long long int var_19 = -1855821380291249115LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)175;
    value_mismatch |= var_18 != -2093620362;
    value_mismatch |= var_19 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_11, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
