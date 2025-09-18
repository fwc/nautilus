/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5492
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5492
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
void test(val<long long int> var_0, val<long long int> var_6, val<int> zero, val<unsigned long long int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 ^= ((/* implicit */val<unsigned long long int>) var_0);
    *var_11 = ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4759854527486018655LL;
long long int var_6 = -3348061499768692836LL;
int zero = 0;
unsigned long long int var_10 = 10378933291252862755ULL;
unsigned long long int var_11 = 11912813948254366782ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 15134072425547598716ULL;
    value_mismatch |= var_11 != 15098682573940858780ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_10, &var_11);
  checksum();
}
