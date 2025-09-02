/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7606
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7606
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
void test(val<unsigned long long int> var_1, val<long long int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_11 = ((((/* implicit */val<bool>) var_3)) ? (max((((/* implicit */val<unsigned long long int>) var_10)), ((+(var_4))))) : (((min((14595529812824414699ULL), (var_5))) % (var_4))));
    *var_12 = ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10139593531193022592ULL;
long long int var_3 = -3358274928732924930LL;
unsigned long long int var_4 = 7841558277875413641ULL;
unsigned long long int var_5 = 2551280246753813302ULL;
long long int var_10 = 1797998458571101359LL;
int zero = 0;
unsigned long long int var_11 = 17340445855635735782ULL;
long long int var_12 = -6832752383050662238LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 7841558277875413641ULL;
    value_mismatch |= var_12 != -8307150542516529024LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
