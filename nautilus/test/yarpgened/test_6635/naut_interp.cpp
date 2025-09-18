/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6635
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
void test(val<unsigned long long int> var_7, val<unsigned short> var_18, val<int> zero, val<unsigned long long int*> var_19, val<long long int*> var_20) {
    *var_19 = min((var_7), (var_7));
    *var_20 = ((/* implicit */val<long long int>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 12419580198754069071ULL;
unsigned short var_18 = (unsigned short)48844;
int zero = 0;
unsigned long long int var_19 = 14813664574960829885ULL;
long long int var_20 = 7208813056642887484LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 12419580198754069071ULL;
    value_mismatch |= var_20 != 48844LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_18, zero, &var_19, &var_20);
  checksum();
}
